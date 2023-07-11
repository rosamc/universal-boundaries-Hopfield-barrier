#include "commonincludes.hpp"
template <typename T>
void N6Pol_basal_x(py::array_t<double> parsar, vector<T> &num, vector<T> &den, py::array_t<double>othervars){

    auto parsarbuf=parsar.request();
    double *pars=(double *) parsarbuf.ptr;
    T K1=pars[0];
    T K2=pars[1];
    T K3=pars[2];
    T K4=pars[3];
    T K5=pars[4];
    T K6=pars[5];
    T w12=pars[6];
    T w13=pars[7];
    T w14=pars[8];
    T w15=pars[9];
    T w16=pars[10];
    T w23=pars[11];
    T w24=pars[12];
    T w25=pars[13];
    T w26=pars[14];
    T w34=pars[15];
    T w35=pars[16];
    T w36=pars[17];
    T w45=pars[18];
    T w46=pars[19];
    T w56=pars[20];
    T w123=pars[21];
    T w124=pars[22];
    T w125=pars[23];
    T w126=pars[24];
    T w134=pars[25];
    T w135=pars[26];
    T w136=pars[27];
    T w145=pars[28];
    T w146=pars[29];
    T w156=pars[30];
    T w234=pars[31];
    T w235=pars[32];
    T w236=pars[33];
    T w245=pars[34];
    T w246=pars[35];
    T w256=pars[36];
    T w345=pars[37];
    T w346=pars[38];
    T w356=pars[39];
    T w456=pars[40];
    T w1234=pars[41];
    T w1235=pars[42];
    T w1236=pars[43];
    T w1245=pars[44];
    T w1246=pars[45];
    T w1256=pars[46];
    T w1345=pars[47];
    T w1346=pars[48];
    T w1356=pars[49];
    T w1456=pars[50];
    T w2345=pars[51];
    T w2346=pars[52];
    T w2356=pars[53];
    T w2456=pars[54];
    T w3456=pars[55];
    T w12345=pars[56];
    T w12346=pars[57];
    T w12356=pars[58];
    T w12456=pars[59];
    T w13456=pars[60];
    T w23456=pars[61];
    T w123456=pars[62];
    T wp1=pars[63];
    T wp2=pars[64];
    T wp3=pars[65];
    T wp4=pars[66];
    T wp5=pars[67];
    T wp6=pars[68];
    T wp12=pars[69];
    T wp13=pars[70];
    T wp14=pars[71];
    T wp15=pars[72];
    T wp16=pars[73];
    T wp23=pars[74];
    T wp24=pars[75];
    T wp25=pars[76];
    T wp26=pars[77];
    T wp34=pars[78];
    T wp35=pars[79];
    T wp36=pars[80];
    T wp45=pars[81];
    T wp46=pars[82];
    T wp56=pars[83];
    T wp123=pars[84];
    T wp124=pars[85];
    T wp125=pars[86];
    T wp126=pars[87];
    T wp134=pars[88];
    T wp135=pars[89];
    T wp136=pars[90];
    T wp145=pars[91];
    T wp146=pars[92];
    T wp156=pars[93];
    T wp234=pars[94];
    T wp235=pars[95];
    T wp236=pars[96];
    T wp245=pars[97];
    T wp246=pars[98];
    T wp256=pars[99];
    T wp345=pars[100];
    T wp346=pars[101];
    T wp356=pars[102];
    T wp456=pars[103];
    T wp1234=pars[104];
    T wp1235=pars[105];
    T wp1236=pars[106];
    T wp1245=pars[107];
    T wp1246=pars[108];
    T wp1256=pars[109];
    T wp1345=pars[110];
    T wp1346=pars[111];
    T wp1356=pars[112];
    T wp1456=pars[113];
    T wp2345=pars[114];
    T wp2346=pars[115];
    T wp2356=pars[116];
    T wp2456=pars[117];
    T wp3456=pars[118];
    T wp12345=pars[119];
    T wp12346=pars[120];
    T wp12356=pars[121];
    T wp12456=pars[122];
    T wp13456=pars[123];
    T wp23456=pars[124];
    T wp123456=pars[125];

    auto varsarbuf=othervars.request();
    double *varsar=(double *) varsarbuf.ptr;
    T P=varsar[0];
    vector<T> coeffs_1={1};
    vector<T> coeffs_2={0, K1};
    vector<T> coeffs_3={0, K2};
    vector<T> coeffs_4={0, K3};
    vector<T> coeffs_5={0, K4};
    vector<T> coeffs_6={0, K5};
    vector<T> coeffs_7={0, K6};
    vector<T> coeffs_8={P};
    vector<T> coeffs_9={0, 0, K1*K2*w12};
    vector<T> coeffs_10={0, 0, K1*K3*w13};
    vector<T> coeffs_11={0, 0, K1*K4*w14};
    vector<T> coeffs_12={0, 0, K1*K5*w15};
    vector<T> coeffs_13={0, 0, K1*K6*w16};
    vector<T> coeffs_14={0, K1*P*wp1};
    vector<T> coeffs_15={0, 0, K2*K3*w23};
    vector<T> coeffs_16={0, 0, K2*K4*w24};
    vector<T> coeffs_17={0, 0, K2*K5*w25};
    vector<T> coeffs_18={0, 0, K2*K6*w26};
    vector<T> coeffs_19={0, K2*P*wp2};
    vector<T> coeffs_20={0, 0, K3*K4*w34};
    vector<T> coeffs_21={0, 0, K3*K5*w35};
    vector<T> coeffs_22={0, 0, K3*K6*w36};
    vector<T> coeffs_23={0, K3*P*wp3};
    vector<T> coeffs_24={0, 0, K4*K5*w45};
    vector<T> coeffs_25={0, 0, K4*K6*w46};
    vector<T> coeffs_26={0, K4*P*wp4};
    vector<T> coeffs_27={0, 0, K5*K6*w56};
    vector<T> coeffs_28={0, K5*P*wp5};
    vector<T> coeffs_29={0, K6*P*wp6};
    vector<T> coeffs_30={0, 0, 0, K1*K2*K3*w123*w23};
    vector<T> coeffs_31={0, 0, 0, K1*K2*K4*w124*w24};
    vector<T> coeffs_32={0, 0, 0, K1*K2*K5*w125*w25};
    vector<T> coeffs_33={0, 0, 0, K1*K2*K6*w126*w26};
    vector<T> coeffs_34={0, 0, K1*K2*P*w12*wp12};
    vector<T> coeffs_35={0, 0, 0, K1*K3*K4*w134*w34};
    vector<T> coeffs_36={0, 0, 0, K1*K3*K5*w135*w35};
    vector<T> coeffs_37={0, 0, 0, K1*K3*K6*w136*w36};
    vector<T> coeffs_38={0, 0, K1*K3*P*w13*wp13};
    vector<T> coeffs_39={0, 0, 0, K1*K4*K5*w145*w45};
    vector<T> coeffs_40={0, 0, 0, K1*K4*K6*w146*w46};
    vector<T> coeffs_41={0, 0, K1*K4*P*w14*wp14};
    vector<T> coeffs_42={0, 0, 0, K1*K5*K6*w156*w56};
    vector<T> coeffs_43={0, 0, K1*K5*P*w15*wp15};
    vector<T> coeffs_44={0, 0, K1*K6*P*w16*wp16};
    vector<T> coeffs_45={0, 0, 0, K2*K3*K4*w234*w34};
    vector<T> coeffs_46={0, 0, 0, K2*K3*K5*w235*w35};
    vector<T> coeffs_47={0, 0, 0, K2*K3*K6*w236*w36};
    vector<T> coeffs_48={0, 0, K2*K3*P*w23*wp23};
    vector<T> coeffs_49={0, 0, 0, K2*K4*K5*w245*w45};
    vector<T> coeffs_50={0, 0, 0, K2*K4*K6*w246*w46};
    vector<T> coeffs_51={0, 0, K2*K4*P*w24*wp24};
    vector<T> coeffs_52={0, 0, 0, K2*K5*K6*w256*w56};
    vector<T> coeffs_53={0, 0, K2*K5*P*w25*wp25};
    vector<T> coeffs_54={0, 0, K2*K6*P*w26*wp26};
    vector<T> coeffs_55={0, 0, 0, K3*K4*K5*w345*w45};
    vector<T> coeffs_56={0, 0, 0, K3*K4*K6*w346*w46};
    vector<T> coeffs_57={0, 0, K3*K4*P*w34*wp34};
    vector<T> coeffs_58={0, 0, 0, K3*K5*K6*w356*w56};
    vector<T> coeffs_59={0, 0, K3*K5*P*w35*wp35};
    vector<T> coeffs_60={0, 0, K3*K6*P*w36*wp36};
    vector<T> coeffs_61={0, 0, 0, K4*K5*K6*w456*w56};
    vector<T> coeffs_62={0, 0, K4*K5*P*w45*wp45};
    vector<T> coeffs_63={0, 0, K4*K6*P*w46*wp46};
    vector<T> coeffs_64={0, 0, K5*K6*P*w56*wp56};
    vector<T> coeffs_65={0, 0, 0, 0, K1*K2*K3*K4*w1234*w234*w34};
    vector<T> coeffs_66={0, 0, 0, 0, K1*K2*K3*K5*w1235*w235*w35};
    vector<T> coeffs_67={0, 0, 0, 0, K1*K2*K3*K6*w1236*w236*w36};
    vector<T> coeffs_68={0, 0, 0, K1*K2*K3*P*w123*w23*wp123};
    vector<T> coeffs_69={0, 0, 0, 0, K1*K2*K4*K5*w1245*w245*w45};
    vector<T> coeffs_70={0, 0, 0, 0, K1*K2*K4*K6*w1246*w246*w46};
    vector<T> coeffs_71={0, 0, 0, K1*K2*K4*P*w124*w24*wp124};
    vector<T> coeffs_72={0, 0, 0, 0, K1*K2*K5*K6*w1256*w256*w56};
    vector<T> coeffs_73={0, 0, 0, K1*K2*K5*P*w125*w25*wp125};
    vector<T> coeffs_74={0, 0, 0, K1*K2*K6*P*w126*w26*wp126};
    vector<T> coeffs_75={0, 0, 0, 0, K1*K3*K4*K5*w1345*w345*w45};
    vector<T> coeffs_76={0, 0, 0, 0, K1*K3*K4*K6*w1346*w346*w46};
    vector<T> coeffs_77={0, 0, 0, K1*K3*K4*P*w134*w34*wp134};
    vector<T> coeffs_78={0, 0, 0, 0, K1*K3*K5*K6*w1356*w356*w56};
    vector<T> coeffs_79={0, 0, 0, K1*K3*K5*P*w135*w35*wp135};
    vector<T> coeffs_80={0, 0, 0, K1*K3*K6*P*w136*w36*wp136};
    vector<T> coeffs_81={0, 0, 0, 0, K1*K4*K5*K6*w1456*w456*w56};
    vector<T> coeffs_82={0, 0, 0, K1*K4*K5*P*w145*w45*wp145};
    vector<T> coeffs_83={0, 0, 0, K1*K4*K6*P*w146*w46*wp146};
    vector<T> coeffs_84={0, 0, 0, K1*K5*K6*P*w156*w56*wp156};
    vector<T> coeffs_85={0, 0, 0, 0, K2*K3*K4*K5*w2345*w345*w45};
    vector<T> coeffs_86={0, 0, 0, 0, K2*K3*K4*K6*w2346*w346*w46};
    vector<T> coeffs_87={0, 0, 0, K2*K3*K4*P*w234*w34*wp234};
    vector<T> coeffs_88={0, 0, 0, 0, K2*K3*K5*K6*w2356*w356*w56};
    vector<T> coeffs_89={0, 0, 0, K2*K3*K5*P*w235*w35*wp235};
    vector<T> coeffs_90={0, 0, 0, K2*K3*K6*P*w236*w36*wp236};
    vector<T> coeffs_91={0, 0, 0, 0, K2*K4*K5*K6*w2456*w456*w56};
    vector<T> coeffs_92={0, 0, 0, K2*K4*K5*P*w245*w45*wp245};
    vector<T> coeffs_93={0, 0, 0, K2*K4*K6*P*w246*w46*wp246};
    vector<T> coeffs_94={0, 0, 0, K2*K5*K6*P*w256*w56*wp256};
    vector<T> coeffs_95={0, 0, 0, 0, K3*K4*K5*K6*w3456*w456*w56};
    vector<T> coeffs_96={0, 0, 0, K3*K4*K5*P*w345*w45*wp345};
    vector<T> coeffs_97={0, 0, 0, K3*K4*K6*P*w346*w46*wp346};
    vector<T> coeffs_98={0, 0, 0, K3*K5*K6*P*w356*w56*wp356};
    vector<T> coeffs_99={0, 0, 0, K4*K5*K6*P*w456*w56*wp456};
    vector<T> coeffs_100={0, 0, 0, 0, 0, K1*K2*K3*K4*K5*w12345*w2345*w345*w45};
    vector<T> coeffs_101={0, 0, 0, 0, 0, K1*K2*K3*K4*K6*w12346*w2346*w346*w46};
    vector<T> coeffs_102={0, 0, 0, 0, K1*K2*K3*K4*P*w1234*w234*w34*wp1234};
    vector<T> coeffs_103={0, 0, 0, 0, 0, K1*K2*K3*K5*K6*w12356*w2356*w356*w56};
    vector<T> coeffs_104={0, 0, 0, 0, K1*K2*K3*K5*P*w1235*w235*w35*wp1235};
    vector<T> coeffs_105={0, 0, 0, 0, K1*K2*K3*K6*P*w1236*w236*w36*wp1236};
    vector<T> coeffs_106={0, 0, 0, 0, 0, K1*K2*K4*K5*K6*w12456*w2456*w456*w56};
    vector<T> coeffs_107={0, 0, 0, 0, K1*K2*K4*K5*P*w1245*w245*w45*wp1245};
    vector<T> coeffs_108={0, 0, 0, 0, K1*K2*K4*K6*P*w1246*w246*w46*wp1246};
    vector<T> coeffs_109={0, 0, 0, 0, K1*K2*K5*K6*P*w1256*w256*w56*wp1256};
    vector<T> coeffs_110={0, 0, 0, 0, 0, K1*K3*K4*K5*K6*w13456*w3456*w456*w56};
    vector<T> coeffs_111={0, 0, 0, 0, K1*K3*K4*K5*P*w1345*w345*w45*wp1345};
    vector<T> coeffs_112={0, 0, 0, 0, K1*K3*K4*K6*P*w1346*w346*w46*wp1346};
    vector<T> coeffs_113={0, 0, 0, 0, K1*K3*K5*K6*P*w1356*w356*w56*wp1356};
    vector<T> coeffs_114={0, 0, 0, 0, K1*K4*K5*K6*P*w1456*w456*w56*wp1456};
    vector<T> coeffs_115={0, 0, 0, 0, 0, K2*K3*K4*K5*K6*w23456*w3456*w456*w56};
    vector<T> coeffs_116={0, 0, 0, 0, K2*K3*K4*K5*P*w2345*w345*w45*wp2345};
    vector<T> coeffs_117={0, 0, 0, 0, K2*K3*K4*K6*P*w2346*w346*w46*wp2346};
    vector<T> coeffs_118={0, 0, 0, 0, K2*K3*K5*K6*P*w2356*w356*w56*wp2356};
    vector<T> coeffs_119={0, 0, 0, 0, K2*K4*K5*K6*P*w2456*w456*w56*wp2456};
    vector<T> coeffs_120={0, 0, 0, 0, K3*K4*K5*K6*P*w3456*w456*w56*wp3456};
    vector<T> coeffs_121={0, 0, 0, 0, 0, 0, K1*K2*K3*K4*K5*K6*w123456*w23456*w3456*w456*w56};
    vector<T> coeffs_122={0, 0, 0, 0, 0, K1*K2*K3*K4*K5*P*w12345*w2345*w345*w45*wp12345};
    vector<T> coeffs_123={0, 0, 0, 0, 0, K1*K2*K3*K4*K6*P*w12346*w2346*w346*w46*wp12346};
    vector<T> coeffs_124={0, 0, 0, 0, 0, K1*K2*K3*K5*K6*P*w12356*w2356*w356*w56*wp12356};
    vector<T> coeffs_125={0, 0, 0, 0, 0, K1*K2*K4*K5*K6*P*w12456*w2456*w456*w56*wp12456};
    vector<T> coeffs_126={0, 0, 0, 0, 0, K1*K3*K4*K5*K6*P*w13456*w3456*w456*w56*wp13456};
    vector<T> coeffs_127={0, 0, 0, 0, 0, K2*K3*K4*K5*K6*P*w23456*w3456*w456*w56*wp23456};
    vector<T> coeffs_128={0, 0, 0, 0, 0, 0, K1*K2*K3*K4*K5*K6*P*w123456*w23456*w3456*w456*w56*wp123456};
    T numdeg0=1*coeffs_8[0];
    T numdeg1=1*coeffs_14[1]+1*coeffs_19[1]+1*coeffs_23[1]+1*coeffs_26[1]+1*coeffs_28[1]+1*coeffs_29[1];
    T numdeg2=1*coeffs_34[2]+1*coeffs_38[2]+1*coeffs_41[2]+1*coeffs_43[2]+1*coeffs_44[2]+1*coeffs_48[2]+1*coeffs_51[2]+1*coeffs_53[2]+1*coeffs_54[2]+1*coeffs_57[2]+1*coeffs_59[2]+1*coeffs_60[2]+1*coeffs_62[2]+1*coeffs_63[2]+1*coeffs_64[2];
    T numdeg3=1*coeffs_68[3]+1*coeffs_71[3]+1*coeffs_73[3]+1*coeffs_74[3]+1*coeffs_77[3]+1*coeffs_79[3]+1*coeffs_80[3]+1*coeffs_82[3]+1*coeffs_83[3]+1*coeffs_84[3]+1*coeffs_87[3]+1*coeffs_89[3]+1*coeffs_90[3]+1*coeffs_92[3]+1*coeffs_93[3]+1*coeffs_94[3]+1*coeffs_96[3]+1*coeffs_97[3]+1*coeffs_98[3]+1*coeffs_99[3];
    T numdeg4=1*coeffs_102[4]+1*coeffs_104[4]+1*coeffs_105[4]+1*coeffs_107[4]+1*coeffs_108[4]+1*coeffs_109[4]+1*coeffs_111[4]+1*coeffs_112[4]+1*coeffs_113[4]+1*coeffs_114[4]+1*coeffs_116[4]+1*coeffs_117[4]+1*coeffs_118[4]+1*coeffs_119[4]+1*coeffs_120[4];
    T numdeg5=1*coeffs_122[5]+1*coeffs_123[5]+1*coeffs_124[5]+1*coeffs_125[5]+1*coeffs_126[5]+1*coeffs_127[5];
    T numdeg6=1*coeffs_128[6];
    T dendeg0=coeffs_1[0]+coeffs_8[0];
    T dendeg1=coeffs_2[1]+coeffs_3[1]+coeffs_4[1]+coeffs_5[1]+coeffs_6[1]+coeffs_7[1]+coeffs_14[1]+coeffs_19[1]+coeffs_23[1]+coeffs_26[1]+coeffs_28[1]+coeffs_29[1];
    T dendeg2=coeffs_9[2]+coeffs_10[2]+coeffs_11[2]+coeffs_12[2]+coeffs_13[2]+coeffs_15[2]+coeffs_16[2]+coeffs_17[2]+coeffs_18[2]+coeffs_20[2]+coeffs_21[2]+coeffs_22[2]+coeffs_24[2]+coeffs_25[2]+coeffs_27[2]+coeffs_34[2]+coeffs_38[2]+coeffs_41[2]+coeffs_43[2]+coeffs_44[2]+coeffs_48[2]+coeffs_51[2]+coeffs_53[2]+coeffs_54[2]+coeffs_57[2]+coeffs_59[2]+coeffs_60[2]+coeffs_62[2]+coeffs_63[2]+coeffs_64[2];
    T dendeg3=coeffs_30[3]+coeffs_31[3]+coeffs_32[3]+coeffs_33[3]+coeffs_35[3]+coeffs_36[3]+coeffs_37[3]+coeffs_39[3]+coeffs_40[3]+coeffs_42[3]+coeffs_45[3]+coeffs_46[3]+coeffs_47[3]+coeffs_49[3]+coeffs_50[3]+coeffs_52[3]+coeffs_55[3]+coeffs_56[3]+coeffs_58[3]+coeffs_61[3]+coeffs_68[3]+coeffs_71[3]+coeffs_73[3]+coeffs_74[3]+coeffs_77[3]+coeffs_79[3]+coeffs_80[3]+coeffs_82[3]+coeffs_83[3]+coeffs_84[3]+coeffs_87[3]+coeffs_89[3]+coeffs_90[3]+coeffs_92[3]+coeffs_93[3]+coeffs_94[3]+coeffs_96[3]+coeffs_97[3]+coeffs_98[3]+coeffs_99[3];
    T dendeg4=coeffs_65[4]+coeffs_66[4]+coeffs_67[4]+coeffs_69[4]+coeffs_70[4]+coeffs_72[4]+coeffs_75[4]+coeffs_76[4]+coeffs_78[4]+coeffs_81[4]+coeffs_85[4]+coeffs_86[4]+coeffs_88[4]+coeffs_91[4]+coeffs_95[4]+coeffs_102[4]+coeffs_104[4]+coeffs_105[4]+coeffs_107[4]+coeffs_108[4]+coeffs_109[4]+coeffs_111[4]+coeffs_112[4]+coeffs_113[4]+coeffs_114[4]+coeffs_116[4]+coeffs_117[4]+coeffs_118[4]+coeffs_119[4]+coeffs_120[4];
    T dendeg5=coeffs_100[5]+coeffs_101[5]+coeffs_103[5]+coeffs_106[5]+coeffs_110[5]+coeffs_115[5]+coeffs_122[5]+coeffs_123[5]+coeffs_124[5]+coeffs_125[5]+coeffs_126[5]+coeffs_127[5];
    T dendeg6=coeffs_121[6]+coeffs_128[6];
    num={numdeg0,numdeg1,numdeg2,numdeg3,numdeg4,numdeg5,numdeg6};
    den={dendeg0,dendeg1,dendeg2,dendeg3,dendeg4,dendeg5,dendeg6};
}

