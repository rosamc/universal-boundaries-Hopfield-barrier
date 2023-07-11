(* ::Package:: *)

Print["First line"];
infolder=$ScriptCommandLine[[2]];
absder=$ScriptCommandLine[[3]];
If [absder=="True", Print["absder True"], Print["absder False"]];
SetDirectory[infolder];
tolpos=0.005;
tolstp=0.005;
Print["starting at"];
Print[infolder];
infiles=FileNames["mat*.in"];

num[an_,ad_,bn_,bd_,cn_,cd_,dn_,dd_,en_,ed_,fn_, fd_, gn_, gd_, x_]:=an+bn*x+cn*x^2+dn*x^3+en*x^4+fn*x^5+gn*x^6;
den[an_,ad_,bn_,bd_,cn_,cd_,dn_,dd_,en_,ed_,fn_, fd_, gn_, gd_, x_]:=ad+bd*x+cd*x^2+dd*x^3+ed*x^4+fd*x^5+gd*x^6;
GRF[an_,ad_,bn_,bd_,cn_,cd_,dn_,dd_,en_,ed_,fn_, fd_, gn_, gd_, x_]:=num[an,ad,bn,bd,cn,cd,dn,dd,en,ed,fn,fd,gn,gd,x]/den[an,ad,bn,bd,cn,cd,dn,dd,en,ed,fn,fd,gn,gd,x];
npars=14;
parsliststring={"ad","an","bd","bn","cd","cn","dd","dn","ed","en", "fd", "fn", "gd", "gn"};(*this is the order in the .cpp code*)
Print["Defined GRF"];
logspace[a_, b_, n_] := 10.0^Range[a, b, (b - a)/(n - 1)];
ar = logspace[-60, 60, 6000];
For[j=1,j<=Length[infiles],j++, 
infname=infiles[[j]];
WriteString["stdout",infname,"\n"];
outfname=StringJoin[StringSplit[infname,"."][[1]],"_checked2.out"];
outfname2=StringJoin[StringSplit[infname,"."][[1]],"_discarded_maxD02.out"];
outfname3=StringJoin[StringSplit[infname,"."][[1]],"_allcomparisons.out"];
WriteString["stdout",outfname,"\n"];
data=Import[infname,"CSV"];
outf=OpenWrite[outfname];
outf2=OpenWrite[outfname2];
outf3=OpenWrite[outfname3];
WriteString[outf,StringRiffle[{"pos","rho"},","],";", StringRiffle[parsliststring,","],"\n"];
For[i =1,i<= Length[data], i++,
WriteString[outf3,"#",j,",",i,"\n"];
{pos0, stp0}=data[[i]][[1;;2]];
PLIST=data[[i]][[3;;]];
{ad,an,bd,bn,cd,cn,dd,dn,ed,en, fd, fn, gd, gn}=PLIST[[1;;Length[PLIST]]];
f[x_]:=GRF[an,ad,bn,bd,cn,cd,dn,dd,en,ed,fn, fd, gn, gd, x];
min=Min[f[ar]];
max=Max[f[ar]];
midpoint=min+0.5*(max-min);
halfX = Solve[f[x]==midpoint&&x>0,x];

g[yv2]:=f[halfX[[1]][[1]][[2]]*yv2];
maxY = Solve[D[g[yv2],{yv2,2}]==0&&yv2>0,yv2];
maxY=Append[maxY,{yv2->0}];
If [absder=="True", maxD = Abs[D[g[yv2],yv2]/.maxY], maxD = D[g[yv2],yv2]/.maxY];
rho =Max[maxD]; (* TAKE MAX GLOBAL DERIVATIVE *)
If [absder=="True", checkrho=Abs[D[g[yv2], yv2] /. {yv2 -> 0}], checkrho=D[g[yv2], yv2] /. {yv2 -> 0}];
If [rho == checkrho, 
WriteString["stdout",i, "maxat0,"];
WriteString[outf3,j,",",i,";",pos0,",",stp0,";",0,",",DecimalForm[rho],";",DecimalForm[pos-pos0],",", DecimalForm[rho-stp0],";","0","\n"];
WriteString[outf2,StringRiffle[PLIST,","],"\n"];,

pos = maxY[[Position[maxD,Max[maxD]][[1]][[1]]]][[1]][[2]];(* TAKE POS CORRESPONDING TO MAX GLOBAL DERIVATIVE *)
If[ pos>=pos0&&pos-pos0<tolpos&&rho>=stp0&&rho-stp0<tolstp,
WriteString["stdout",i,","];
WriteString[outf3,j,",",i,";",pos0,",",stp0,";",DecimalForm[pos],",",DecimalForm[rho],";",DecimalForm[pos-pos0],",", DecimalForm[rho-stp0], ";","c","\n"];
WriteString[outf,StringRiffle[{pos,rho},","],";", StringRiffle[PLIST,","],"\n"];,

WriteString["stdout","\n not correct"];
WriteString["stdout",DecimalForm[pos],",",DecimalForm[rho],";",pos0,",", stp0,";"];
WriteString[outf3,j,",",i,";",pos0,",",stp0,";",DecimalForm[pos],",",DecimalForm[rho],";",DecimalForm[pos-pos0],",", DecimalForm[rho-stp0],";","i","\n"];
]
]
]
Close[outf];
Close[outf2];
Close[outf3];
]
        
