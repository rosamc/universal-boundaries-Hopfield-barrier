#include "commonincludes.hpp"
template <typename T>
void N6av_x(py::array_t<double> parsar, vector<T> &num, vector<T> &den, py::array_t<double>othervars){

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

    auto varsarbuf=othervars.request();
    double *varsar=(double *) varsarbuf.ptr;
    vector<T> coeffs_1={1};
    vector<T> coeffs_2={0, K1};
    vector<T> coeffs_3={0, K2};
    vector<T> coeffs_4={0, K3};
    vector<T> coeffs_5={0, K4};
    vector<T> coeffs_6={0, K5};
    vector<T> coeffs_7={0, K6};
    vector<T> coeffs_8={0, 0, K1*K2*w12};
    vector<T> coeffs_9={0, 0, K1*K3*w13};
    vector<T> coeffs_10={0, 0, K1*K4*w14};
    vector<T> coeffs_11={0, 0, K1*K5*w15};
    vector<T> coeffs_12={0, 0, K1*K6*w16};
    vector<T> coeffs_13={0, 0, K2*K3*w23};
    vector<T> coeffs_14={0, 0, K2*K4*w24};
    vector<T> coeffs_15={0, 0, K2*K5*w25};
    vector<T> coeffs_16={0, 0, K2*K6*w26};
    vector<T> coeffs_17={0, 0, K3*K4*w34};
    vector<T> coeffs_18={0, 0, K3*K5*w35};
    vector<T> coeffs_19={0, 0, K3*K6*w36};
    vector<T> coeffs_20={0, 0, K4*K5*w45};
    vector<T> coeffs_21={0, 0, K4*K6*w46};
    vector<T> coeffs_22={0, 0, K5*K6*w56};
    vector<T> coeffs_23={0, 0, 0, K1*K2*K3*w123*w23};
    vector<T> coeffs_24={0, 0, 0, K1*K2*K4*w124*w24};
    vector<T> coeffs_25={0, 0, 0, K1*K2*K5*w125*w25};
    vector<T> coeffs_26={0, 0, 0, K1*K2*K6*w126*w26};
    vector<T> coeffs_27={0, 0, 0, K1*K3*K4*w134*w34};
    vector<T> coeffs_28={0, 0, 0, K1*K3*K5*w135*w35};
    vector<T> coeffs_29={0, 0, 0, K1*K3*K6*w136*w36};
    vector<T> coeffs_30={0, 0, 0, K1*K4*K5*w145*w45};
    vector<T> coeffs_31={0, 0, 0, K1*K4*K6*w146*w46};
    vector<T> coeffs_32={0, 0, 0, K1*K5*K6*w156*w56};
    vector<T> coeffs_33={0, 0, 0, K2*K3*K4*w234*w34};
    vector<T> coeffs_34={0, 0, 0, K2*K3*K5*w235*w35};
    vector<T> coeffs_35={0, 0, 0, K2*K3*K6*w236*w36};
    vector<T> coeffs_36={0, 0, 0, K2*K4*K5*w245*w45};
    vector<T> coeffs_37={0, 0, 0, K2*K4*K6*w246*w46};
    vector<T> coeffs_38={0, 0, 0, K2*K5*K6*w256*w56};
    vector<T> coeffs_39={0, 0, 0, K3*K4*K5*w345*w45};
    vector<T> coeffs_40={0, 0, 0, K3*K4*K6*w346*w46};
    vector<T> coeffs_41={0, 0, 0, K3*K5*K6*w356*w56};
    vector<T> coeffs_42={0, 0, 0, K4*K5*K6*w456*w56};
    vector<T> coeffs_43={0, 0, 0, 0, K1*K2*K3*K4*w1234*w234*w34};
    vector<T> coeffs_44={0, 0, 0, 0, K1*K2*K3*K5*w1235*w235*w35};
    vector<T> coeffs_45={0, 0, 0, 0, K1*K2*K3*K6*w1236*w236*w36};
    vector<T> coeffs_46={0, 0, 0, 0, K1*K2*K4*K5*w1245*w245*w45};
    vector<T> coeffs_47={0, 0, 0, 0, K1*K2*K4*K6*w1246*w246*w46};
    vector<T> coeffs_48={0, 0, 0, 0, K1*K2*K5*K6*w1256*w256*w56};
    vector<T> coeffs_49={0, 0, 0, 0, K1*K3*K4*K5*w1345*w345*w45};
    vector<T> coeffs_50={0, 0, 0, 0, K1*K3*K4*K6*w1346*w346*w46};
    vector<T> coeffs_51={0, 0, 0, 0, K1*K3*K5*K6*w1356*w356*w56};
    vector<T> coeffs_52={0, 0, 0, 0, K1*K4*K5*K6*w1456*w456*w56};
    vector<T> coeffs_53={0, 0, 0, 0, K2*K3*K4*K5*w2345*w345*w45};
    vector<T> coeffs_54={0, 0, 0, 0, K2*K3*K4*K6*w2346*w346*w46};
    vector<T> coeffs_55={0, 0, 0, 0, K2*K3*K5*K6*w2356*w356*w56};
    vector<T> coeffs_56={0, 0, 0, 0, K2*K4*K5*K6*w2456*w456*w56};
    vector<T> coeffs_57={0, 0, 0, 0, K3*K4*K5*K6*w3456*w456*w56};
    vector<T> coeffs_58={0, 0, 0, 0, 0, K1*K2*K3*K4*K5*w12345*w2345*w345*w45};
    vector<T> coeffs_59={0, 0, 0, 0, 0, K1*K2*K3*K4*K6*w12346*w2346*w346*w46};
    vector<T> coeffs_60={0, 0, 0, 0, 0, K1*K2*K3*K5*K6*w12356*w2356*w356*w56};
    vector<T> coeffs_61={0, 0, 0, 0, 0, K1*K2*K4*K5*K6*w12456*w2456*w456*w56};
    vector<T> coeffs_62={0, 0, 0, 0, 0, K1*K3*K4*K5*K6*w13456*w3456*w456*w56};
    vector<T> coeffs_63={0, 0, 0, 0, 0, K2*K3*K4*K5*K6*w23456*w3456*w456*w56};
    vector<T> coeffs_64={0, 0, 0, 0, 0, 0, K1*K2*K3*K4*K5*K6*w123456*w23456*w3456*w456*w56};
    T numdeg0=0;
    T numdeg1=(1.0/6)*coeffs_2[1]+(1.0/6)*coeffs_3[1]+(1.0/6)*coeffs_4[1]+(1.0/6)*coeffs_5[1]+(1.0/6)*coeffs_6[1]+(1.0/6)*coeffs_7[1];
    T numdeg2=(2.0/6)*coeffs_8[2]+(2.0/6)*coeffs_9[2]+(2.0/6)*coeffs_10[2]+(2.0/6)*coeffs_11[2]+(2.0/6)*coeffs_12[2]+(2.0/6)*coeffs_13[2]+(2.0/6)*coeffs_14[2]+(2.0/6)*coeffs_15[2]+(2.0/6)*coeffs_16[2]+(2.0/6)*coeffs_17[2]+(2.0/6)*coeffs_18[2]+(2.0/6)*coeffs_19[2]+(2.0/6)*coeffs_20[2]+(2.0/6)*coeffs_21[2]+(2.0/6)*coeffs_22[2];
    T numdeg3=(3.0/6)*coeffs_23[3]+(3.0/6)*coeffs_24[3]+(3.0/6)*coeffs_25[3]+(3.0/6)*coeffs_26[3]+(3.0/6)*coeffs_27[3]+(3.0/6)*coeffs_28[3]+(3.0/6)*coeffs_29[3]+(3.0/6)*coeffs_30[3]+(3.0/6)*coeffs_31[3]+(3.0/6)*coeffs_32[3]+(3.0/6)*coeffs_33[3]+(3.0/6)*coeffs_34[3]+(3.0/6)*coeffs_35[3]+(3.0/6)*coeffs_36[3]+(3.0/6)*coeffs_37[3]+(3.0/6)*coeffs_38[3]+(3.0/6)*coeffs_39[3]+(3.0/6)*coeffs_40[3]+(3.0/6)*coeffs_41[3]+(3.0/6)*coeffs_42[3];
    T numdeg4=(4.0/6)*coeffs_43[4]+(4.0/6)*coeffs_44[4]+(4.0/6)*coeffs_45[4]+(4.0/6)*coeffs_46[4]+(4.0/6)*coeffs_47[4]+(4.0/6)*coeffs_48[4]+(4.0/6)*coeffs_49[4]+(4.0/6)*coeffs_50[4]+(4.0/6)*coeffs_51[4]+(4.0/6)*coeffs_52[4]+(4.0/6)*coeffs_53[4]+(4.0/6)*coeffs_54[4]+(4.0/6)*coeffs_55[4]+(4.0/6)*coeffs_56[4]+(4.0/6)*coeffs_57[4];
    T numdeg5=(5.0/6)*coeffs_58[5]+(5.0/6)*coeffs_59[5]+(5.0/6)*coeffs_60[5]+(5.0/6)*coeffs_61[5]+(5.0/6)*coeffs_62[5]+(5.0/6)*coeffs_63[5];
    T numdeg6=(6.0/6)*coeffs_64[6];
    T dendeg0=coeffs_1[0];
    T dendeg1=coeffs_2[1]+coeffs_3[1]+coeffs_4[1]+coeffs_5[1]+coeffs_6[1]+coeffs_7[1];
    T dendeg2=coeffs_8[2]+coeffs_9[2]+coeffs_10[2]+coeffs_11[2]+coeffs_12[2]+coeffs_13[2]+coeffs_14[2]+coeffs_15[2]+coeffs_16[2]+coeffs_17[2]+coeffs_18[2]+coeffs_19[2]+coeffs_20[2]+coeffs_21[2]+coeffs_22[2];
    T dendeg3=coeffs_23[3]+coeffs_24[3]+coeffs_25[3]+coeffs_26[3]+coeffs_27[3]+coeffs_28[3]+coeffs_29[3]+coeffs_30[3]+coeffs_31[3]+coeffs_32[3]+coeffs_33[3]+coeffs_34[3]+coeffs_35[3]+coeffs_36[3]+coeffs_37[3]+coeffs_38[3]+coeffs_39[3]+coeffs_40[3]+coeffs_41[3]+coeffs_42[3];
    T dendeg4=coeffs_43[4]+coeffs_44[4]+coeffs_45[4]+coeffs_46[4]+coeffs_47[4]+coeffs_48[4]+coeffs_49[4]+coeffs_50[4]+coeffs_51[4]+coeffs_52[4]+coeffs_53[4]+coeffs_54[4]+coeffs_55[4]+coeffs_56[4]+coeffs_57[4];
    T dendeg5=coeffs_58[5]+coeffs_59[5]+coeffs_60[5]+coeffs_61[5]+coeffs_62[5]+coeffs_63[5];
    T dendeg6=coeffs_64[6];
    num={numdeg0,numdeg1,numdeg2,numdeg3,numdeg4,numdeg5,numdeg6};
    den={dendeg0,dendeg1,dendeg2,dendeg3,dendeg4,dendeg5,dendeg6};
}