template <typename T>
void rhos_N6Pol_basal_x(py::array_t<double> parsar, vector<T> &rhos, py::array_t<double>othervars, double valGRF){

    auto parsarbuf=parsar.request();
    double *pars=(double *) parsarbuf.ptr;
    T K1=pars[0];
    T K2=pars[1];
    T K3=pars[2];
    T K4=pars[3];
    T K5=pars[4];
    T K6=pars[5];
    T w12=pars[6];
    T w13=pars[7];
    T w14=pars[8];
    T w15=pars[9];
    T w16=pars[10];
    T w23=pars[11];
    T w24=pars[12];
    T w25=pars[13];
    T w26=pars[14];
    T w34=pars[15];
    T w35=pars[16];
    T w36=pars[17];
    T w45=pars[18];
    T w46=pars[19];
    T w56=pars[20];
    T w123=pars[21];
    T w124=pars[22];
    T w125=pars[23];
    T w126=pars[24];
    T w134=pars[25];
    T w135=pars[26];
    T w136=pars[27];
    T w145=pars[28];
    T w146=pars[29];
    T w156=pars[30];
    T w234=pars[31];
    T w235=pars[32];
    T w236=pars[33];
    T w245=pars[34];
    T w246=pars[35];
    T w256=pars[36];
    T w345=pars[37];
    T w346=pars[38];
    T w356=pars[39];
    T w456=pars[40];
    T w1234=pars[41];
    T w1235=pars[42];
    T w1236=pars[43];
    T w1245=pars[44];
    T w1246=pars[45];
    T w1256=pars[46];
    T w1345=pars[47];
    T w1346=pars[48];
    T w1356=pars[49];
    T w1456=pars[50];
    T w2345=pars[51];
    T w2346=pars[52];
    T w2356=pars[53];
    T w2456=pars[54];
    T w3456=pars[55];
    T w12345=pars[56];
    T w12346=pars[57];
    T w12356=pars[58];
    T w12456=pars[59];
    T w13456=pars[60];
    T w23456=pars[61];
    T w123456=pars[62];
    T wp1=pars[63];
    T wp2=pars[64];
    T wp3=pars[65];
    T wp4=pars[66];
    T wp5=pars[67];
    T wp6=pars[68];
    T wp12=pars[69];
    T wp13=pars[70];
    T wp14=pars[71];
    T wp15=pars[72];
    T wp16=pars[73];
    T wp23=pars[74];
    T wp24=pars[75];
    T wp25=pars[76];
    T wp26=pars[77];
    T wp34=pars[78];
    T wp35=pars[79];
    T wp36=pars[80];
    T wp45=pars[81];
    T wp46=pars[82];
    T wp56=pars[83];
    T wp123=pars[84];
    T wp124=pars[85];
    T wp125=pars[86];
    T wp126=pars[87];
    T wp134=pars[88];
    T wp135=pars[89];
    T wp136=pars[90];
    T wp145=pars[91];
    T wp146=pars[92];
    T wp156=pars[93];
    T wp234=pars[94];
    T wp235=pars[95];
    T wp236=pars[96];
    T wp245=pars[97];
    T wp246=pars[98];
    T wp256=pars[99];
    T wp345=pars[100];
    T wp346=pars[101];
    T wp356=pars[102];
    T wp456=pars[103];
    T wp1234=pars[104];
    T wp1235=pars[105];
    T wp1236=pars[106];
    T wp1245=pars[107];
    T wp1246=pars[108];
    T wp1256=pars[109];
    T wp1345=pars[110];
    T wp1346=pars[111];
    T wp1356=pars[112];
    T wp1456=pars[113];
    T wp2345=pars[114];
    T wp2346=pars[115];
    T wp2356=pars[116];
    T wp2456=pars[117];
    T wp3456=pars[118];
    T wp12345=pars[119];
    T wp12346=pars[120];
    T wp12356=pars[121];
    T wp12456=pars[122];
    T wp13456=pars[123];
    T wp23456=pars[124];
    T wp123456=pars[125];

    auto varsarbuf=othervars.request();
    double *varsar=(double *) varsarbuf.ptr;
    T P=varsar[0];
    T rho_1=(1)*pow(valGRF,0);
    T rho_2=(K1)*pow(valGRF,1);
    T rho_3=(K2)*pow(valGRF,1);
    T rho_4=(K3)*pow(valGRF,1);
    T rho_5=(K4)*pow(valGRF,1);
    T rho_6=(K5)*pow(valGRF,1);
    T rho_7=(K6)*pow(valGRF,1);
    T rho_8=(P)*pow(valGRF,0);
    T rho_9=(K1*K2*w12)*pow(valGRF,2);
    T rho_10=(K1*K3*w13)*pow(valGRF,2);
    T rho_11=(K1*K4*w14)*pow(valGRF,2);
    T rho_12=(K1*K5*w15)*pow(valGRF,2);
    T rho_13=(K1*K6*w16)*pow(valGRF,2);
    T rho_14=(K1*P*wp1)*pow(valGRF,1);
    T rho_15=(K2*K3*w23)*pow(valGRF,2);
    T rho_16=(K2*K4*w24)*pow(valGRF,2);
    T rho_17=(K2*K5*w25)*pow(valGRF,2);
    T rho_18=(K2*K6*w26)*pow(valGRF,2);
    T rho_19=(K2*P*wp2)*pow(valGRF,1);
    T rho_20=(K3*K4*w34)*pow(valGRF,2);
    T rho_21=(K3*K5*w35)*pow(valGRF,2);
    T rho_22=(K3*K6*w36)*pow(valGRF,2);
    T rho_23=(K3*P*wp3)*pow(valGRF,1);
    T rho_24=(K4*K5*w45)*pow(valGRF,2);
    T rho_25=(K4*K6*w46)*pow(valGRF,2);
    T rho_26=(K4*P*wp4)*pow(valGRF,1);
    T rho_27=(K5*K6*w56)*pow(valGRF,2);
    T rho_28=(K5*P*wp5)*pow(valGRF,1);
    T rho_29=(K6*P*wp6)*pow(valGRF,1);
    T rho_30=(K1*K2*K3*w123*w23)*pow(valGRF,3);
    T rho_31=(K1*K2*K4*w124*w24)*pow(valGRF,3);
    T rho_32=(K1*K2*K5*w125*w25)*pow(valGRF,3);
    T rho_33=(K1*K2*K6*w126*w26)*pow(valGRF,3);
    T rho_34=(K1*K2*P*w12*wp12)*pow(valGRF,2);
    T rho_35=(K1*K3*K4*w134*w34)*pow(valGRF,3);
    T rho_36=(K1*K3*K5*w135*w35)*pow(valGRF,3);
    T rho_37=(K1*K3*K6*w136*w36)*pow(valGRF,3);
    T rho_38=(K1*K3*P*w13*wp13)*pow(valGRF,2);
    T rho_39=(K1*K4*K5*w145*w45)*pow(valGRF,3);
    T rho_40=(K1*K4*K6*w146*w46)*pow(valGRF,3);
    T rho_41=(K1*K4*P*w14*wp14)*pow(valGRF,2);
    T rho_42=(K1*K5*K6*w156*w56)*pow(valGRF,3);
    T rho_43=(K1*K5*P*w15*wp15)*pow(valGRF,2);
    T rho_44=(K1*K6*P*w16*wp16)*pow(valGRF,2);
    T rho_45=(K2*K3*K4*w234*w34)*pow(valGRF,3);
    T rho_46=(K2*K3*K5*w235*w35)*pow(valGRF,3);
    T rho_47=(K2*K3*K6*w236*w36)*pow(valGRF,3);
    T rho_48=(K2*K3*P*w23*wp23)*pow(valGRF,2);
    T rho_49=(K2*K4*K5*w245*w45)*pow(valGRF,3);
    T rho_50=(K2*K4*K6*w246*w46)*pow(valGRF,3);
    T rho_51=(K2*K4*P*w24*wp24)*pow(valGRF,2);
    T rho_52=(K2*K5*K6*w256*w56)*pow(valGRF,3);
    T rho_53=(K2*K5*P*w25*wp25)*pow(valGRF,2);
    T rho_54=(K2*K6*P*w26*wp26)*pow(valGRF,2);
    T rho_55=(K3*K4*K5*w345*w45)*pow(valGRF,3);
    T rho_56=(K3*K4*K6*w346*w46)*pow(valGRF,3);
    T rho_57=(K3*K4*P*w34*wp34)*pow(valGRF,2);
    T rho_58=(K3*K5*K6*w356*w56)*pow(valGRF,3);
    T rho_59=(K3*K5*P*w35*wp35)*pow(valGRF,2);
    T rho_60=(K3*K6*P*w36*wp36)*pow(valGRF,2);
    T rho_61=(K4*K5*K6*w456*w56)*pow(valGRF,3);
    T rho_62=(K4*K5*P*w45*wp45)*pow(valGRF,2);
    T rho_63=(K4*K6*P*w46*wp46)*pow(valGRF,2);
    T rho_64=(K5*K6*P*w56*wp56)*pow(valGRF,2);
    T rho_65=(K1*K2*K3*K4*w1234*w234*w34)*pow(valGRF,4);
    T rho_66=(K1*K2*K3*K5*w1235*w235*w35)*pow(valGRF,4);
    T rho_67=(K1*K2*K3*K6*w1236*w236*w36)*pow(valGRF,4);
    T rho_68=(K1*K2*K3*P*w123*w23*wp123)*pow(valGRF,3);
    T rho_69=(K1*K2*K4*K5*w1245*w245*w45)*pow(valGRF,4);
    T rho_70=(K1*K2*K4*K6*w1246*w246*w46)*pow(valGRF,4);
    T rho_71=(K1*K2*K4*P*w124*w24*wp124)*pow(valGRF,3);
    T rho_72=(K1*K2*K5*K6*w1256*w256*w56)*pow(valGRF,4);
    T rho_73=(K1*K2*K5*P*w125*w25*wp125)*pow(valGRF,3);
    T rho_74=(K1*K2*K6*P*w126*w26*wp126)*pow(valGRF,3);
    T rho_75=(K1*K3*K4*K5*w1345*w345*w45)*pow(valGRF,4);
    T rho_76=(K1*K3*K4*K6*w1346*w346*w46)*pow(valGRF,4);
    T rho_77=(K1*K3*K4*P*w134*w34*wp134)*pow(valGRF,3);
    T rho_78=(K1*K3*K5*K6*w1356*w356*w56)*pow(valGRF,4);
    T rho_79=(K1*K3*K5*P*w135*w35*wp135)*pow(valGRF,3);
    T rho_80=(K1*K3*K6*P*w136*w36*wp136)*pow(valGRF,3);
    T rho_81=(K1*K4*K5*K6*w1456*w456*w56)*pow(valGRF,4);
    T rho_82=(K1*K4*K5*P*w145*w45*wp145)*pow(valGRF,3);
    T rho_83=(K1*K4*K6*P*w146*w46*wp146)*pow(valGRF,3);
    T rho_84=(K1*K5*K6*P*w156*w56*wp156)*pow(valGRF,3);
    T rho_85=(K2*K3*K4*K5*w2345*w345*w45)*pow(valGRF,4);
    T rho_86=(K2*K3*K4*K6*w2346*w346*w46)*pow(valGRF,4);
    T rho_87=(K2*K3*K4*P*w234*w34*wp234)*pow(valGRF,3);
    T rho_88=(K2*K3*K5*K6*w2356*w356*w56)*pow(valGRF,4);
    T rho_89=(K2*K3*K5*P*w235*w35*wp235)*pow(valGRF,3);
    T rho_90=(K2*K3*K6*P*w236*w36*wp236)*pow(valGRF,3);
    T rho_91=(K2*K4*K5*K6*w2456*w456*w56)*pow(valGRF,4);
    T rho_92=(K2*K4*K5*P*w245*w45*wp245)*pow(valGRF,3);
    T rho_93=(K2*K4*K6*P*w246*w46*wp246)*pow(valGRF,3);
    T rho_94=(K2*K5*K6*P*w256*w56*wp256)*pow(valGRF,3);
    T rho_95=(K3*K4*K5*K6*w3456*w456*w56)*pow(valGRF,4);
    T rho_96=(K3*K4*K5*P*w345*w45*wp345)*pow(valGRF,3);
    T rho_97=(K3*K4*K6*P*w346*w46*wp346)*pow(valGRF,3);
    T rho_98=(K3*K5*K6*P*w356*w56*wp356)*pow(valGRF,3);
    T rho_99=(K4*K5*K6*P*w456*w56*wp456)*pow(valGRF,3);
    T rho_100=(K1*K2*K3*K4*K5*w12345*w2345*w345*w45)*pow(valGRF,5);
    T rho_101=(K1*K2*K3*K4*K6*w12346*w2346*w346*w46)*pow(valGRF,5);
    T rho_102=(K1*K2*K3*K4*P*w1234*w234*w34*wp1234)*pow(valGRF,4);
    T rho_103=(K1*K2*K3*K5*K6*w12356*w2356*w356*w56)*pow(valGRF,5);
    T rho_104=(K1*K2*K3*K5*P*w1235*w235*w35*wp1235)*pow(valGRF,4);
    T rho_105=(K1*K2*K3*K6*P*w1236*w236*w36*wp1236)*pow(valGRF,4);
    T rho_106=(K1*K2*K4*K5*K6*w12456*w2456*w456*w56)*pow(valGRF,5);
    T rho_107=(K1*K2*K4*K5*P*w1245*w245*w45*wp1245)*pow(valGRF,4);
    T rho_108=(K1*K2*K4*K6*P*w1246*w246*w46*wp1246)*pow(valGRF,4);
    T rho_109=(K1*K2*K5*K6*P*w1256*w256*w56*wp1256)*pow(valGRF,4);
    T rho_110=(K1*K3*K4*K5*K6*w13456*w3456*w456*w56)*pow(valGRF,5);
    T rho_111=(K1*K3*K4*K5*P*w1345*w345*w45*wp1345)*pow(valGRF,4);
    T rho_112=(K1*K3*K4*K6*P*w1346*w346*w46*wp1346)*pow(valGRF,4);
    T rho_113=(K1*K3*K5*K6*P*w1356*w356*w56*wp1356)*pow(valGRF,4);
    T rho_114=(K1*K4*K5*K6*P*w1456*w456*w56*wp1456)*pow(valGRF,4);
    T rho_115=(K2*K3*K4*K5*K6*w23456*w3456*w456*w56)*pow(valGRF,5);
    T rho_116=(K2*K3*K4*K5*P*w2345*w345*w45*wp2345)*pow(valGRF,4);
    T rho_117=(K2*K3*K4*K6*P*w2346*w346*w46*wp2346)*pow(valGRF,4);
    T rho_118=(K2*K3*K5*K6*P*w2356*w356*w56*wp2356)*pow(valGRF,4);
    T rho_119=(K2*K4*K5*K6*P*w2456*w456*w56*wp2456)*pow(valGRF,4);
    T rho_120=(K3*K4*K5*K6*P*w3456*w456*w56*wp3456)*pow(valGRF,4);
    T rho_121=(K1*K2*K3*K4*K5*K6*w123456*w23456*w3456*w456*w56)*pow(valGRF,6);
    T rho_122=(K1*K2*K3*K4*K5*P*w12345*w2345*w345*w45*wp12345)*pow(valGRF,5);
    T rho_123=(K1*K2*K3*K4*K6*P*w12346*w2346*w346*w46*wp12346)*pow(valGRF,5);
    T rho_124=(K1*K2*K3*K5*K6*P*w12356*w2356*w356*w56*wp12356)*pow(valGRF,5);
    T rho_125=(K1*K2*K4*K5*K6*P*w12456*w2456*w456*w56*wp12456)*pow(valGRF,5);
    T rho_126=(K1*K3*K4*K5*K6*P*w13456*w3456*w456*w56*wp13456)*pow(valGRF,5);
    T rho_127=(K2*K3*K4*K5*K6*P*w23456*w3456*w456*w56*wp23456)*pow(valGRF,5);
    T rho_128=(K1*K2*K3*K4*K5*K6*P*w123456*w23456*w3456*w456*w56*wp123456)*pow(valGRF,6);
    rhos={rho_1,rho_2,rho_3,rho_4,rho_5,rho_6,rho_7,rho_8,rho_9,rho_10,rho_11,rho_12,rho_13,rho_14,rho_15,rho_16,rho_17,rho_18,rho_19,rho_20,rho_21,rho_22,rho_23,rho_24,rho_25,rho_26,rho_27,rho_28,rho_29,rho_30,rho_31,rho_32,rho_33,rho_34,rho_35,rho_36,rho_37,rho_38,rho_39,rho_40,rho_41,rho_42,rho_43,rho_44,rho_45,rho_46,rho_47,rho_48,rho_49,rho_50,rho_51,rho_52,rho_53,rho_54,rho_55,rho_56,rho_57,rho_58,rho_59,rho_60,rho_61,rho_62,rho_63,rho_64,rho_65,rho_66,rho_67,rho_68,rho_69,rho_70,rho_71,rho_72,rho_73,rho_74,rho_75,rho_76,rho_77,rho_78,rho_79,rho_80,rho_81,rho_82,rho_83,rho_84,rho_85,rho_86,rho_87,rho_88,rho_89,rho_90,rho_91,rho_92,rho_93,rho_94,rho_95,rho_96,rho_97,rho_98,rho_99,rho_100,rho_101,rho_102,rho_103,rho_104,rho_105,rho_106,rho_107,rho_108,rho_109,rho_110,rho_111,rho_112,rho_113,rho_114,rho_115,rho_116,rho_117,rho_118,rho_119,rho_120,rho_121,rho_122,rho_123,rho_124,rho_125,rho_126,rho_127,rho_128};
}

