import sys,os
import numpy as np
sys.path.append('/home/rm335/repos/sharedposstpNov19/GeneRegulatoryFunctions/utilsGRF')
sys.path.append('../cfO2')
import BoundaryFinder as BF
import time
import itertools
import json
from functools import partial
import TFA4_TFB2

instance=TFA4_TFB2.GRFCalculations_ld_50_15()
B=np.array([1])

def func(pars,fipars=None):
    out=[None,None]
    pars2=np.concatenate((fipars,pars))
    instance.fill_num_den(pars2,B)
    result=instance.interfaceps(minx0=True,maxx1=False,absder=True)
    if result[0]>0:
        out=[result[0],result[1]]
    return out

fiar=np.array([0.0,0.25,0.25,0.25,0.25,0.0,0.0,0.5,0.5,0.5,0.0,0.0,0.5,0.5,0.0,0.0,0.5,0.0,0.0,0.0,0.0,0.0,0.75,0.75,0.25,0.25,0.75,0.25,0.25,0.25,0.25,0.0,0.75,0.25,0.25,0.25,0.25,0.0,0.25,0.25,0.0,0.0,1.0,0.5,0.5,0.5,0.5,0.0,0.5,0.5,0.0,0.0,0.5,0.5,0.0,0.0,0.0,0.75,0.75,0.25,0.25,0.25,0.25,0.5])


step=0.005
stp_ar=np.arange(0.3,2.5+step,step)
pos_ar=np.arange(0.4,2.5+step,step)


#minp=1e-3
#maxp=1e3

sys.stdout.flush()
jid=int(sys.argv[1])-1

#total jids=20*4*2*2=320
extremesu=[[-2,2],[-1.5,1.5],[-1,1],[-0.5,0.5]]
prob_par=[0.2,0.5]
prob_replace=[0.2,0.6]
extremespars=[[10**(-0.5),10**(0.5)],[1e-1,1e1],[1e-2,1e2],[1e-3,1e3],[1e-6,1e6]]

combination=list(itertools.product(extremesu,prob_par,prob_replace,extremespars))[jid]

extremesu,prob_par,prob_replace,extrp=combination
minp,maxp=extrp

func_=partial(func,fipars=fiar)
func_.__name__="AminusBav"
constraints=None
settings={'pars_limit':[minp,maxp],
          'compute_x_y_f':func_,
          'npars':63, #doesn´t consider the fiar pars
          'constraints':constraints,
           'row_ar':stp_ar,
          'col_ar':pos_ar,
          'seed':jid,
         'mat':None,
         'mat_pars':None}

niters_conv=1500
extr_uniform=[extremesu[0],extremesu[1]]

niters=15000
L=15
name_save='AminusBav'
print(name_save)
dir_path = os.path.dirname(os.path.realpath(__file__))
dir_path2=dir_path.replace("/home","/n/scratch3/users/r")
outfolder=os.path.join(dir_path2,name_save+'_out_%d'%jid)

if not os.path.isdir(outfolder):
    os.mkdir(outfolder)


args={'niters':niters,
      'niters_conv':niters_conv,
      'niters_conv_points':1000,
      'niters_save':5,
      'folder_save':outfolder,
       'name_save':name_save, 
      'prob_par':prob_par,
      'prob_replace':prob_replace,
      'extr_uniform':extr_uniform,
      'L_project':L,
      'plotting':False,
      'verbose':True,
       'dofirstmutate':True,'dopullcentroids':True,'dopulltangents':True}

#print(settings)
#save parameters used for running the algorithm

def function_tostring(x):
    if isinstance(x, np.ndarray):
        return ','.join(map(str,x))
    else:
        return x.__name__
outfolder_final='final_results'
outfnames=[os.path.join(outfolder,name_save+'_%d.sett'%jid),os.path.join(outfolder_final,name_save+'_%d.sett'%jid)]
for fname in outfnames:
    outf=open(fname,'w')
    #outf.write(time.ctime()+'\n')
    #with open(outf, 'w') as file:
    json.dump(dict({'time':time.ctime()},**settings),outf,default=function_tostring) # use `json.loads` to do the reverse
    outf.close()

    outf=open(fname.replace('.sett','.args'),'w')
    #outf.write(time.ctime()+'\n')
    #with open(outf, 'w') as file:
    json.dump(dict({'time':time.ctime()},**args),outf) # use `json.loads` to do the reverse
    outf.close()
#run
ti=time.time() 
BE=BF.BoundaryExplorer(**settings)
if settings['mat'] is None:
    BE.get_initial_points(10)
BE.extend_boundary(**args)
name='%s_%d_last'%(name_save,jid)
np.save(os.path.join(outfolder_final,'mat_'+name+'.npy'),BE.mat)
np.save(os.path.join(outfolder_final,'mat_pars_'+name+'.npy'),BE.mat_pars)
te=time.time()
print('time difference',te-ti)
print(BE.converged)