template <typename T>
void rhos_N6av_x(py::array_t<double> parsar, vector<T> &rhos, py::array_t<double>othervars, double valGRF){

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
    T rho_1=(1)*pow(valGRF,0);
    T rho_2=(K1)*pow(valGRF,1);
    T rho_3=(K2)*pow(valGRF,1);
    T rho_4=(K3)*pow(valGRF,1);
    T rho_5=(K4)*pow(valGRF,1);
    T rho_6=(K5)*pow(valGRF,1);
    T rho_7=(K6)*pow(valGRF,1);
    T rho_8=(K1*K2*w12)*pow(valGRF,2);
    T rho_9=(K1*K3*w13)*pow(valGRF,2);
    T rho_10=(K1*K4*w14)*pow(valGRF,2);
    T rho_11=(K1*K5*w15)*pow(valGRF,2);
    T rho_12=(K1*K6*w16)*pow(valGRF,2);
    T rho_13=(K2*K3*w23)*pow(valGRF,2);
    T rho_14=(K2*K4*w24)*pow(valGRF,2);
    T rho_15=(K2*K5*w25)*pow(valGRF,2);
    T rho_16=(K2*K6*w26)*pow(valGRF,2);
    T rho_17=(K3*K4*w34)*pow(valGRF,2);
    T rho_18=(K3*K5*w35)*pow(valGRF,2);
    T rho_19=(K3*K6*w36)*pow(valGRF,2);
    T rho_20=(K4*K5*w45)*pow(valGRF,2);
    T rho_21=(K4*K6*w46)*pow(valGRF,2);
    T rho_22=(K5*K6*w56)*pow(valGRF,2);
    T rho_23=(K1*K2*K3*w123*w23)*pow(valGRF,3);
    T rho_24=(K1*K2*K4*w124*w24)*pow(valGRF,3);
    T rho_25=(K1*K2*K5*w125*w25)*pow(valGRF,3);
    T rho_26=(K1*K2*K6*w126*w26)*pow(valGRF,3);
    T rho_27=(K1*K3*K4*w134*w34)*pow(valGRF,3);
    T rho_28=(K1*K3*K5*w135*w35)*pow(valGRF,3);
    T rho_29=(K1*K3*K6*w136*w36)*pow(valGRF,3);
    T rho_30=(K1*K4*K5*w145*w45)*pow(valGRF,3);
    T rho_31=(K1*K4*K6*w146*w46)*pow(valGRF,3);
    T rho_32=(K1*K5*K6*w156*w56)*pow(valGRF,3);
    T rho_33=(K2*K3*K4*w234*w34)*pow(valGRF,3);
    T rho_34=(K2*K3*K5*w235*w35)*pow(valGRF,3);
    T rho_35=(K2*K3*K6*w236*w36)*pow(valGRF,3);
    T rho_36=(K2*K4*K5*w245*w45)*pow(valGRF,3);
    T rho_37=(K2*K4*K6*w246*w46)*pow(valGRF,3);
    T rho_38=(K2*K5*K6*w256*w56)*pow(valGRF,3);
    T rho_39=(K3*K4*K5*w345*w45)*pow(valGRF,3);
    T rho_40=(K3*K4*K6*w346*w46)*pow(valGRF,3);
    T rho_41=(K3*K5*K6*w356*w56)*pow(valGRF,3);
    T rho_42=(K4*K5*K6*w456*w56)*pow(valGRF,3);
    T rho_43=(K1*K2*K3*K4*w1234*w234*w34)*pow(valGRF,4);
    T rho_44=(K1*K2*K3*K5*w1235*w235*w35)*pow(valGRF,4);
    T rho_45=(K1*K2*K3*K6*w1236*w236*w36)*pow(valGRF,4);
    T rho_46=(K1*K2*K4*K5*w1245*w245*w45)*pow(valGRF,4);
    T rho_47=(K1*K2*K4*K6*w1246*w246*w46)*pow(valGRF,4);
    T rho_48=(K1*K2*K5*K6*w1256*w256*w56)*pow(valGRF,4);
    T rho_49=(K1*K3*K4*K5*w1345*w345*w45)*pow(valGRF,4);
    T rho_50=(K1*K3*K4*K6*w1346*w346*w46)*pow(valGRF,4);
    T rho_51=(K1*K3*K5*K6*w1356*w356*w56)*pow(valGRF,4);
    T rho_52=(K1*K4*K5*K6*w1456*w456*w56)*pow(valGRF,4);
    T rho_53=(K2*K3*K4*K5*w2345*w345*w45)*pow(valGRF,4);
    T rho_54=(K2*K3*K4*K6*w2346*w346*w46)*pow(valGRF,4);
    T rho_55=(K2*K3*K5*K6*w2356*w356*w56)*pow(valGRF,4);
    T rho_56=(K2*K4*K5*K6*w2456*w456*w56)*pow(valGRF,4);
    T rho_57=(K3*K4*K5*K6*w3456*w456*w56)*pow(valGRF,4);
    T rho_58=(K1*K2*K3*K4*K5*w12345*w2345*w345*w45)*pow(valGRF,5);
    T rho_59=(K1*K2*K3*K4*K6*w12346*w2346*w346*w46)*pow(valGRF,5);
    T rho_60=(K1*K2*K3*K5*K6*w12356*w2356*w356*w56)*pow(valGRF,5);
    T rho_61=(K1*K2*K4*K5*K6*w12456*w2456*w456*w56)*pow(valGRF,5);
    T rho_62=(K1*K3*K4*K5*K6*w13456*w3456*w456*w56)*pow(valGRF,5);
    T rho_63=(K2*K3*K4*K5*K6*w23456*w3456*w456*w56)*pow(valGRF,5);
    T rho_64=(K1*K2*K3*K4*K5*K6*w123456*w23456*w3456*w456*w56)*pow(valGRF,6);
    rhos={rho_1,rho_2,rho_3,rho_4,rho_5,rho_6,rho_7,rho_8,rho_9,rho_10,rho_11,rho_12,rho_13,rho_14,rho_15,rho_16,rho_17,rho_18,rho_19,rho_20,rho_21,rho_22,rho_23,rho_24,rho_25,rho_26,rho_27,rho_28,rho_29,rho_30,rho_31,rho_32,rho_33,rho_34,rho_35,rho_36,rho_37,rho_38,rho_39,rho_40,rho_41,rho_42,rho_43,rho_44,rho_45,rho_46,rho_47,rho_48,rho_49,rho_50,rho_51,rho_52,rho_53,rho_54,rho_55,rho_56,rho_57,rho_58,rho_59,rho_60,rho_61,rho_62,rho_63,rho_64};
}