template <typename T, typename Tpolyc, typename polytype, typename thresholdtype>
class N6Pol_basal_GRFCalculations: public GRFCalculations <T, Tpolyc, polytype, thresholdtype>{

    public:

    void fill_num_den(py::array_t<double> parsar, py::array_t<double>othervars){
            
        N6Pol_basal_x<T>(parsar, this->num,this->den,othervars);
    }

    void fill_rhos(py::array_t<double> parsar, py::array_t<double>othervars, double xval){

        rhos_N6Pol_basal_x<T>(parsar, this->rhos,othervars, xval);
    }
    
};
typedef number<mpc_complex_backend<50> > mpc_50;
typedef Polynomial<50> polytype_50;
typedef number<mpfr_float_backend<15> > mpfr_15;
typedef number<mpfr_float_backend<50> > mpfr_50;
typedef number<mpfr_float_backend<100> > mpfr_100;
typedef number<mpc_complex_backend<100> > mpc_100;
typedef Polynomial<100> polytype_100;


PYBIND11_MODULE(N6Pol_basal, m) {
    py::class_<N6Pol_basal_GRFCalculations<long double,mpc_50,polytype_50,mpfr_15>>(m, "GRFCalculations_ld_50_15", py::module_local())
    .def(py::init())
    .def("fill_num_den", &N6Pol_basal_GRFCalculations<long double,mpc_50,polytype_50,mpfr_15>::fill_num_den)
    .def("fill_rhos", &N6Pol_basal_GRFCalculations<long double,mpc_50,polytype_50,mpfr_15>::fill_rhos)
    .def("interfaceGRF", &N6Pol_basal_GRFCalculations<long double,mpc_50,polytype_50,mpfr_15>::interfaceGRF)
    .def("getrhos", &N6Pol_basal_GRFCalculations<long double,mpc_50,polytype_50,mpfr_15>::getrhos)
    .def("interfaceps", &N6Pol_basal_GRFCalculations<long double,mpc_50,polytype_50,mpfr_15>::interfaceps,py::arg("verbose")=false, py::arg("thresholdimag")=1e-15,py::arg("minx0")=false,py::arg("maxx1")=false,py::arg("writex05coeffs")=false, py::arg("absder")=false, py::arg("normalisefirst")=true, py::arg("fnamecoeffs")="coefficients.txt")
    .def("interface_return_num_den", &N6Pol_basal_GRFCalculations<long double,mpc_50,polytype_50,mpfr_15>::interface_return_num_den)
    .def("interfacemonotonic", &N6Pol_basal_GRFCalculations<long double,mpc_50,polytype_50,mpfr_15>::interfacemonotonic, py::arg("thresholdimag")=1e-15)
    .def("print_num_den", &N6Pol_basal_GRFCalculations<long double,mpc_50,polytype_50,mpfr_15>::print_num_den);

    py::class_<N6Pol_basal_GRFCalculations<mpfr_50,mpc_50,polytype_50,mpfr_15>>(m, "GRFCalculations_50_50_15", py::module_local())
    .def(py::init())
    .def("fill_num_den", &N6Pol_basal_GRFCalculations<mpfr_50,mpc_50,polytype_50,mpfr_15>::fill_num_den)
    .def("fill_rhos", &N6Pol_basal_GRFCalculations<mpfr_50,mpc_50,polytype_50,mpfr_15>::fill_rhos)
    .def("interfaceGRF", &N6Pol_basal_GRFCalculations<mpfr_50,mpc_50,polytype_50,mpfr_15>::interfaceGRF)
    .def("getrhos", &N6Pol_basal_GRFCalculations<mpfr_50,mpc_50,polytype_50,mpfr_15>::getrhos)
    .def("interfaceps", &N6Pol_basal_GRFCalculations<mpfr_50,mpc_50,polytype_50,mpfr_15>::interfaceps,py::arg("verbose")=false, py::arg("thresholdimag")=1e-15,py::arg("minx0")=false,py::arg("maxx1")=false,py::arg("writex05coeffs")=false, py::arg("absder")=false, py::arg("normalisefirst")=true, py::arg("fnamecoeffs")="coefficients.txt")
    .def("interface_return_num_den", &N6Pol_basal_GRFCalculations<mpfr_50,mpc_50,polytype_50,mpfr_15>::interface_return_num_den)
    .def("interfacemonotonic", &N6Pol_basal_GRFCalculations<mpfr_50,mpc_50,polytype_50,mpfr_15>::interfacemonotonic, py::arg("thresholdimag")=1e-15)
    .def("print_num_den", &N6Pol_basal_GRFCalculations<mpfr_50,mpc_50,polytype_50,mpfr_15>::print_num_den);

    py::class_<N6Pol_basal_GRFCalculations<mpfr_100,mpc_100,polytype_100,mpfr_15>>(m, "GRFCalculations_100_100_15", py::module_local())
    .def(py::init())
    .def("fill_num_den", &N6Pol_basal_GRFCalculations<mpfr_100,mpc_100,polytype_100,mpfr_15>::fill_num_den)
    .def("fill_rhos", &N6Pol_basal_GRFCalculations<mpfr_100,mpc_100,polytype_100,mpfr_15>::fill_rhos)
    .def("interfaceGRF", &N6Pol_basal_GRFCalculations<mpfr_100,mpc_100,polytype_100,mpfr_15>::interfaceGRF)
    .def("getrhos", &N6Pol_basal_GRFCalculations<mpfr_100,mpc_100,polytype_100,mpfr_15>::getrhos)
    .def("interfaceps", &N6Pol_basal_GRFCalculations<mpfr_100,mpc_100,polytype_100,mpfr_15>::interfaceps,py::arg("verbose")=false, py::arg("thresholdimag")=1e-15,py::arg("minx0")=false,py::arg("maxx1")=false,py::arg("writex05coeffs")=false, py::arg("absder")=false, py::arg("normalisefirst")=true, py::arg("fnamecoeffs")="coefficients.txt")
    .def("interface_return_num_den", &N6Pol_basal_GRFCalculations<mpfr_100,mpc_100,polytype_100,mpfr_15>::interface_return_num_den)
    .def("interfacemonotonic", &N6Pol_basal_GRFCalculations<mpfr_100,mpc_100,polytype_100,mpfr_15>::interfacemonotonic, py::arg("thresholdimag")=1e-15)
    .def("print_num_den", &N6Pol_basal_GRFCalculations<mpfr_100,mpc_100,polytype_100,mpfr_15>::print_num_den);

}
