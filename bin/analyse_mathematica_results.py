import numpy as np
import matplotlib.pyplot as plt

def analyse_file(f, outputs, details_wrong,ax=None, tol=0.005):
    """Analyse the number of correct and incorrect boundary points for a given boundary output file, after checking with mathematica (*_counts.wl)"""
    fh=open(f,"r")
    lines=fh.readlines()
    n=len(lines)
    l=0
    nc=0 #number of correct points (out of those analysed)
    n0=0 #number with max at 0 (out of those analysed)
    ni=0 #number of incorrect, either next bin or wrong (for next bin: ni-nwrong)
    nwrong=0 #number of wrong points (not next bin)
    nonanalysed=0 #number of non-analysed
    
    
    wrong_pos=[]
    while l < n:
        #need to doublecheck that each input point has been analysed. This is seen as the same j,i in the line with # and the next one
        line0=lines[l].strip()
        line1=lines[l+1].strip()
        
        if line0.startswith("#") and not line1.startswith("#"):
            l0=line0.replace("#","")
            l1=line1
            j0,i0=l0.split(",")
            j1,i1=l1.split(";")[0].split(",")
            if (j0==j1) and (i0==i1): #point analysed correctly
                splitted_1=l1.split(";")
                ids,pythonpts,mathematicapoints,differences,decision=splitted_1
                #print(pythonpts)
                if decision=="c":
                    nc+=1
                elif decision=="i":
                    ni+=1
                    nbp=0 #nextbinp
                    pbp=0 #previousbinp
                    goodp=0 #good position
                    wrongp=1 #will put flag to 0 when condition for either same bin or next bin is met
                    nbs=0 #nextbins
                    pbs=0 #previousbins
                    goods=0
                    wrongs=1 #will put flag to 0 when condition for either same bin or next bin is met
                    dpos,dstp=differences.split(",") #pos-pos0, rho-stp0
                    dpos=float(dpos)
                    dstp=float(dstp)
                    errorp=dpos/tol 
                    errors=dstp/tol
                    
                    
                    #can be incorrect because of the position, steepness, or both
                    if dpos>0:
                        if errorp<1:
                            goodp=1
                            wrongp=0
                        elif errorp>1 and errorp<2:
                            print("next bin position", pythonpts,mathematicapoints,differences)
                            nbp=1 #position corresponds to next bin
                            wrongp=0
                    elif dpos<0:
                        if np.abs(dpos)<tol:
                            print("previous bin position", pythonpts,mathematicapoints, differences)
                            pbp=1
                            wrongp=0
                    if nbp==0 and pbp==0 and goodp==0:
                        print("!!wrong position (neither next nor previous bin) (counter is %d)"%wrongp, pythonpts,mathematicapoints,differences)
                        
                    if dstp>0:
                        if errors<1:
                            goods=1
                            wrongs=0
                        elif errors>1 and errors<2:
                            print("next bin steepness", pythonpts,mathematicapoints,differences)
                            nbs=1 #steepness corresponds to next bin
                            wrongs=0
                    elif dstp<0:
                        if np.abs(dstp)<tol:
                            print("previous bin steepness", pythonpts,mathematicapoints,differences)
                            pbs=1
                            wrongs=0
                    if nbs==0 and pbs==0 and goods==0:
                        print("!!wrong steepness (counter is %d)"%wrongs, pythonpts,mathematicapoints,differences)
                    details_wrong.append([j0,i0, nbp,pbp,goodp,nbs,pbs,goods])
                    if  wrongs or wrongp:
                        nwrong+=1
                    if ax:
                        p,s=pythonpts.split(",")
                        p=float(p)
                        s=float(s)
                        ax.scatter(p,s,s=5,color="b")
                        
                        p,s=mathematicapoints.split(",")
                        p=float(p)
                        s=float(s)
                        ax.scatter(p,s,s=5,color="r")
                        wrong_pos.append(p)
                    
                    
                elif decision=="0":
                    n0+=1
                else:
                    raise ValueError("Could not recognise decision", decision)
            else:
                raise ValueError("!!points do not coincide", i0,j0, i1, i1)
                
            l+=2
        else:
            print("!!!point skipped", line0, line1)
            nonanalysed+=1
            l+=1
        
    fh.close() 
    
    outputs.append([j0,n,nc,ni,nwrong,n0,nonanalysed])
    hist,edges=np.histogram(wrong_pos,bins=np.arange(0,2,0.1))
    for i in range(len(hist)):
        if hist[i]>0:
            print(edges[i],":",hist[i])
    return wrong_pos


def print_statistics(outputs):
    outputs=np.asarray(outputs,dtype=int)
    print(len(outputs))
    npoints=np.sum(outputs[:,[2,3,5,6]],axis=1)#correct+incorrect+0+nonanalysed (incorrect includes next bin and further away)
    points_nonanalysed=outputs[:,6]
    points_analysed=npoints-points_nonanalysed
    points_good=outputs[:,2]
    points_i=outputs[:,3]
    points_i_notnextbin=outputs[:,4] 
    points_i_nextbin=points_i-points_i_notnextbin
    
    print("=============")
    print("non-analysed statistics:")
    print(points_nonanalysed)
    percentage_non=points_nonanalysed/npoints
    print(percentage_non)
    print("all points analysed", len(np.where(percentage_non<1e-10)[0]))
    bins=np.arange(0,1,0.001)
    bins[0]=1e-10 #add tolerance so it does not count those with all good
    hist,edges=np.histogram(percentage_non,bins=bins)
    for b in range(len(hist)):
        if hist[b]>0:
            print(hist[b], "jobs with [%g, %g)"%(edges[b]*100, edges[b+1]*100),"% of nonanalysed points",end="\n")
    print("=============")
    print("wrong, not next bin statistics:")
    print(points_i_notnextbin)
    percentage_i_notnextbin=points_i_notnextbin/points_analysed
    bins=np.arange(0,1,0.001)
    bins[0]=1e-10 #add tolerance so it does not count those with all good
    hist,edges=np.histogram(percentage_i_notnextbin,bins=bins)
    for b in range(len(hist)):
        if hist[b]>0:
            print(hist[b], "jobs with [%g, %g)"%(edges[b]*100, edges[b+1]*100),"% of wrong, not next bin points",end="\n")
    print("=============")
    print("wrong, next bin statistics:")
    print(points_i_nextbin)
    percentage_i_nextbin=points_i_nextbin/points_analysed
    bins=np.arange(0,1.02,0.01)
    bins[0]=1e-10 #add tolerance so it does not count those with all good
    #print(percentage_i_nextbin)
    hist,edges=np.histogram(percentage_i_nextbin,bins=bins)
    for b in range(len(hist)):
        if hist[b]>0:
            print(hist[b],"jobs with [%g, %g)"%(edges[b]*100, edges[b+1]*100),"% of wrong, but next bin points",end="\n")
    print("=============")
    print("good statistics:")
    print(points_good)
    percentage_good=points_good/points_analysed
    print(percentage_good)
    bins=np.arange(0.8,1.02,0.01)
    bins=bins-1e-10 #trick so that I have a bin with the percentage 1. between [1., 1.01], as it should be
    hist,edges=np.histogram(percentage_good,bins=bins)
    
    
    for b in range(len(hist)):
        if hist[b]>0:
            print(hist[b],"jobs with [%g, %g)"%(edges[b]*100, edges[b+1]*100),"% of coincident (same bin) points",end="\n")
    
    plt.hist(percentage_good)
    plt.show()