template <typename T, typename Tpolyc, typename polytype, typename thresholdtype>
class N6av_GRFCalculations: public GRFCalculations <T, Tpolyc, polytype, thresholdtype>{

    public:

    void fill_num_den(py::array_t<double> parsar, py::array_t<double>othervars){
            
        N6av_x<T>(parsar, this->num,this->den,othervars);
    }

    void fill_rhos(py::array_t<double> parsar, py::array_t<double>othervars, double xval){

        rhos_N6av_x<T>(parsar, this->rhos,othervars, xval);
    }
    
};
typedef number<mpc_complex_backend<50> > mpc_50;
typedef Polynomial<50> polytype_50;
typedef number<mpfr_float_backend<15> > mpfr_15;
typedef number<mpfr_float_backend<50> > mpfr_50;
typedef number<mpfr_float_backend<100> > mpfr_100;
typedef number<mpc_complex_backend<100> > mpc_100;
typedef Polynomial<100> polytype_100;


PYBIND11_MODULE(N6av, m) {
    py::class_<N6av_GRFCalculations<long double,mpc_50,polytype_50,mpfr_15>>(m, "GRFCalculations_ld_50_15", py::module_local())
    .def(py::init())
    .def("fill_num_den", &N6av_GRFCalculations<long double,mpc_50,polytype_50,mpfr_15>::fill_num_den)
    .def("fill_rhos", &N6av_GRFCalculations<long double,mpc_50,polytype_50,mpfr_15>::fill_rhos)
    .def("interfaceGRF", &N6av_GRFCalculations<long double,mpc_50,polytype_50,mpfr_15>::interfaceGRF)
    .def("getrhos", &N6av_GRFCalculations<long double,mpc_50,polytype_50,mpfr_15>::getrhos)
    .def("interfaceps", &N6av_GRFCalculations<long double,mpc_50,polytype_50,mpfr_15>::interfaceps,py::arg("verbose")=false, py::arg("thresholdimag")=1e-15,py::arg("minx0")=false,py::arg("maxx1")=false,py::arg("writex05coeffs")=false, py::arg("absder")=false, py::arg("normalisefirst")=true, py::arg("fnamecoeffs")="coefficients.txt")
    .def("interface_return_num_den", &N6av_GRFCalculations<long double,mpc_50,polytype_50,mpfr_15>::interface_return_num_den)
    .def("interfacemonotonic", &N6av_GRFCalculations<long double,mpc_50,polytype_50,mpfr_15>::interfacemonotonic, py::arg("thresholdimag")=1e-15)
    .def("print_num_den", &N6av_GRFCalculations<long double,mpc_50,polytype_50,mpfr_15>::print_num_den);

    py::class_<N6av_GRFCalculations<mpfr_50,mpc_50,polytype_50,mpfr_15>>(m, "GRFCalculations_50_50_15", py::module_local())
    .def(py::init())
    .def("fill_num_den", &N6av_GRFCalculations<mpfr_50,mpc_50,polytype_50,mpfr_15>::fill_num_den)
    .def("fill_rhos", &N6av_GRFCalculations<mpfr_50,mpc_50,polytype_50,mpfr_15>::fill_rhos)
    .def("interfaceGRF", &N6av_GRFCalculations<mpfr_50,mpc_50,polytype_50,mpfr_15>::interfaceGRF)
    .def("getrhos", &N6av_GRFCalculations<mpfr_50,mpc_50,polytype_50,mpfr_15>::getrhos)
    .def("interfaceps", &N6av_GRFCalculations<mpfr_50,mpc_50,polytype_50,mpfr_15>::interfaceps,py::arg("verbose")=false, py::arg("thresholdimag")=1e-15,py::arg("minx0")=false,py::arg("maxx1")=false,py::arg("writex05coeffs")=false, py::arg("absder")=false, py::arg("normalisefirst")=true, py::arg("fnamecoeffs")="coefficients.txt")
    .def("interface_return_num_den", &N6av_GRFCalculations<mpfr_50,mpc_50,polytype_50,mpfr_15>::interface_return_num_den)
    .def("interfacemonotonic", &N6av_GRFCalculations<mpfr_50,mpc_50,polytype_50,mpfr_15>::interfacemonotonic, py::arg("thresholdimag")=1e-15)
    .def("print_num_den", &N6av_GRFCalculations<mpfr_50,mpc_50,polytype_50,mpfr_15>::print_num_den);

    py::class_<N6av_GRFCalculations<mpfr_100,mpc_100,polytype_100,mpfr_15>>(m, "GRFCalculations_100_100_15", py::module_local())
    .def(py::init())
    .def("fill_num_den", &N6av_GRFCalculations<mpfr_100,mpc_100,polytype_100,mpfr_15>::fill_num_den)
    .def("fill_rhos", &N6av_GRFCalculations<mpfr_100,mpc_100,polytype_100,mpfr_15>::fill_rhos)
    .def("interfaceGRF", &N6av_GRFCalculations<mpfr_100,mpc_100,polytype_100,mpfr_15>::interfaceGRF)
    .def("getrhos", &N6av_GRFCalculations<mpfr_100,mpc_100,polytype_100,mpfr_15>::getrhos)
    .def("interfaceps", &N6av_GRFCalculations<mpfr_100,mpc_100,polytype_100,mpfr_15>::interfaceps,py::arg("verbose")=false, py::arg("thresholdimag")=1e-15,py::arg("minx0")=false,py::arg("maxx1")=false,py::arg("writex05coeffs")=false, py::arg("absder")=false, py::arg("normalisefirst")=true, py::arg("fnamecoeffs")="coefficients.txt")
    .def("interface_return_num_den", &N6av_GRFCalculations<mpfr_100,mpc_100,polytype_100,mpfr_15>::interface_return_num_den)
    .def("interfacemonotonic", &N6av_GRFCalculations<mpfr_100,mpc_100,polytype_100,mpfr_15>::interfacemonotonic, py::arg("thresholdimag")=1e-15)
    .def("print_num_den", &N6av_GRFCalculations<mpfr_100,mpc_100,polytype_100,mpfr_15>::print_num_den);

}
