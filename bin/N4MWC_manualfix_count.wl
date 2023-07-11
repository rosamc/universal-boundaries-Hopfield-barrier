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
GRF[K1_,K2_,L_,x_]:=(L*K2*x*(K2*x+1)^3+K1*x*(K1*x+1)^3)/(L*(K2*x+1)^4+(K1*x+1)^4);
{K1,K2,L}=Table[0,{i,1,3}];
parsliststring={"K1","K2","L"};
Print["Defined GRF"];
logspace[a_, b_, n_] := 10.0^Range[a, b, (b - a)/(n - 1)];
ar = logspace[-60, 60, 6000];
For[j=1,j<=Length[infiles],j++, 
infname=infiles[[j]];
WriteString["stdout",infname,"\n"];
outfname=StringJoin[StringSplit[infname,"."][[1]],"_checked.out"];
outfname2=StringJoin[StringSplit[infname,"."][[1]],"_discarded_maxD0.out"];
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
{K1,K2,L}=PLIST[[1;;Length[PLIST]]];
f[x_]:=GRF[K1,K2,L,x];
halfX = Solve[f[x]==1/2&&x>0,x];


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
        
