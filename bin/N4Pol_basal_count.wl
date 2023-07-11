
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

        P=ToExpression[$ScriptCommandLine[[4]]];Print["P value is ", P];rho1[K1_,K2_,K3_,K4_,w12_,w13_,w14_,w23_,w24_,w34_,w123_,w124_,w134_,w234_,w1234_,wp1_,wp2_,wp3_,wp4_,wp12_,wp13_,wp14_,wp23_,wp24_,wp34_,wp123_,wp124_,wp134_,wp234_,wp1234_,P_,x_]:=(1)*x^0;
rho2[K1_,K2_,K3_,K4_,w12_,w13_,w14_,w23_,w24_,w34_,w123_,w124_,w134_,w234_,w1234_,wp1_,wp2_,wp3_,wp4_,wp12_,wp13_,wp14_,wp23_,wp24_,wp34_,wp123_,wp124_,wp134_,wp234_,wp1234_,P_,x_]:=(0)*x^0+(K1)*x^1;
rho3[K1_,K2_,K3_,K4_,w12_,w13_,w14_,w23_,w24_,w34_,w123_,w124_,w134_,w234_,w1234_,wp1_,wp2_,wp3_,wp4_,wp12_,wp13_,wp14_,wp23_,wp24_,wp34_,wp123_,wp124_,wp134_,wp234_,wp1234_,P_,x_]:=(0)*x^0+(K2)*x^1;
rho4[K1_,K2_,K3_,K4_,w12_,w13_,w14_,w23_,w24_,w34_,w123_,w124_,w134_,w234_,w1234_,wp1_,wp2_,wp3_,wp4_,wp12_,wp13_,wp14_,wp23_,wp24_,wp34_,wp123_,wp124_,wp134_,wp234_,wp1234_,P_,x_]:=(0)*x^0+(K3)*x^1;
rho5[K1_,K2_,K3_,K4_,w12_,w13_,w14_,w23_,w24_,w34_,w123_,w124_,w134_,w234_,w1234_,wp1_,wp2_,wp3_,wp4_,wp12_,wp13_,wp14_,wp23_,wp24_,wp34_,wp123_,wp124_,wp134_,wp234_,wp1234_,P_,x_]:=(0)*x^0+(K4)*x^1;
rho6[K1_,K2_,K3_,K4_,w12_,w13_,w14_,w23_,w24_,w34_,w123_,w124_,w134_,w234_,w1234_,wp1_,wp2_,wp3_,wp4_,wp12_,wp13_,wp14_,wp23_,wp24_,wp34_,wp123_,wp124_,wp134_,wp234_,wp1234_,P_,x_]:=(P)*x^0;
rho7[K1_,K2_,K3_,K4_,w12_,w13_,w14_,w23_,w24_,w34_,w123_,w124_,w134_,w234_,w1234_,wp1_,wp2_,wp3_,wp4_,wp12_,wp13_,wp14_,wp23_,wp24_,wp34_,wp123_,wp124_,wp134_,wp234_,wp1234_,P_,x_]:=(0)*x^0+(0)*x^1+(K1*K2*w12)*x^2;
rho8[K1_,K2_,K3_,K4_,w12_,w13_,w14_,w23_,w24_,w34_,w123_,w124_,w134_,w234_,w1234_,wp1_,wp2_,wp3_,wp4_,wp12_,wp13_,wp14_,wp23_,wp24_,wp34_,wp123_,wp124_,wp134_,wp234_,wp1234_,P_,x_]:=(0)*x^0+(0)*x^1+(K1*K3*w13)*x^2;
rho9[K1_,K2_,K3_,K4_,w12_,w13_,w14_,w23_,w24_,w34_,w123_,w124_,w134_,w234_,w1234_,wp1_,wp2_,wp3_,wp4_,wp12_,wp13_,wp14_,wp23_,wp24_,wp34_,wp123_,wp124_,wp134_,wp234_,wp1234_,P_,x_]:=(0)*x^0+(0)*x^1+(K1*K4*w14)*x^2;
rho10[K1_,K2_,K3_,K4_,w12_,w13_,w14_,w23_,w24_,w34_,w123_,w124_,w134_,w234_,w1234_,wp1_,wp2_,wp3_,wp4_,wp12_,wp13_,wp14_,wp23_,wp24_,wp34_,wp123_,wp124_,wp134_,wp234_,wp1234_,P_,x_]:=(0)*x^0+(K1*P*wp1)*x^1;
rho11[K1_,K2_,K3_,K4_,w12_,w13_,w14_,w23_,w24_,w34_,w123_,w124_,w134_,w234_,w1234_,wp1_,wp2_,wp3_,wp4_,wp12_,wp13_,wp14_,wp23_,wp24_,wp34_,wp123_,wp124_,wp134_,wp234_,wp1234_,P_,x_]:=(0)*x^0+(0)*x^1+(K2*K3*w23)*x^2;
rho12[K1_,K2_,K3_,K4_,w12_,w13_,w14_,w23_,w24_,w34_,w123_,w124_,w134_,w234_,w1234_,wp1_,wp2_,wp3_,wp4_,wp12_,wp13_,wp14_,wp23_,wp24_,wp34_,wp123_,wp124_,wp134_,wp234_,wp1234_,P_,x_]:=(0)*x^0+(0)*x^1+(K2*K4*w24)*x^2;
rho13[K1_,K2_,K3_,K4_,w12_,w13_,w14_,w23_,w24_,w34_,w123_,w124_,w134_,w234_,w1234_,wp1_,wp2_,wp3_,wp4_,wp12_,wp13_,wp14_,wp23_,wp24_,wp34_,wp123_,wp124_,wp134_,wp234_,wp1234_,P_,x_]:=(0)*x^0+(K2*P*wp2)*x^1;
rho14[K1_,K2_,K3_,K4_,w12_,w13_,w14_,w23_,w24_,w34_,w123_,w124_,w134_,w234_,w1234_,wp1_,wp2_,wp3_,wp4_,wp12_,wp13_,wp14_,wp23_,wp24_,wp34_,wp123_,wp124_,wp134_,wp234_,wp1234_,P_,x_]:=(0)*x^0+(0)*x^1+(K3*K4*w34)*x^2;
rho15[K1_,K2_,K3_,K4_,w12_,w13_,w14_,w23_,w24_,w34_,w123_,w124_,w134_,w234_,w1234_,wp1_,wp2_,wp3_,wp4_,wp12_,wp13_,wp14_,wp23_,wp24_,wp34_,wp123_,wp124_,wp134_,wp234_,wp1234_,P_,x_]:=(0)*x^0+(K3*P*wp3)*x^1;
rho16[K1_,K2_,K3_,K4_,w12_,w13_,w14_,w23_,w24_,w34_,w123_,w124_,w134_,w234_,w1234_,wp1_,wp2_,wp3_,wp4_,wp12_,wp13_,wp14_,wp23_,wp24_,wp34_,wp123_,wp124_,wp134_,wp234_,wp1234_,P_,x_]:=(0)*x^0+(K4*P*wp4)*x^1;
rho17[K1_,K2_,K3_,K4_,w12_,w13_,w14_,w23_,w24_,w34_,w123_,w124_,w134_,w234_,w1234_,wp1_,wp2_,wp3_,wp4_,wp12_,wp13_,wp14_,wp23_,wp24_,wp34_,wp123_,wp124_,wp134_,wp234_,wp1234_,P_,x_]:=(0)*x^0+(0)*x^1+(0)*x^2+(K1*K2*K3*w123*w23)*x^3;
rho18[K1_,K2_,K3_,K4_,w12_,w13_,w14_,w23_,w24_,w34_,w123_,w124_,w134_,w234_,w1234_,wp1_,wp2_,wp3_,wp4_,wp12_,wp13_,wp14_,wp23_,wp24_,wp34_,wp123_,wp124_,wp134_,wp234_,wp1234_,P_,x_]:=(0)*x^0+(0)*x^1+(0)*x^2+(K1*K2*K4*w124*w24)*x^3;
rho19[K1_,K2_,K3_,K4_,w12_,w13_,w14_,w23_,w24_,w34_,w123_,w124_,w134_,w234_,w1234_,wp1_,wp2_,wp3_,wp4_,wp12_,wp13_,wp14_,wp23_,wp24_,wp34_,wp123_,wp124_,wp134_,wp234_,wp1234_,P_,x_]:=(0)*x^0+(0)*x^1+(K1*K2*P*w12*wp12)*x^2;
rho20[K1_,K2_,K3_,K4_,w12_,w13_,w14_,w23_,w24_,w34_,w123_,w124_,w134_,w234_,w1234_,wp1_,wp2_,wp3_,wp4_,wp12_,wp13_,wp14_,wp23_,wp24_,wp34_,wp123_,wp124_,wp134_,wp234_,wp1234_,P_,x_]:=(0)*x^0+(0)*x^1+(0)*x^2+(K1*K3*K4*w134*w34)*x^3;
rho21[K1_,K2_,K3_,K4_,w12_,w13_,w14_,w23_,w24_,w34_,w123_,w124_,w134_,w234_,w1234_,wp1_,wp2_,wp3_,wp4_,wp12_,wp13_,wp14_,wp23_,wp24_,wp34_,wp123_,wp124_,wp134_,wp234_,wp1234_,P_,x_]:=(0)*x^0+(0)*x^1+(K1*K3*P*w13*wp13)*x^2;
rho22[K1_,K2_,K3_,K4_,w12_,w13_,w14_,w23_,w24_,w34_,w123_,w124_,w134_,w234_,w1234_,wp1_,wp2_,wp3_,wp4_,wp12_,wp13_,wp14_,wp23_,wp24_,wp34_,wp123_,wp124_,wp134_,wp234_,wp1234_,P_,x_]:=(0)*x^0+(0)*x^1+(K1*K4*P*w14*wp14)*x^2;
rho23[K1_,K2_,K3_,K4_,w12_,w13_,w14_,w23_,w24_,w34_,w123_,w124_,w134_,w234_,w1234_,wp1_,wp2_,wp3_,wp4_,wp12_,wp13_,wp14_,wp23_,wp24_,wp34_,wp123_,wp124_,wp134_,wp234_,wp1234_,P_,x_]:=(0)*x^0+(0)*x^1+(0)*x^2+(K2*K3*K4*w234*w34)*x^3;
rho24[K1_,K2_,K3_,K4_,w12_,w13_,w14_,w23_,w24_,w34_,w123_,w124_,w134_,w234_,w1234_,wp1_,wp2_,wp3_,wp4_,wp12_,wp13_,wp14_,wp23_,wp24_,wp34_,wp123_,wp124_,wp134_,wp234_,wp1234_,P_,x_]:=(0)*x^0+(0)*x^1+(K2*K3*P*w23*wp23)*x^2;
rho25[K1_,K2_,K3_,K4_,w12_,w13_,w14_,w23_,w24_,w34_,w123_,w124_,w134_,w234_,w1234_,wp1_,wp2_,wp3_,wp4_,wp12_,wp13_,wp14_,wp23_,wp24_,wp34_,wp123_,wp124_,wp134_,wp234_,wp1234_,P_,x_]:=(0)*x^0+(0)*x^1+(K2*K4*P*w24*wp24)*x^2;
rho26[K1_,K2_,K3_,K4_,w12_,w13_,w14_,w23_,w24_,w34_,w123_,w124_,w134_,w234_,w1234_,wp1_,wp2_,wp3_,wp4_,wp12_,wp13_,wp14_,wp23_,wp24_,wp34_,wp123_,wp124_,wp134_,wp234_,wp1234_,P_,x_]:=(0)*x^0+(0)*x^1+(K3*K4*P*w34*wp34)*x^2;
rho27[K1_,K2_,K3_,K4_,w12_,w13_,w14_,w23_,w24_,w34_,w123_,w124_,w134_,w234_,w1234_,wp1_,wp2_,wp3_,wp4_,wp12_,wp13_,wp14_,wp23_,wp24_,wp34_,wp123_,wp124_,wp134_,wp234_,wp1234_,P_,x_]:=(0)*x^0+(0)*x^1+(0)*x^2+(0)*x^3+(K1*K2*K3*K4*w1234*w234*w34)*x^4;
rho28[K1_,K2_,K3_,K4_,w12_,w13_,w14_,w23_,w24_,w34_,w123_,w124_,w134_,w234_,w1234_,wp1_,wp2_,wp3_,wp4_,wp12_,wp13_,wp14_,wp23_,wp24_,wp34_,wp123_,wp124_,wp134_,wp234_,wp1234_,P_,x_]:=(0)*x^0+(0)*x^1+(0)*x^2+(K1*K2*K3*P*w123*w23*wp123)*x^3;
rho29[K1_,K2_,K3_,K4_,w12_,w13_,w14_,w23_,w24_,w34_,w123_,w124_,w134_,w234_,w1234_,wp1_,wp2_,wp3_,wp4_,wp12_,wp13_,wp14_,wp23_,wp24_,wp34_,wp123_,wp124_,wp134_,wp234_,wp1234_,P_,x_]:=(0)*x^0+(0)*x^1+(0)*x^2+(K1*K2*K4*P*w124*w24*wp124)*x^3;
rho30[K1_,K2_,K3_,K4_,w12_,w13_,w14_,w23_,w24_,w34_,w123_,w124_,w134_,w234_,w1234_,wp1_,wp2_,wp3_,wp4_,wp12_,wp13_,wp14_,wp23_,wp24_,wp34_,wp123_,wp124_,wp134_,wp234_,wp1234_,P_,x_]:=(0)*x^0+(0)*x^1+(0)*x^2+(K1*K3*K4*P*w134*w34*wp134)*x^3;
rho31[K1_,K2_,K3_,K4_,w12_,w13_,w14_,w23_,w24_,w34_,w123_,w124_,w134_,w234_,w1234_,wp1_,wp2_,wp3_,wp4_,wp12_,wp13_,wp14_,wp23_,wp24_,wp34_,wp123_,wp124_,wp134_,wp234_,wp1234_,P_,x_]:=(0)*x^0+(0)*x^1+(0)*x^2+(K2*K3*K4*P*w234*w34*wp234)*x^3;
rho32[K1_,K2_,K3_,K4_,w12_,w13_,w14_,w23_,w24_,w34_,w123_,w124_,w134_,w234_,w1234_,wp1_,wp2_,wp3_,wp4_,wp12_,wp13_,wp14_,wp23_,wp24_,wp34_,wp123_,wp124_,wp134_,wp234_,wp1234_,P_,x_]:=(0)*x^0+(0)*x^1+(0)*x^2+(0)*x^3+(K1*K2*K3*K4*P*w1234*w234*w34*wp1234)*x^4;
num[K1_,K2_,K3_,K4_,w12_,w13_,w14_,w23_,w24_,w34_,w123_,w124_,w134_,w234_,w1234_,wp1_,wp2_,wp3_,wp4_,wp12_,wp13_,wp14_,wp23_,wp24_,wp34_,wp123_,wp124_,wp134_,wp234_,wp1234_,P_,x_]:=1*(rho6[K1,K2,K3,K4,w12,w13,w14,w23,w24,w34,w123,w124,w134,w234,w1234,wp1,wp2,wp3,wp4,wp12,wp13,wp14,wp23,wp24,wp34,wp123,wp124,wp134,wp234,wp1234,P,x]+rho10[K1,K2,K3,K4,w12,w13,w14,w23,w24,w34,w123,w124,w134,w234,w1234,wp1,wp2,wp3,wp4,wp12,wp13,wp14,wp23,wp24,wp34,wp123,wp124,wp134,wp234,wp1234,P,x]+rho13[K1,K2,K3,K4,w12,w13,w14,w23,w24,w34,w123,w124,w134,w234,w1234,wp1,wp2,wp3,wp4,wp12,wp13,wp14,wp23,wp24,wp34,wp123,wp124,wp134,wp234,wp1234,P,x]+rho15[K1,K2,K3,K4,w12,w13,w14,w23,w24,w34,w123,w124,w134,w234,w1234,wp1,wp2,wp3,wp4,wp12,wp13,wp14,wp23,wp24,wp34,wp123,wp124,wp134,wp234,wp1234,P,x]+rho16[K1,K2,K3,K4,w12,w13,w14,w23,w24,w34,w123,w124,w134,w234,w1234,wp1,wp2,wp3,wp4,wp12,wp13,wp14,wp23,wp24,wp34,wp123,wp124,wp134,wp234,wp1234,P,x]+rho19[K1,K2,K3,K4,w12,w13,w14,w23,w24,w34,w123,w124,w134,w234,w1234,wp1,wp2,wp3,wp4,wp12,wp13,wp14,wp23,wp24,wp34,wp123,wp124,wp134,wp234,wp1234,P,x]+rho21[K1,K2,K3,K4,w12,w13,w14,w23,w24,w34,w123,w124,w134,w234,w1234,wp1,wp2,wp3,wp4,wp12,wp13,wp14,wp23,wp24,wp34,wp123,wp124,wp134,wp234,wp1234,P,x]+rho22[K1,K2,K3,K4,w12,w13,w14,w23,w24,w34,w123,w124,w134,w234,w1234,wp1,wp2,wp3,wp4,wp12,wp13,wp14,wp23,wp24,wp34,wp123,wp124,wp134,wp234,wp1234,P,x]+rho24[K1,K2,K3,K4,w12,w13,w14,w23,w24,w34,w123,w124,w134,w234,w1234,wp1,wp2,wp3,wp4,wp12,wp13,wp14,wp23,wp24,wp34,wp123,wp124,wp134,wp234,wp1234,P,x]+rho25[K1,K2,K3,K4,w12,w13,w14,w23,w24,w34,w123,w124,w134,w234,w1234,wp1,wp2,wp3,wp4,wp12,wp13,wp14,wp23,wp24,wp34,wp123,wp124,wp134,wp234,wp1234,P,x]+rho26[K1,K2,K3,K4,w12,w13,w14,w23,w24,w34,w123,w124,w134,w234,w1234,wp1,wp2,wp3,wp4,wp12,wp13,wp14,wp23,wp24,wp34,wp123,wp124,wp134,wp234,wp1234,P,x]+rho28[K1,K2,K3,K4,w12,w13,w14,w23,w24,w34,w123,w124,w134,w234,w1234,wp1,wp2,wp3,wp4,wp12,wp13,wp14,wp23,wp24,wp34,wp123,wp124,wp134,wp234,wp1234,P,x]+rho29[K1,K2,K3,K4,w12,w13,w14,w23,w24,w34,w123,w124,w134,w234,w1234,wp1,wp2,wp3,wp4,wp12,wp13,wp14,wp23,wp24,wp34,wp123,wp124,wp134,wp234,wp1234,P,x]+rho30[K1,K2,K3,K4,w12,w13,w14,w23,w24,w34,w123,w124,w134,w234,w1234,wp1,wp2,wp3,wp4,wp12,wp13,wp14,wp23,wp24,wp34,wp123,wp124,wp134,wp234,wp1234,P,x]+rho31[K1,K2,K3,K4,w12,w13,w14,w23,w24,w34,w123,w124,w134,w234,w1234,wp1,wp2,wp3,wp4,wp12,wp13,wp14,wp23,wp24,wp34,wp123,wp124,wp134,wp234,wp1234,P,x]+rho32[K1,K2,K3,K4,w12,w13,w14,w23,w24,w34,w123,w124,w134,w234,w1234,wp1,wp2,wp3,wp4,wp12,wp13,wp14,wp23,wp24,wp34,wp123,wp124,wp134,wp234,wp1234,P,x]);
den[K1_,K2_,K3_,K4_,w12_,w13_,w14_,w23_,w24_,w34_,w123_,w124_,w134_,w234_,w1234_,wp1_,wp2_,wp3_,wp4_,wp12_,wp13_,wp14_,wp23_,wp24_,wp34_,wp123_,wp124_,wp134_,wp234_,wp1234_,P_,x_]:=1*(rho1[K1,K2,K3,K4,w12,w13,w14,w23,w24,w34,w123,w124,w134,w234,w1234,wp1,wp2,wp3,wp4,wp12,wp13,wp14,wp23,wp24,wp34,wp123,wp124,wp134,wp234,wp1234,P,x]+rho2[K1,K2,K3,K4,w12,w13,w14,w23,w24,w34,w123,w124,w134,w234,w1234,wp1,wp2,wp3,wp4,wp12,wp13,wp14,wp23,wp24,wp34,wp123,wp124,wp134,wp234,wp1234,P,x]+rho3[K1,K2,K3,K4,w12,w13,w14,w23,w24,w34,w123,w124,w134,w234,w1234,wp1,wp2,wp3,wp4,wp12,wp13,wp14,wp23,wp24,wp34,wp123,wp124,wp134,wp234,wp1234,P,x]+rho4[K1,K2,K3,K4,w12,w13,w14,w23,w24,w34,w123,w124,w134,w234,w1234,wp1,wp2,wp3,wp4,wp12,wp13,wp14,wp23,wp24,wp34,wp123,wp124,wp134,wp234,wp1234,P,x]+rho5[K1,K2,K3,K4,w12,w13,w14,w23,w24,w34,w123,w124,w134,w234,w1234,wp1,wp2,wp3,wp4,wp12,wp13,wp14,wp23,wp24,wp34,wp123,wp124,wp134,wp234,wp1234,P,x]+rho6[K1,K2,K3,K4,w12,w13,w14,w23,w24,w34,w123,w124,w134,w234,w1234,wp1,wp2,wp3,wp4,wp12,wp13,wp14,wp23,wp24,wp34,wp123,wp124,wp134,wp234,wp1234,P,x]+rho7[K1,K2,K3,K4,w12,w13,w14,w23,w24,w34,w123,w124,w134,w234,w1234,wp1,wp2,wp3,wp4,wp12,wp13,wp14,wp23,wp24,wp34,wp123,wp124,wp134,wp234,wp1234,P,x]+rho8[K1,K2,K3,K4,w12,w13,w14,w23,w24,w34,w123,w124,w134,w234,w1234,wp1,wp2,wp3,wp4,wp12,wp13,wp14,wp23,wp24,wp34,wp123,wp124,wp134,wp234,wp1234,P,x]+rho9[K1,K2,K3,K4,w12,w13,w14,w23,w24,w34,w123,w124,w134,w234,w1234,wp1,wp2,wp3,wp4,wp12,wp13,wp14,wp23,wp24,wp34,wp123,wp124,wp134,wp234,wp1234,P,x]+rho10[K1,K2,K3,K4,w12,w13,w14,w23,w24,w34,w123,w124,w134,w234,w1234,wp1,wp2,wp3,wp4,wp12,wp13,wp14,wp23,wp24,wp34,wp123,wp124,wp134,wp234,wp1234,P,x]+rho11[K1,K2,K3,K4,w12,w13,w14,w23,w24,w34,w123,w124,w134,w234,w1234,wp1,wp2,wp3,wp4,wp12,wp13,wp14,wp23,wp24,wp34,wp123,wp124,wp134,wp234,wp1234,P,x]+rho12[K1,K2,K3,K4,w12,w13,w14,w23,w24,w34,w123,w124,w134,w234,w1234,wp1,wp2,wp3,wp4,wp12,wp13,wp14,wp23,wp24,wp34,wp123,wp124,wp134,wp234,wp1234,P,x]+rho13[K1,K2,K3,K4,w12,w13,w14,w23,w24,w34,w123,w124,w134,w234,w1234,wp1,wp2,wp3,wp4,wp12,wp13,wp14,wp23,wp24,wp34,wp123,wp124,wp134,wp234,wp1234,P,x]+rho14[K1,K2,K3,K4,w12,w13,w14,w23,w24,w34,w123,w124,w134,w234,w1234,wp1,wp2,wp3,wp4,wp12,wp13,wp14,wp23,wp24,wp34,wp123,wp124,wp134,wp234,wp1234,P,x]+rho15[K1,K2,K3,K4,w12,w13,w14,w23,w24,w34,w123,w124,w134,w234,w1234,wp1,wp2,wp3,wp4,wp12,wp13,wp14,wp23,wp24,wp34,wp123,wp124,wp134,wp234,wp1234,P,x]+rho16[K1,K2,K3,K4,w12,w13,w14,w23,w24,w34,w123,w124,w134,w234,w1234,wp1,wp2,wp3,wp4,wp12,wp13,wp14,wp23,wp24,wp34,wp123,wp124,wp134,wp234,wp1234,P,x]+rho17[K1,K2,K3,K4,w12,w13,w14,w23,w24,w34,w123,w124,w134,w234,w1234,wp1,wp2,wp3,wp4,wp12,wp13,wp14,wp23,wp24,wp34,wp123,wp124,wp134,wp234,wp1234,P,x]+rho18[K1,K2,K3,K4,w12,w13,w14,w23,w24,w34,w123,w124,w134,w234,w1234,wp1,wp2,wp3,wp4,wp12,wp13,wp14,wp23,wp24,wp34,wp123,wp124,wp134,wp234,wp1234,P,x]+rho19[K1,K2,K3,K4,w12,w13,w14,w23,w24,w34,w123,w124,w134,w234,w1234,wp1,wp2,wp3,wp4,wp12,wp13,wp14,wp23,wp24,wp34,wp123,wp124,wp134,wp234,wp1234,P,x]+rho20[K1,K2,K3,K4,w12,w13,w14,w23,w24,w34,w123,w124,w134,w234,w1234,wp1,wp2,wp3,wp4,wp12,wp13,wp14,wp23,wp24,wp34,wp123,wp124,wp134,wp234,wp1234,P,x]+rho21[K1,K2,K3,K4,w12,w13,w14,w23,w24,w34,w123,w124,w134,w234,w1234,wp1,wp2,wp3,wp4,wp12,wp13,wp14,wp23,wp24,wp34,wp123,wp124,wp134,wp234,wp1234,P,x]+rho22[K1,K2,K3,K4,w12,w13,w14,w23,w24,w34,w123,w124,w134,w234,w1234,wp1,wp2,wp3,wp4,wp12,wp13,wp14,wp23,wp24,wp34,wp123,wp124,wp134,wp234,wp1234,P,x]+rho23[K1,K2,K3,K4,w12,w13,w14,w23,w24,w34,w123,w124,w134,w234,w1234,wp1,wp2,wp3,wp4,wp12,wp13,wp14,wp23,wp24,wp34,wp123,wp124,wp134,wp234,wp1234,P,x]+rho24[K1,K2,K3,K4,w12,w13,w14,w23,w24,w34,w123,w124,w134,w234,w1234,wp1,wp2,wp3,wp4,wp12,wp13,wp14,wp23,wp24,wp34,wp123,wp124,wp134,wp234,wp1234,P,x]+rho25[K1,K2,K3,K4,w12,w13,w14,w23,w24,w34,w123,w124,w134,w234,w1234,wp1,wp2,wp3,wp4,wp12,wp13,wp14,wp23,wp24,wp34,wp123,wp124,wp134,wp234,wp1234,P,x]+rho26[K1,K2,K3,K4,w12,w13,w14,w23,w24,w34,w123,w124,w134,w234,w1234,wp1,wp2,wp3,wp4,wp12,wp13,wp14,wp23,wp24,wp34,wp123,wp124,wp134,wp234,wp1234,P,x]+rho27[K1,K2,K3,K4,w12,w13,w14,w23,w24,w34,w123,w124,w134,w234,w1234,wp1,wp2,wp3,wp4,wp12,wp13,wp14,wp23,wp24,wp34,wp123,wp124,wp134,wp234,wp1234,P,x]+rho28[K1,K2,K3,K4,w12,w13,w14,w23,w24,w34,w123,w124,w134,w234,w1234,wp1,wp2,wp3,wp4,wp12,wp13,wp14,wp23,wp24,wp34,wp123,wp124,wp134,wp234,wp1234,P,x]+rho29[K1,K2,K3,K4,w12,w13,w14,w23,w24,w34,w123,w124,w134,w234,w1234,wp1,wp2,wp3,wp4,wp12,wp13,wp14,wp23,wp24,wp34,wp123,wp124,wp134,wp234,wp1234,P,x]+rho30[K1,K2,K3,K4,w12,w13,w14,w23,w24,w34,w123,w124,w134,w234,w1234,wp1,wp2,wp3,wp4,wp12,wp13,wp14,wp23,wp24,wp34,wp123,wp124,wp134,wp234,wp1234,P,x]+rho31[K1,K2,K3,K4,w12,w13,w14,w23,w24,w34,w123,w124,w134,w234,w1234,wp1,wp2,wp3,wp4,wp12,wp13,wp14,wp23,wp24,wp34,wp123,wp124,wp134,wp234,wp1234,P,x]+rho32[K1,K2,K3,K4,w12,w13,w14,w23,w24,w34,w123,w124,w134,w234,w1234,wp1,wp2,wp3,wp4,wp12,wp13,wp14,wp23,wp24,wp34,wp123,wp124,wp134,wp234,wp1234,P,x]);
GRF[K1_,K2_,K3_,K4_,w12_,w13_,w14_,w23_,w24_,w34_,w123_,w124_,w134_,w234_,w1234_,wp1_,wp2_,wp3_,wp4_,wp12_,wp13_,wp14_,wp23_,wp24_,wp34_,wp123_,wp124_,wp134_,wp234_,wp1234_,P_,x_]:=num[K1,K2,K3,K4,w12,w13,w14,w23,w24,w34,w123,w124,w134,w234,w1234,wp1,wp2,wp3,wp4,wp12,wp13,wp14,wp23,wp24,wp34,wp123,wp124,wp134,wp234,wp1234,P,x]/den[K1,K2,K3,K4,w12,w13,w14,w23,w24,w34,w123,w124,w134,w234,w1234,wp1,wp2,wp3,wp4,wp12,wp13,wp14,wp23,wp24,wp34,wp123,wp124,wp134,wp234,wp1234,P,x];
{K1,K2,K3,K4,w12,w13,w14,w23,w24,w34,w123,w124,w134,w234,w1234,wp1,wp2,wp3,wp4,wp12,wp13,wp14,wp23,wp24,wp34,wp123,wp124,wp134,wp234,wp1234}=Table[0,{i,1,30}];
parsliststring={"K1","K2","K3","K4","w12","w13","w14","w23","w24","w34","w123","w124","w134","w234","w1234","wp1","wp2","wp3","wp4","wp12","wp13","wp14","wp23","wp24","wp34","wp123","wp124","wp134","wp234","wp1234"};
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
{K1,K2,K3,K4,w12,w13,w14,w23,w24,w34,w123,w124,w134,w234,w1234,wp1,wp2,wp3,wp4,wp12,wp13,wp14,wp23,wp24,wp34,wp123,wp124,wp134,wp234,wp1234}=PLIST[[1;;Length[PLIST]]];
f[x_]:=GRF[K1,K2,K3,K4,w12,w13,w14,w23,w24,w34,w123,w124,w134,w234,w1234,wp1,wp2,wp3,wp4,wp12,wp13,wp14,wp23,wp24,wp34,wp123,wp124,wp134,wp234,wp1234,P,x];
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
WriteString[outf3,j,",",i,";",pos0,",",stp0,";",0,",",rho,";",DecimalForm[pos-pos0],",", DecimalForm[rho-stp0],";","0","\n"];
WriteString[outf2,StringRiffle[PLIST,","],"\n"];,
pos = maxY[[Position[maxD,Max[maxD]][[1]][[1]]]][[1]][[2]];(* TAKE POS CORRESPONDING TO MAX GLOBAL DERIVATIVE *)
If[ pos>=pos0&&pos-pos0<tolpos&&rho>=stp0&&rho-stp0<tolstp,
WriteString["stdout",i,","];
WriteString[outf3,j,",",i,";",pos0,",",stp0,";",pos,",",rho,";",DecimalForm[pos-pos0],",", DecimalForm[rho-stp0], ";","c","\n"];
WriteString[outf,StringRiffle[{pos,rho},","],";", StringRiffle[PLIST,","],"\n"];,

WriteString["stdout","\n not correct"];
WriteString["stdout",pos,",",rho,";",pos0,",", stp0,";"];
WriteString[outf3,j,",",i,";",pos0,",",stp0,";",pos,",",rho,";",DecimalForm[pos-pos0],",", DecimalForm[rho-stp0],";","i","\n"];
]
]
]
Close[outf];
Close[outf2];
Close[outf3];
]
        
