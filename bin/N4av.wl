
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

        rho1[K1_,K2_,K3_,K4_,w12_,w13_,w14_,w23_,w24_,w34_,w123_,w124_,w134_,w234_,w1234_,x_]:=(1)*x^0;
rho2[K1_,K2_,K3_,K4_,w12_,w13_,w14_,w23_,w24_,w34_,w123_,w124_,w134_,w234_,w1234_,x_]:=(0)*x^0+(K1)*x^1;
rho3[K1_,K2_,K3_,K4_,w12_,w13_,w14_,w23_,w24_,w34_,w123_,w124_,w134_,w234_,w1234_,x_]:=(0)*x^0+(K2)*x^1;
rho4[K1_,K2_,K3_,K4_,w12_,w13_,w14_,w23_,w24_,w34_,w123_,w124_,w134_,w234_,w1234_,x_]:=(0)*x^0+(K3)*x^1;
rho5[K1_,K2_,K3_,K4_,w12_,w13_,w14_,w23_,w24_,w34_,w123_,w124_,w134_,w234_,w1234_,x_]:=(0)*x^0+(K4)*x^1;
rho6[K1_,K2_,K3_,K4_,w12_,w13_,w14_,w23_,w24_,w34_,w123_,w124_,w134_,w234_,w1234_,x_]:=(0)*x^0+(0)*x^1+(K1*K2*w12)*x^2;
rho7[K1_,K2_,K3_,K4_,w12_,w13_,w14_,w23_,w24_,w34_,w123_,w124_,w134_,w234_,w1234_,x_]:=(0)*x^0+(0)*x^1+(K1*K3*w13)*x^2;
rho8[K1_,K2_,K3_,K4_,w12_,w13_,w14_,w23_,w24_,w34_,w123_,w124_,w134_,w234_,w1234_,x_]:=(0)*x^0+(0)*x^1+(K1*K4*w14)*x^2;
rho9[K1_,K2_,K3_,K4_,w12_,w13_,w14_,w23_,w24_,w34_,w123_,w124_,w134_,w234_,w1234_,x_]:=(0)*x^0+(0)*x^1+(K2*K3*w23)*x^2;
rho10[K1_,K2_,K3_,K4_,w12_,w13_,w14_,w23_,w24_,w34_,w123_,w124_,w134_,w234_,w1234_,x_]:=(0)*x^0+(0)*x^1+(K2*K4*w24)*x^2;
rho11[K1_,K2_,K3_,K4_,w12_,w13_,w14_,w23_,w24_,w34_,w123_,w124_,w134_,w234_,w1234_,x_]:=(0)*x^0+(0)*x^1+(K3*K4*w34)*x^2;
rho12[K1_,K2_,K3_,K4_,w12_,w13_,w14_,w23_,w24_,w34_,w123_,w124_,w134_,w234_,w1234_,x_]:=(0)*x^0+(0)*x^1+(0)*x^2+(K1*K2*K3*w123*w23)*x^3;
rho13[K1_,K2_,K3_,K4_,w12_,w13_,w14_,w23_,w24_,w34_,w123_,w124_,w134_,w234_,w1234_,x_]:=(0)*x^0+(0)*x^1+(0)*x^2+(K1*K2*K4*w124*w24)*x^3;
rho14[K1_,K2_,K3_,K4_,w12_,w13_,w14_,w23_,w24_,w34_,w123_,w124_,w134_,w234_,w1234_,x_]:=(0)*x^0+(0)*x^1+(0)*x^2+(K1*K3*K4*w134*w34)*x^3;
rho15[K1_,K2_,K3_,K4_,w12_,w13_,w14_,w23_,w24_,w34_,w123_,w124_,w134_,w234_,w1234_,x_]:=(0)*x^0+(0)*x^1+(0)*x^2+(K2*K3*K4*w234*w34)*x^3;
rho16[K1_,K2_,K3_,K4_,w12_,w13_,w14_,w23_,w24_,w34_,w123_,w124_,w134_,w234_,w1234_,x_]:=(0)*x^0+(0)*x^1+(0)*x^2+(0)*x^3+(K1*K2*K3*K4*w1234*w234*w34)*x^4;
num[K1_,K2_,K3_,K4_,w12_,w13_,w14_,w23_,w24_,w34_,w123_,w124_,w134_,w234_,w1234_,x_]:=(1.0/4)*(rho2[K1,K2,K3,K4,w12,w13,w14,w23,w24,w34,w123,w124,w134,w234,w1234,x])+(1.0/4)*(rho3[K1,K2,K3,K4,w12,w13,w14,w23,w24,w34,w123,w124,w134,w234,w1234,x])+(1.0/4)*(rho4[K1,K2,K3,K4,w12,w13,w14,w23,w24,w34,w123,w124,w134,w234,w1234,x])+(1.0/4)*(rho5[K1,K2,K3,K4,w12,w13,w14,w23,w24,w34,w123,w124,w134,w234,w1234,x])+(2.0/4)*(rho6[K1,K2,K3,K4,w12,w13,w14,w23,w24,w34,w123,w124,w134,w234,w1234,x])+(2.0/4)*(rho7[K1,K2,K3,K4,w12,w13,w14,w23,w24,w34,w123,w124,w134,w234,w1234,x])+(2.0/4)*(rho8[K1,K2,K3,K4,w12,w13,w14,w23,w24,w34,w123,w124,w134,w234,w1234,x])+(2.0/4)*(rho9[K1,K2,K3,K4,w12,w13,w14,w23,w24,w34,w123,w124,w134,w234,w1234,x])+(2.0/4)*(rho10[K1,K2,K3,K4,w12,w13,w14,w23,w24,w34,w123,w124,w134,w234,w1234,x])+(2.0/4)*(rho11[K1,K2,K3,K4,w12,w13,w14,w23,w24,w34,w123,w124,w134,w234,w1234,x])+(3.0/4)*(rho12[K1,K2,K3,K4,w12,w13,w14,w23,w24,w34,w123,w124,w134,w234,w1234,x])+(3.0/4)*(rho13[K1,K2,K3,K4,w12,w13,w14,w23,w24,w34,w123,w124,w134,w234,w1234,x])+(3.0/4)*(rho14[K1,K2,K3,K4,w12,w13,w14,w23,w24,w34,w123,w124,w134,w234,w1234,x])+(3.0/4)*(rho15[K1,K2,K3,K4,w12,w13,w14,w23,w24,w34,w123,w124,w134,w234,w1234,x])+(4.0/4)*(rho16[K1,K2,K3,K4,w12,w13,w14,w23,w24,w34,w123,w124,w134,w234,w1234,x]);
den[K1_,K2_,K3_,K4_,w12_,w13_,w14_,w23_,w24_,w34_,w123_,w124_,w134_,w234_,w1234_,x_]:=1*(rho1[K1,K2,K3,K4,w12,w13,w14,w23,w24,w34,w123,w124,w134,w234,w1234,x]+rho2[K1,K2,K3,K4,w12,w13,w14,w23,w24,w34,w123,w124,w134,w234,w1234,x]+rho3[K1,K2,K3,K4,w12,w13,w14,w23,w24,w34,w123,w124,w134,w234,w1234,x]+rho4[K1,K2,K3,K4,w12,w13,w14,w23,w24,w34,w123,w124,w134,w234,w1234,x]+rho5[K1,K2,K3,K4,w12,w13,w14,w23,w24,w34,w123,w124,w134,w234,w1234,x]+rho6[K1,K2,K3,K4,w12,w13,w14,w23,w24,w34,w123,w124,w134,w234,w1234,x]+rho7[K1,K2,K3,K4,w12,w13,w14,w23,w24,w34,w123,w124,w134,w234,w1234,x]+rho8[K1,K2,K3,K4,w12,w13,w14,w23,w24,w34,w123,w124,w134,w234,w1234,x]+rho9[K1,K2,K3,K4,w12,w13,w14,w23,w24,w34,w123,w124,w134,w234,w1234,x]+rho10[K1,K2,K3,K4,w12,w13,w14,w23,w24,w34,w123,w124,w134,w234,w1234,x]+rho11[K1,K2,K3,K4,w12,w13,w14,w23,w24,w34,w123,w124,w134,w234,w1234,x]+rho12[K1,K2,K3,K4,w12,w13,w14,w23,w24,w34,w123,w124,w134,w234,w1234,x]+rho13[K1,K2,K3,K4,w12,w13,w14,w23,w24,w34,w123,w124,w134,w234,w1234,x]+rho14[K1,K2,K3,K4,w12,w13,w14,w23,w24,w34,w123,w124,w134,w234,w1234,x]+rho15[K1,K2,K3,K4,w12,w13,w14,w23,w24,w34,w123,w124,w134,w234,w1234,x]+rho16[K1,K2,K3,K4,w12,w13,w14,w23,w24,w34,w123,w124,w134,w234,w1234,x]);
GRF[K1_,K2_,K3_,K4_,w12_,w13_,w14_,w23_,w24_,w34_,w123_,w124_,w134_,w234_,w1234_,x_]:=num[K1,K2,K3,K4,w12,w13,w14,w23,w24,w34,w123,w124,w134,w234,w1234,x]/den[K1,K2,K3,K4,w12,w13,w14,w23,w24,w34,w123,w124,w134,w234,w1234,x];
{K1,K2,K3,K4,w12,w13,w14,w23,w24,w34,w123,w124,w134,w234,w1234}=Table[0,{i,1,15}];
parsliststring={"K1","K2","K3","K4","w12","w13","w14","w23","w24","w34","w123","w124","w134","w234","w1234"};
Print["Defined GRF"];
logspace[a_, b_, n_] := 10.0^Range[a, b, (b - a)/(n - 1)];
ar = logspace[-60, 60, 6000];
For[j=1,j<=Length[infiles],j++, 
infname=infiles[[j]];
WriteString["stdout",infname,"\n"];
outfname=StringJoin[StringSplit[infname,"."][[1]],"_checked.out"];
outfname2=StringJoin[StringSplit[infname,"."][[1]],"_discarded_maxD0.out"];
WriteString["stdout",outfname,"\n"];
data=Import[infname,"CSV"];
outf=OpenWrite[outfname];
outf2=OpenWrite[outfname2];
WriteString[outf,StringRiffle[{"pos","rho"},","],";", StringRiffle[parsliststring,","],"\n"];
For[i =1,i<= Length[data], i++,
{pos0, stp0}=data[[i]][[1;;2]];
PLIST=data[[i]][[3;;]];
{K1,K2,K3,K4,w12,w13,w14,w23,w24,w34,w123,w124,w134,w234,w1234}=PLIST[[1;;Length[PLIST]]];
f[x_]:=GRF[K1,K2,K3,K4,w12,w13,w14,w23,w24,w34,w123,w124,w134,w234,w1234,x];
halfX = Solve[f[x]==1/2&&x>0,x];


g[yv2]:=f[halfX[[1]][[1]][[2]]*yv2];
maxY = Solve[D[g[yv2],{yv2,2}]==0&&yv2>0,yv2];
maxY=Append[maxY,{yv2->0}];
If [absder=="True", maxD = Abs[D[g[yv2],yv2]/.maxY], maxD = D[g[yv2],yv2]/.maxY];
rho =Max[maxD]; (* TAKE MAX GLOBAL DERIVATIVE *)
If [absder=="True", checkrho=Abs[D[g[yv2], yv2] /. {yv2 -> 0}], checkrho=D[g[yv2], yv2] /. {yv2 -> 0}];
If [rho == checkrho, 
WriteString["stdout",i, "maxat0,"];
WriteString[outf2,StringRiffle[PLIST,","],"\n"];,

pos = maxY[[Position[maxD,Max[maxD]][[1]][[1]]]][[1]][[2]];(* TAKE POS CORRESPONDING TO MAX GLOBAL DERIVATIVE *)
If[ pos-pos0<tolpos&&rho-stp0<tolstp,
WriteString["stdout",i,","];
WriteString[outf,StringRiffle[{pos,rho},","],";", StringRiffle[PLIST,","],"\n"];,

WriteString["stdout","\n not correct"];
WriteString["stdout",pos,",",rho,";",pos0,",", stp0,";"];
]
]
]
Close[outf];
Close[outf2];
]
        