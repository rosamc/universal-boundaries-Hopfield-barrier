#include "commonincludes.hpp"
template <typename T>
void TFA4_TFB2_A(py::array_t<double> parsar, vector<T> &num, vector<T> &den, py::array_t<double>othervars){

    auto parsarbuf=parsar.request();
    double *pars=(double *) parsarbuf.ptr;
    T f1=pars[0];
    T f2=pars[1];
    T f3=pars[2];
    T f4=pars[3];
    T f5=pars[4];
    T f6=pars[5];
    T f7=pars[6];
    T f8=pars[7];
    T f9=pars[8];
    T f10=pars[9];
    T f11=pars[10];
    T f12=pars[11];
    T f13=pars[12];
    T f14=pars[13];
    T f15=pars[14];
    T f16=pars[15];
    T f17=pars[16];
    T f18=pars[17];
    T f19=pars[18];
    T f20=pars[19];
    T f21=pars[20];
    T f22=pars[21];
    T f23=pars[22];
    T f24=pars[23];
    T f25=pars[24];
    T f26=pars[25];
    T f27=pars[26];
    T f28=pars[27];
    T f29=pars[28];
    T f30=pars[29];
    T f31=pars[30];
    T f32=pars[31];
    T f33=pars[32];
    T f34=pars[33];
    T f35=pars[34];
    T f36=pars[35];
    T f37=pars[36];
    T f38=pars[37];
    T f39=pars[38];
    T f40=pars[39];
    T f41=pars[40];
    T f42=pars[41];
    T f43=pars[42];
    T f44=pars[43];
    T f45=pars[44];
    T f46=pars[45];
    T f47=pars[46];
    T f48=pars[47];
    T f49=pars[48];
    T f50=pars[49];
    T f51=pars[50];
    T f52=pars[51];
    T f53=pars[52];
    T f54=pars[53];
    T f55=pars[54];
    T f56=pars[55];
    T f57=pars[56];
    T f58=pars[57];
    T f59=pars[58];
    T f60=pars[59];
    T f61=pars[60];
    T f62=pars[61];
    T f63=pars[62];
    T f64=pars[63];
    T K1=pars[64];
    T K2=pars[65];
    T K3=pars[66];
    T K4=pars[67];
    T K5=pars[68];
    T K6=pars[69];
    T w12=pars[70];
    T w13=pars[71];
    T w14=pars[72];
    T w15=pars[73];
    T w16=pars[74];
    T w23=pars[75];
    T w24=pars[76];
    T w25=pars[77];
    T w26=pars[78];
    T w34=pars[79];
    T w35=pars[80];
    T w36=pars[81];
    T w45=pars[82];
    T w46=pars[83];
    T w56=pars[84];
    T w123=pars[85];
    T w124=pars[86];
    T w125=pars[87];
    T w126=pars[88];
    T w134=pars[89];
    T w135=pars[90];
    T w136=pars[91];
    T w145=pars[92];
    T w146=pars[93];
    T w156=pars[94];
    T w234=pars[95];
    T w235=pars[96];
    T w236=pars[97];
    T w245=pars[98];
    T w246=pars[99];
    T w256=pars[100];
    T w345=pars[101];
    T w346=pars[102];
    T w356=pars[103];
    T w456=pars[104];
    T w1234=pars[105];
    T w1235=pars[106];
    T w1236=pars[107];
    T w1245=pars[108];
    T w1246=pars[109];
    T w1256=pars[110];
    T w1345=pars[111];
    T w1346=pars[112];
    T w1356=pars[113];
    T w1456=pars[114];
    T w2345=pars[115];
    T w2346=pars[116];
    T w2356=pars[117];
    T w2456=pars[118];
    T w3456=pars[119];
    T w12345=pars[120];
    T w12346=pars[121];
    T w12356=pars[122];
    T w12456=pars[123];
    T w13456=pars[124];
    T w23456=pars[125];
    T w123456=pars[126];

    auto varsarbuf=othervars.request();
    double *varsar=(double *) varsarbuf.ptr;
    T B=varsar[0];
    vector<T> coeffs_1={1};
    vector<T> coeffs_2={0, K1};
    vector<T> coeffs_3={0, K2};
    vector<T> coeffs_4={0, K3};
    vector<T> coeffs_5={0, K4};
    vector<T> coeffs_6={B*K5};
    vector<T> coeffs_7={B*K6};
    vector<T> coeffs_8={0, 0, K1*K2*w12};
    vector<T> coeffs_9={0, 0, K1*K3*w13};
    vector<T> coeffs_10={0, 0, K1*K4*w14};
    vector<T> coeffs_11={0, B*K1*K5*w15};
    vector<T> coeffs_12={0, B*K1*K6*w16};
    vector<T> coeffs_13={0, 0, K2*K3*w23};
    vector<T> coeffs_14={0, 0, K2*K4*w24};
    vector<T> coeffs_15={0, B*K2*K5*w25};
    vector<T> coeffs_16={0, B*K2*K6*w26};
    vector<T> coeffs_17={0, 0, K3*K4*w34};
    vector<T> coeffs_18={0, B*K3*K5*w35};
    vector<T> coeffs_19={0, B*K3*K6*w36};
    vector<T> coeffs_20={0, B*K4*K5*w45};
    vector<T> coeffs_21={0, B*K4*K6*w46};
    vector<T> coeffs_22={pow(B, 2)*K5*K6*w56};
    vector<T> coeffs_23={0, 0, 0, K1*K2*K3*w123*w23};
    vector<T> coeffs_24={0, 0, 0, K1*K2*K4*w124*w24};
    vector<T> coeffs_25={0, 0, B*K1*K2*K5*w125*w25};
    vector<T> coeffs_26={0, 0, B*K1*K2*K6*w126*w26};
    vector<T> coeffs_27={0, 0, 0, K1*K3*K4*w134*w34};
    vector<T> coeffs_28={0, 0, B*K1*K3*K5*w135*w35};
    vector<T> coeffs_29={0, 0, B*K1*K3*K6*w136*w36};
    vector<T> coeffs_30={0, 0, B*K1*K4*K5*w145*w45};
    vector<T> coeffs_31={0, 0, B*K1*K4*K6*w146*w46};
    vector<T> coeffs_32={0, pow(B, 2)*K1*K5*K6*w156*w56};
    vector<T> coeffs_33={0, 0, 0, K2*K3*K4*w234*w34};
    vector<T> coeffs_34={0, 0, B*K2*K3*K5*w235*w35};
    vector<T> coeffs_35={0, 0, B*K2*K3*K6*w236*w36};
    vector<T> coeffs_36={0, 0, B*K2*K4*K5*w245*w45};
    vector<T> coeffs_37={0, 0, B*K2*K4*K6*w246*w46};
    vector<T> coeffs_38={0, pow(B, 2)*K2*K5*K6*w256*w56};
    vector<T> coeffs_39={0, 0, B*K3*K4*K5*w345*w45};
    vector<T> coeffs_40={0, 0, B*K3*K4*K6*w346*w46};
    vector<T> coeffs_41={0, pow(B, 2)*K3*K5*K6*w356*w56};
    vector<T> coeffs_42={0, pow(B, 2)*K4*K5*K6*w456*w56};
    vector<T> coeffs_43={0, 0, 0, 0, K1*K2*K3*K4*w1234*w234*w34};
    vector<T> coeffs_44={0, 0, 0, B*K1*K2*K3*K5*w1235*w235*w35};
    vector<T> coeffs_45={0, 0, 0, B*K1*K2*K3*K6*w1236*w236*w36};
    vector<T> coeffs_46={0, 0, 0, B*K1*K2*K4*K5*w1245*w245*w45};
    vector<T> coeffs_47={0, 0, 0, B*K1*K2*K4*K6*w1246*w246*w46};
    vector<T> coeffs_48={0, 0, pow(B, 2)*K1*K2*K5*K6*w1256*w256*w56};
    vector<T> coeffs_49={0, 0, 0, B*K1*K3*K4*K5*w1345*w345*w45};
    vector<T> coeffs_50={0, 0, 0, B*K1*K3*K4*K6*w1346*w346*w46};
    vector<T> coeffs_51={0, 0, pow(B, 2)*K1*K3*K5*K6*w1356*w356*w56};
    vector<T> coeffs_52={0, 0, pow(B, 2)*K1*K4*K5*K6*w1456*w456*w56};
    vector<T> coeffs_53={0, 0, 0, B*K2*K3*K4*K5*w2345*w345*w45};
    vector<T> coeffs_54={0, 0, 0, B*K2*K3*K4*K6*w2346*w346*w46};
    vector<T> coeffs_55={0, 0, pow(B, 2)*K2*K3*K5*K6*w2356*w356*w56};
    vector<T> coeffs_56={0, 0, pow(B, 2)*K2*K4*K5*K6*w2456*w456*w56};
    vector<T> coeffs_57={0, 0, pow(B, 2)*K3*K4*K5*K6*w3456*w456*w56};
    vector<T> coeffs_58={0, 0, 0, 0, B*K1*K2*K3*K4*K5*w12345*w2345*w345*w45};
    vector<T> coeffs_59={0, 0, 0, 0, B*K1*K2*K3*K4*K6*w12346*w2346*w346*w46};
    vector<T> coeffs_60={0, 0, 0, pow(B, 2)*K1*K2*K3*K5*K6*w12356*w2356*w356*w56};
    vector<T> coeffs_61={0, 0, 0, pow(B, 2)*K1*K2*K4*K5*K6*w12456*w2456*w456*w56};
    vector<T> coeffs_62={0, 0, 0, pow(B, 2)*K1*K3*K4*K5*K6*w13456*w3456*w456*w56};
    vector<T> coeffs_63={0, 0, 0, pow(B, 2)*K2*K3*K4*K5*K6*w23456*w3456*w456*w56};
    vector<T> coeffs_64={0, 0, 0, 0, pow(B, 2)*K1*K2*K3*K4*K5*K6*w123456*w23456*w3456*w456*w56};
    T numdeg0=(f1)*coeffs_1[0]+(f6)*coeffs_6[0]+(f7)*coeffs_7[0]+(f22)*coeffs_22[0];
    T numdeg1=(f2)*coeffs_2[1]+(f3)*coeffs_3[1]+(f4)*coeffs_4[1]+(f5)*coeffs_5[1]+(f11)*coeffs_11[1]+(f12)*coeffs_12[1]+(f15)*coeffs_15[1]+(f16)*coeffs_16[1]+(f18)*coeffs_18[1]+(f19)*coeffs_19[1]+(f20)*coeffs_20[1]+(f21)*coeffs_21[1]+(f32)*coeffs_32[1]+(f38)*coeffs_38[1]+(f41)*coeffs_41[1]+(f42)*coeffs_42[1];
    T numdeg2=(f8)*coeffs_8[2]+(f9)*coeffs_9[2]+(f10)*coeffs_10[2]+(f13)*coeffs_13[2]+(f14)*coeffs_14[2]+(f17)*coeffs_17[2]+(f25)*coeffs_25[2]+(f26)*coeffs_26[2]+(f28)*coeffs_28[2]+(f29)*coeffs_29[2]+(f30)*coeffs_30[2]+(f31)*coeffs_31[2]+(f34)*coeffs_34[2]+(f35)*coeffs_35[2]+(f36)*coeffs_36[2]+(f37)*coeffs_37[2]+(f39)*coeffs_39[2]+(f40)*coeffs_40[2]+(f48)*coeffs_48[2]+(f51)*coeffs_51[2]+(f52)*coeffs_52[2]+(f55)*coeffs_55[2]+(f56)*coeffs_56[2]+(f57)*coeffs_57[2];
    T numdeg3=(f23)*coeffs_23[3]+(f24)*coeffs_24[3]+(f27)*coeffs_27[3]+(f33)*coeffs_33[3]+(f44)*coeffs_44[3]+(f45)*coeffs_45[3]+(f46)*coeffs_46[3]+(f47)*coeffs_47[3]+(f49)*coeffs_49[3]+(f50)*coeffs_50[3]+(f53)*coeffs_53[3]+(f54)*coeffs_54[3]+(f60)*coeffs_60[3]+(f61)*coeffs_61[3]+(f62)*coeffs_62[3]+(f63)*coeffs_63[3];
    T numdeg4=(f43)*coeffs_43[4]+(f58)*coeffs_58[4]+(f59)*coeffs_59[4]+(f64)*coeffs_64[4];
    T dendeg0=coeffs_1[0]+coeffs_6[0]+coeffs_7[0]+coeffs_22[0];
    T dendeg1=coeffs_2[1]+coeffs_3[1]+coeffs_4[1]+coeffs_5[1]+coeffs_11[1]+coeffs_12[1]+coeffs_15[1]+coeffs_16[1]+coeffs_18[1]+coeffs_19[1]+coeffs_20[1]+coeffs_21[1]+coeffs_32[1]+coeffs_38[1]+coeffs_41[1]+coeffs_42[1];
    T dendeg2=coeffs_8[2]+coeffs_9[2]+coeffs_10[2]+coeffs_13[2]+coeffs_14[2]+coeffs_17[2]+coeffs_25[2]+coeffs_26[2]+coeffs_28[2]+coeffs_29[2]+coeffs_30[2]+coeffs_31[2]+coeffs_34[2]+coeffs_35[2]+coeffs_36[2]+coeffs_37[2]+coeffs_39[2]+coeffs_40[2]+coeffs_48[2]+coeffs_51[2]+coeffs_52[2]+coeffs_55[2]+coeffs_56[2]+coeffs_57[2];
    T dendeg3=coeffs_23[3]+coeffs_24[3]+coeffs_27[3]+coeffs_33[3]+coeffs_44[3]+coeffs_45[3]+coeffs_46[3]+coeffs_47[3]+coeffs_49[3]+coeffs_50[3]+coeffs_53[3]+coeffs_54[3]+coeffs_60[3]+coeffs_61[3]+coeffs_62[3]+coeffs_63[3];
    T dendeg4=coeffs_43[4]+coeffs_58[4]+coeffs_59[4]+coeffs_64[4];
    num={numdeg0,numdeg1,numdeg2,numdeg3,numdeg4};
    den={dendeg0,dendeg1,dendeg2,dendeg3,dendeg4};
}

