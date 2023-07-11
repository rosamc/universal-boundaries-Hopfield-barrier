import numpy as np
import sys,os
sys.path.append("../cfO2")
sys.path.append("../../bin")
import N4av_noneq_100

from scipy.interpolate import interp1d

def get_x05(f,xvals):
    #first get midpoint
    min_=np.min(f)
    max_=np.max(f)
    midpoint=min_+0.5*(max_-min_)
    #print(f)
    #then get points around x05
    x05=xvals[np.where(f>=midpoint)[0][0]]
    return x05


def calculate_ps_fromnumerics_doublecheck_interpolate_100(pars=None,n1=75,n2=75,Hill=False,nH=2):
    
    xvals=np.logspace(-60,60,n1)
    f=np.zeros(n1)
    for x_ in range(n1):
        if Hill:
            f[x_]=(xvals[x_]**nH)/(1+xvals[x_]**nH)
        else:
            f[x_]=N4av_noneq_100.getGRFval(pars,xvals[x_])
    xint=np.logspace(-60,60,100000)
    intfunc=interp1d(xvals,f)
    fint=intfunc(xint)
    x05=get_x05(fint,xint)
    xvals=np.logspace(np.log10(0.0001*x05),np.log10(1000*x05),n2)
    #xvals=np.logspace(-3,3,n2)
    f=np.zeros(n2)
    for x_ in range(n2):
        if Hill:
            f[x_]=(xvals[x_]**nH)/(1+xvals[x_]**nH)
        else:
            f[x_]=N4av_noneq_100.getGRFval(pars,xvals[x_])
    xint=np.logspace(np.log10(xvals.min()),np.log10(xvals.max()),100000)
    intfunc=interp1d(xvals,f)
    fint=intfunc(xint)
    x05=get_x05(fint,xint)
    #print(x05)
    derivative=np.diff(fint)/np.diff(xint)
    argmax=np.argmax(np.abs(derivative))
    pos=xint[argmax]/x05
    stp=np.abs(derivative[argmax])*x05
    return [pos,stp,x05,xvals,f,xint,fint]

jid=int(sys.argv[1])-1
row=jid//3
colchunk=jid%3
c0,c1=[[0,27],[27,54],[54,82]][colchunk]

mat=np.load("N4avnoneq_space_cont_out/mat_N4avnoneq_space_cont_12.npy")
mat_pars=np.load("N4avnoneq_space_cont_out/mat_pars_N4avnoneq_space_cont_12.npy")

mat_=mat[row,c0:c1]
matp_=mat_pars[row,c0:c1]
for c,cell in enumerate(mat_):
    if cell>0:
        pars=matp_[c].copy()
        result=calculate_ps_fromnumerics_doublecheck_interpolate_100(pars,n1=75,n2=1000)
        pos,stp,x05,xvals,f,xint,fint=result
        outf=open("out_%d_%d.txt"%(jid,c),"w")
        outf.write(",".join(list(map(str,pars))))
        outf.write("\n")
        outf.write("%g,%g,%g\n"%(pos,stp,x05))
        outf.write(",".join(list(map(str,xvals))))
        outf.write("\n")
        outf.write(",".join(list(map(str,f))))
        outf.write("\n")
        outf.close()