template <typename T>
void rhos_TFA4_TFB2_A(py::array_t<double> parsar, vector<T> &rhos, py::array_t<double>othervars, double valGRF){

    auto parsarbuf=parsar.request();
    double *pars=(double *) parsarbuf.ptr;
    T f1=pars[0];
    T f2=pars[1];
    T f3=pars[2];
    T f4=pars[3];
    T f5=pars[4];
    T f6=pars[5];
    T f7=pars[6];
    T f8=pars[7];
    T f9=pars[8];
    T f10=pars[9];
    T f11=pars[10];
    T f12=pars[11];
    T f13=pars[12];
    T f14=pars[13];
    T f15=pars[14];
    T f16=pars[15];
    T f17=pars[16];
    T f18=pars[17];
    T f19=pars[18];
    T f20=pars[19];
    T f21=pars[20];
    T f22=pars[21];
    T f23=pars[22];
    T f24=pars[23];
    T f25=pars[24];
    T f26=pars[25];
    T f27=pars[26];
    T f28=pars[27];
    T f29=pars[28];
    T f30=pars[29];
    T f31=pars[30];
    T f32=pars[31];
    T f33=pars[32];
    T f34=pars[33];
    T f35=pars[34];
    T f36=pars[35];
    T f37=pars[36];
    T f38=pars[37];
    T f39=pars[38];
    T f40=pars[39];
    T f41=pars[40];
    T f42=pars[41];
    T f43=pars[42];
    T f44=pars[43];
    T f45=pars[44];
    T f46=pars[45];
    T f47=pars[46];
    T f48=pars[47];
    T f49=pars[48];
    T f50=pars[49];
    T f51=pars[50];
    T f52=pars[51];
    T f53=pars[52];
    T f54=pars[53];
    T f55=pars[54];
    T f56=pars[55];
    T f57=pars[56];
    T f58=pars[57];
    T f59=pars[58];
    T f60=pars[59];
    T f61=pars[60];
    T f62=pars[61];
    T f63=pars[62];
    T f64=pars[63];
    T K1=pars[64];
    T K2=pars[65];
    T K3=pars[66];
    T K4=pars[67];
    T K5=pars[68];
    T K6=pars[69];
    T w12=pars[70];
    T w13=pars[71];
    T w14=pars[72];
    T w15=pars[73];
    T w16=pars[74];
    T w23=pars[75];
    T w24=pars[76];
    T w25=pars[77];
    T w26=pars[78];
    T w34=pars[79];
    T w35=pars[80];
    T w36=pars[81];
    T w45=pars[82];
    T w46=pars[83];
    T w56=pars[84];
    T w123=pars[85];
    T w124=pars[86];
    T w125=pars[87];
    T w126=pars[88];
    T w134=pars[89];
    T w135=pars[90];
    T w136=pars[91];
    T w145=pars[92];
    T w146=pars[93];
    T w156=pars[94];
    T w234=pars[95];
    T w235=pars[96];
    T w236=pars[97];
    T w245=pars[98];
    T w246=pars[99];
    T w256=pars[100];
    T w345=pars[101];
    T w346=pars[102];
    T w356=pars[103];
    T w456=pars[104];
    T w1234=pars[105];
    T w1235=pars[106];
    T w1236=pars[107];
    T w1245=pars[108];
    T w1246=pars[109];
    T w1256=pars[110];
    T w1345=pars[111];
    T w1346=pars[112];
    T w1356=pars[113];
    T w1456=pars[114];
    T w2345=pars[115];
    T w2346=pars[116];
    T w2356=pars[117];
    T w2456=pars[118];
    T w3456=pars[119];
    T w12345=pars[120];
    T w12346=pars[121];
    T w12356=pars[122];
    T w12456=pars[123];
    T w13456=pars[124];
    T w23456=pars[125];
    T w123456=pars[126];

    auto varsarbuf=othervars.request();
    double *varsar=(double *) varsarbuf.ptr;
    T B=varsar[0];
    T rho_1=(1)*pow(valGRF,0);
    T rho_2=(K1)*pow(valGRF,1);
    T rho_3=(K2)*pow(valGRF,1);
    T rho_4=(K3)*pow(valGRF,1);
    T rho_5=(K4)*pow(valGRF,1);
    T rho_6=(B*K5)*pow(valGRF,0);
    T rho_7=(B*K6)*pow(valGRF,0);
    T rho_8=(K1*K2*w12)*pow(valGRF,2);
    T rho_9=(K1*K3*w13)*pow(valGRF,2);
    T rho_10=(K1*K4*w14)*pow(valGRF,2);
    T rho_11=(B*K1*K5*w15)*pow(valGRF,1);
    T rho_12=(B*K1*K6*w16)*pow(valGRF,1);
    T rho_13=(K2*K3*w23)*pow(valGRF,2);
    T rho_14=(K2*K4*w24)*pow(valGRF,2);
    T rho_15=(B*K2*K5*w25)*pow(valGRF,1);
    T rho_16=(B*K2*K6*w26)*pow(valGRF,1);
    T rho_17=(K3*K4*w34)*pow(valGRF,2);
    T rho_18=(B*K3*K5*w35)*pow(valGRF,1);
    T rho_19=(B*K3*K6*w36)*pow(valGRF,1);
    T rho_20=(B*K4*K5*w45)*pow(valGRF,1);
    T rho_21=(B*K4*K6*w46)*pow(valGRF,1);
    T rho_22=(pow(B, 2)*K5*K6*w56)*pow(valGRF,0);
    T rho_23=(K1*K2*K3*w123*w23)*pow(valGRF,3);
    T rho_24=(K1*K2*K4*w124*w24)*pow(valGRF,3);
    T rho_25=(B*K1*K2*K5*w125*w25)*pow(valGRF,2);
    T rho_26=(B*K1*K2*K6*w126*w26)*pow(valGRF,2);
    T rho_27=(K1*K3*K4*w134*w34)*pow(valGRF,3);
    T rho_28=(B*K1*K3*K5*w135*w35)*pow(valGRF,2);
    T rho_29=(B*K1*K3*K6*w136*w36)*pow(valGRF,2);
    T rho_30=(B*K1*K4*K5*w145*w45)*pow(valGRF,2);
    T rho_31=(B*K1*K4*K6*w146*w46)*pow(valGRF,2);
    T rho_32=(pow(B, 2)*K1*K5*K6*w156*w56)*pow(valGRF,1);
    T rho_33=(K2*K3*K4*w234*w34)*pow(valGRF,3);
    T rho_34=(B*K2*K3*K5*w235*w35)*pow(valGRF,2);
    T rho_35=(B*K2*K3*K6*w236*w36)*pow(valGRF,2);
    T rho_36=(B*K2*K4*K5*w245*w45)*pow(valGRF,2);
    T rho_37=(B*K2*K4*K6*w246*w46)*pow(valGRF,2);
    T rho_38=(pow(B, 2)*K2*K5*K6*w256*w56)*pow(valGRF,1);
    T rho_39=(B*K3*K4*K5*w345*w45)*pow(valGRF,2);
    T rho_40=(B*K3*K4*K6*w346*w46)*pow(valGRF,2);
    T rho_41=(pow(B, 2)*K3*K5*K6*w356*w56)*pow(valGRF,1);
    T rho_42=(pow(B, 2)*K4*K5*K6*w456*w56)*pow(valGRF,1);
    T rho_43=(K1*K2*K3*K4*w1234*w234*w34)*pow(valGRF,4);
    T rho_44=(B*K1*K2*K3*K5*w1235*w235*w35)*pow(valGRF,3);
    T rho_45=(B*K1*K2*K3*K6*w1236*w236*w36)*pow(valGRF,3);
    T rho_46=(B*K1*K2*K4*K5*w1245*w245*w45)*pow(valGRF,3);
    T rho_47=(B*K1*K2*K4*K6*w1246*w246*w46)*pow(valGRF,3);
    T rho_48=(pow(B, 2)*K1*K2*K5*K6*w1256*w256*w56)*pow(valGRF,2);
    T rho_49=(B*K1*K3*K4*K5*w1345*w345*w45)*pow(valGRF,3);
    T rho_50=(B*K1*K3*K4*K6*w1346*w346*w46)*pow(valGRF,3);
    T rho_51=(pow(B, 2)*K1*K3*K5*K6*w1356*w356*w56)*pow(valGRF,2);
    T rho_52=(pow(B, 2)*K1*K4*K5*K6*w1456*w456*w56)*pow(valGRF,2);
    T rho_53=(B*K2*K3*K4*K5*w2345*w345*w45)*pow(valGRF,3);
    T rho_54=(B*K2*K3*K4*K6*w2346*w346*w46)*pow(valGRF,3);
    T rho_55=(pow(B, 2)*K2*K3*K5*K6*w2356*w356*w56)*pow(valGRF,2);
    T rho_56=(pow(B, 2)*K2*K4*K5*K6*w2456*w456*w56)*pow(valGRF,2);
    T rho_57=(pow(B, 2)*K3*K4*K5*K6*w3456*w456*w56)*pow(valGRF,2);
    T rho_58=(B*K1*K2*K3*K4*K5*w12345*w2345*w345*w45)*pow(valGRF,4);
    T rho_59=(B*K1*K2*K3*K4*K6*w12346*w2346*w346*w46)*pow(valGRF,4);
    T rho_60=(pow(B, 2)*K1*K2*K3*K5*K6*w12356*w2356*w356*w56)*pow(valGRF,3);
    T rho_61=(pow(B, 2)*K1*K2*K4*K5*K6*w12456*w2456*w456*w56)*pow(valGRF,3);
    T rho_62=(pow(B, 2)*K1*K3*K4*K5*K6*w13456*w3456*w456*w56)*pow(valGRF,3);
    T rho_63=(pow(B, 2)*K2*K3*K4*K5*K6*w23456*w3456*w456*w56)*pow(valGRF,3);
    T rho_64=(pow(B, 2)*K1*K2*K3*K4*K5*K6*w123456*w23456*w3456*w456*w56)*pow(valGRF,4);
    rhos={rho_1,rho_2,rho_3,rho_4,rho_5,rho_6,rho_7,rho_8,rho_9,rho_10,rho_11,rho_12,rho_13,rho_14,rho_15,rho_16,rho_17,rho_18,rho_19,rho_20,rho_21,rho_22,rho_23,rho_24,rho_25,rho_26,rho_27,rho_28,rho_29,rho_30,rho_31,rho_32,rho_33,rho_34,rho_35,rho_36,rho_37,rho_38,rho_39,rho_40,rho_41,rho_42,rho_43,rho_44,rho_45,rho_46,rho_47,rho_48,rho_49,rho_50,rho_51,rho_52,rho_53,rho_54,rho_55,rho_56,rho_57,rho_58,rho_59,rho_60,rho_61,rho_62,rho_63,rho_64};
}

template <typename T, typename Tpolyc, typename polytype, typename thresholdtype>
class TFA4_TFB2_GRFCalculations: public GRFCalculations <T, Tpolyc, polytype, thresholdtype>{

    public:

    void fill_num_den(py::array_t<double> parsar, py::array_t<double>othervars){
            
        TFA4_TFB2_A<T>(parsar, this->num,this->den,othervars);
    }

    void fill_rhos(py::array_t<double> parsar, py::array_t<double>othervars, double xval){

        rhos_TFA4_TFB2_A<T>(parsar, this->rhos,othervars, xval);
    }
    
};
typedef number<mpc_complex_backend<50> > mpc_50;
typedef Polynomial<50> polytype_50;
typedef number<mpfr_float_backend<15> > mpfr_15;
typedef number<mpfr_float_backend<50> > mpfr_50;
typedef number<mpfr_float_backend<100> > mpfr_100;
typedef number<mpc_complex_backend<100> > mpc_100;
typedef Polynomial<100> polytype_100;


PYBIND11_MODULE(TFA4_TFB2, m) {
    py::class_<TFA4_TFB2_GRFCalculations<long double,mpc_50,polytype_50,mpfr_15>>(m, "GRFCalculations_ld_50_15", py::module_local())
    .def(py::init())
    .def("fill_num_den", &TFA4_TFB2_GRFCalculations<long double,mpc_50,polytype_50,mpfr_15>::fill_num_den)
    .def("fill_rhos", &TFA4_TFB2_GRFCalculations<long double,mpc_50,polytype_50,mpfr_15>::fill_rhos)
    .def("interfaceGRF", &TFA4_TFB2_GRFCalculations<long double,mpc_50,polytype_50,mpfr_15>::interfaceGRF)
    .def("getrhos", &TFA4_TFB2_GRFCalculations<long double,mpc_50,polytype_50,mpfr_15>::getrhos)
    .def("interfaceps", &TFA4_TFB2_GRFCalculations<long double,mpc_50,polytype_50,mpfr_15>::interfaceps,py::arg("verbose")=false, py::arg("thresholdimag")=1e-15,py::arg("minx0")=false,py::arg("maxx1")=false,py::arg("writex05coeffs")=false, py::arg("absder")=false, py::arg("normalisefirst")=true, py::arg("fnamecoeffs")="coefficients.txt")
    .def("interface_return_num_den", &TFA4_TFB2_GRFCalculations<long double,mpc_50,polytype_50,mpfr_15>::interface_return_num_den)
    .def("interfacemonotonic", &TFA4_TFB2_GRFCalculations<long double,mpc_50,polytype_50,mpfr_15>::interfacemonotonic, py::arg("thresholdimag")=1e-15)
    .def("print_num_den", &TFA4_TFB2_GRFCalculations<long double,mpc_50,polytype_50,mpfr_15>::print_num_den);

    py::class_<TFA4_TFB2_GRFCalculations<mpfr_50,mpc_50,polytype_50,mpfr_15>>(m, "GRFCalculations_50_50_15", py::module_local())
    .def(py::init())
    .def("fill_num_den", &TFA4_TFB2_GRFCalculations<mpfr_50,mpc_50,polytype_50,mpfr_15>::fill_num_den)
    .def("fill_rhos", &TFA4_TFB2_GRFCalculations<mpfr_50,mpc_50,polytype_50,mpfr_15>::fill_rhos)
    .def("interfaceGRF", &TFA4_TFB2_GRFCalculations<mpfr_50,mpc_50,polytype_50,mpfr_15>::interfaceGRF)
    .def("getrhos", &TFA4_TFB2_GRFCalculations<mpfr_50,mpc_50,polytype_50,mpfr_15>::getrhos)
    .def("interfaceps", &TFA4_TFB2_GRFCalculations<mpfr_50,mpc_50,polytype_50,mpfr_15>::interfaceps,py::arg("verbose")=false, py::arg("thresholdimag")=1e-15,py::arg("minx0")=false,py::arg("maxx1")=false,py::arg("writex05coeffs")=false, py::arg("absder")=false, py::arg("normalisefirst")=true, py::arg("fnamecoeffs")="coefficients.txt")
    .def("interface_return_num_den", &TFA4_TFB2_GRFCalculations<mpfr_50,mpc_50,polytype_50,mpfr_15>::interface_return_num_den)
    .def("interfacemonotonic", &TFA4_TFB2_GRFCalculations<mpfr_50,mpc_50,polytype_50,mpfr_15>::interfacemonotonic, py::arg("thresholdimag")=1e-15)
    .def("print_num_den", &TFA4_TFB2_GRFCalculations<mpfr_50,mpc_50,polytype_50,mpfr_15>::print_num_den);

    py::class_<TFA4_TFB2_GRFCalculations<mpfr_100,mpc_100,polytype_100,mpfr_15>>(m, "GRFCalculations_100_100_15", py::module_local())
    .def(py::init())
    .def("fill_num_den", &TFA4_TFB2_GRFCalculations<mpfr_100,mpc_100,polytype_100,mpfr_15>::fill_num_den)
    .def("fill_rhos", &TFA4_TFB2_GRFCalculations<mpfr_100,mpc_100,polytype_100,mpfr_15>::fill_rhos)
    .def("interfaceGRF", &TFA4_TFB2_GRFCalculations<mpfr_100,mpc_100,polytype_100,mpfr_15>::interfaceGRF)
    .def("getrhos", &TFA4_TFB2_GRFCalculations<mpfr_100,mpc_100,polytype_100,mpfr_15>::getrhos)
    .def("interfaceps", &TFA4_TFB2_GRFCalculations<mpfr_100,mpc_100,polytype_100,mpfr_15>::interfaceps,py::arg("verbose")=false, py::arg("thresholdimag")=1e-15,py::arg("minx0")=false,py::arg("maxx1")=false,py::arg("writex05coeffs")=false, py::arg("absder")=false, py::arg("normalisefirst")=true, py::arg("fnamecoeffs")="coefficients.txt")
    .def("interface_return_num_den", &TFA4_TFB2_GRFCalculations<mpfr_100,mpc_100,polytype_100,mpfr_15>::interface_return_num_den)
    .def("interfacemonotonic", &TFA4_TFB2_GRFCalculations<mpfr_100,mpc_100,polytype_100,mpfr_15>::interfacemonotonic, py::arg("thresholdimag")=1e-15)
    .def("print_num_den", &TFA4_TFB2_GRFCalculations<mpfr_100,mpc_100,polytype_100,mpfr_15>::print_num_den);

}
