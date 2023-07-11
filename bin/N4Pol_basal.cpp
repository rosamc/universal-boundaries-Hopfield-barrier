#include "commonincludes.hpp"
template <typename T>
void N4Pol_basal_x(py::array_t<double> parsar, vector<T> &num, vector<T> &den, py::array_t<double>othervars){

    auto parsarbuf=parsar.request();
    double *pars=(double *) parsarbuf.ptr;
    T K1=pars[0];
    T K2=pars[1];
    T K3=pars[2];
    T K4=pars[3];
    T w12=pars[4];
    T w13=pars[5];
    T w14=pars[6];
    T w23=pars[7];
    T w24=pars[8];
    T w34=pars[9];
    T w123=pars[10];
    T w124=pars[11];
    T w134=pars[12];
    T w234=pars[13];
    T w1234=pars[14];
    T wp1=pars[15];
    T wp2=pars[16];
    T wp3=pars[17];
    T wp4=pars[18];
    T wp12=pars[19];
    T wp13=pars[20];
    T wp14=pars[21];
    T wp23=pars[22];
    T wp24=pars[23];
    T wp34=pars[24];
    T wp123=pars[25];
    T wp124=pars[26];
    T wp134=pars[27];
    T wp234=pars[28];
    T wp1234=pars[29];

    auto varsarbuf=othervars.request();
    double *varsar=(double *) varsarbuf.ptr;
    T P=varsar[0];
    vector<T> coeffs_1={1};
    vector<T> coeffs_2={0, K1};
    vector<T> coeffs_3={0, K2};
    vector<T> coeffs_4={0, K3};
    vector<T> coeffs_5={0, K4};
    vector<T> coeffs_6={P};
    vector<T> coeffs_7={0, 0, K1*K2*w12};
    vector<T> coeffs_8={0, 0, K1*K3*w13};
    vector<T> coeffs_9={0, 0, K1*K4*w14};
    vector<T> coeffs_10={0, K1*P*wp1};
    vector<T> coeffs_11={0, 0, K2*K3*w23};
    vector<T> coeffs_12={0, 0, K2*K4*w24};
    vector<T> coeffs_13={0, K2*P*wp2};
    vector<T> coeffs_14={0, 0, K3*K4*w34};
    vector<T> coeffs_15={0, K3*P*wp3};
    vector<T> coeffs_16={0, K4*P*wp4};
    vector<T> coeffs_17={0, 0, 0, K1*K2*K3*w123*w23};
    vector<T> coeffs_18={0, 0, 0, K1*K2*K4*w124*w24};
    vector<T> coeffs_19={0, 0, K1*K2*P*w12*wp12};
    vector<T> coeffs_20={0, 0, 0, K1*K3*K4*w134*w34};
    vector<T> coeffs_21={0, 0, K1*K3*P*w13*wp13};
    vector<T> coeffs_22={0, 0, K1*K4*P*w14*wp14};
    vector<T> coeffs_23={0, 0, 0, K2*K3*K4*w234*w34};
    vector<T> coeffs_24={0, 0, K2*K3*P*w23*wp23};
    vector<T> coeffs_25={0, 0, K2*K4*P*w24*wp24};
    vector<T> coeffs_26={0, 0, K3*K4*P*w34*wp34};
    vector<T> coeffs_27={0, 0, 0, 0, K1*K2*K3*K4*w1234*w234*w34};
    vector<T> coeffs_28={0, 0, 0, K1*K2*K3*P*w123*w23*wp123};
    vector<T> coeffs_29={0, 0, 0, K1*K2*K4*P*w124*w24*wp124};
    vector<T> coeffs_30={0, 0, 0, K1*K3*K4*P*w134*w34*wp134};
    vector<T> coeffs_31={0, 0, 0, K2*K3*K4*P*w234*w34*wp234};
    vector<T> coeffs_32={0, 0, 0, 0, K1*K2*K3*K4*P*w1234*w234*w34*wp1234};
    T numdeg0=1*coeffs_6[0];
    T numdeg1=1*coeffs_10[1]+1*coeffs_13[1]+1*coeffs_15[1]+1*coeffs_16[1];
    T numdeg2=1*coeffs_19[2]+1*coeffs_21[2]+1*coeffs_22[2]+1*coeffs_24[2]+1*coeffs_25[2]+1*coeffs_26[2];
    T numdeg3=1*coeffs_28[3]+1*coeffs_29[3]+1*coeffs_30[3]+1*coeffs_31[3];
    T numdeg4=1*coeffs_32[4];
    T dendeg0=coeffs_1[0]+coeffs_6[0];
    T dendeg1=coeffs_2[1]+coeffs_3[1]+coeffs_4[1]+coeffs_5[1]+coeffs_10[1]+coeffs_13[1]+coeffs_15[1]+coeffs_16[1];
    T dendeg2=coeffs_7[2]+coeffs_8[2]+coeffs_9[2]+coeffs_11[2]+coeffs_12[2]+coeffs_14[2]+coeffs_19[2]+coeffs_21[2]+coeffs_22[2]+coeffs_24[2]+coeffs_25[2]+coeffs_26[2];
    T dendeg3=coeffs_17[3]+coeffs_18[3]+coeffs_20[3]+coeffs_23[3]+coeffs_28[3]+coeffs_29[3]+coeffs_30[3]+coeffs_31[3];
    T dendeg4=coeffs_27[4]+coeffs_32[4];
    num={numdeg0,numdeg1,numdeg2,numdeg3,numdeg4};
    den={dendeg0,dendeg1,dendeg2,dendeg3,dendeg4};
}

template <typename T>
void rhos_N4Pol_basal_x(py::array_t<double> parsar, vector<T> &rhos, py::array_t<double>othervars, double valGRF){

    auto parsarbuf=parsar.request();
    double *pars=(double *) parsarbuf.ptr;
    T K1=pars[0];
    T K2=pars[1];
    T K3=pars[2];
    T K4=pars[3];
    T w12=pars[4];
    T w13=pars[5];
    T w14=pars[6];
    T w23=pars[7];
    T w24=pars[8];
    T w34=pars[9];
    T w123=pars[10];
    T w124=pars[11];
    T w134=pars[12];
    T w234=pars[13];
    T w1234=pars[14];
    T wp1=pars[15];
    T wp2=pars[16];
    T wp3=pars[17];
    T wp4=pars[18];
    T wp12=pars[19];
    T wp13=pars[20];
    T wp14=pars[21];
    T wp23=pars[22];
    T wp24=pars[23];
    T wp34=pars[24];
    T wp123=pars[25];
    T wp124=pars[26];
    T wp134=pars[27];
    T wp234=pars[28];
    T wp1234=pars[29];

    auto varsarbuf=othervars.request();
    double *varsar=(double *) varsarbuf.ptr;
    T P=varsar[0];
    T rho_1=(1)*pow(valGRF,0);
    T rho_2=(K1)*pow(valGRF,1);
    T rho_3=(K2)*pow(valGRF,1);
    T rho_4=(K3)*pow(valGRF,1);
    T rho_5=(K4)*pow(valGRF,1);
    T rho_6=(P)*pow(valGRF,0);
    T rho_7=(K1*K2*w12)*pow(valGRF,2);
    T rho_8=(K1*K3*w13)*pow(valGRF,2);
    T rho_9=(K1*K4*w14)*pow(valGRF,2);
    T rho_10=(K1*P*wp1)*pow(valGRF,1);
    T rho_11=(K2*K3*w23)*pow(valGRF,2);
    T rho_12=(K2*K4*w24)*pow(valGRF,2);
    T rho_13=(K2*P*wp2)*pow(valGRF,1);
    T rho_14=(K3*K4*w34)*pow(valGRF,2);
    T rho_15=(K3*P*wp3)*pow(valGRF,1);
    T rho_16=(K4*P*wp4)*pow(valGRF,1);
    T rho_17=(K1*K2*K3*w123*w23)*pow(valGRF,3);
    T rho_18=(K1*K2*K4*w124*w24)*pow(valGRF,3);
    T rho_19=(K1*K2*P*w12*wp12)*pow(valGRF,2);
    T rho_20=(K1*K3*K4*w134*w34)*pow(valGRF,3);
    T rho_21=(K1*K3*P*w13*wp13)*pow(valGRF,2);
    T rho_22=(K1*K4*P*w14*wp14)*pow(valGRF,2);
    T rho_23=(K2*K3*K4*w234*w34)*pow(valGRF,3);
    T rho_24=(K2*K3*P*w23*wp23)*pow(valGRF,2);
    T rho_25=(K2*K4*P*w24*wp24)*pow(valGRF,2);
    T rho_26=(K3*K4*P*w34*wp34)*pow(valGRF,2);
    T rho_27=(K1*K2*K3*K4*w1234*w234*w34)*pow(valGRF,4);
    T rho_28=(K1*K2*K3*P*w123*w23*wp123)*pow(valGRF,3);
    T rho_29=(K1*K2*K4*P*w124*w24*wp124)*pow(valGRF,3);
    T rho_30=(K1*K3*K4*P*w134*w34*wp134)*pow(valGRF,3);
    T rho_31=(K2*K3*K4*P*w234*w34*wp234)*pow(valGRF,3);
    T rho_32=(K1*K2*K3*K4*P*w1234*w234*w34*wp1234)*pow(valGRF,4);
    rhos={rho_1,rho_2,rho_3,rho_4,rho_5,rho_6,rho_7,rho_8,rho_9,rho_10,rho_11,rho_12,rho_13,rho_14,rho_15,rho_16,rho_17,rho_18,rho_19,rho_20,rho_21,rho_22,rho_23,rho_24,rho_25,rho_26,rho_27,rho_28,rho_29,rho_30,rho_31,rho_32};
}

template <typename T, typename Tpolyc, typename polytype, typename thresholdtype>
class N4Pol_basal_GRFCalculations: public GRFCalculations <T, Tpolyc, polytype, thresholdtype>{

    public:

    void fill_num_den(py::array_t<double> parsar, py::array_t<double>othervars){
            
        N4Pol_basal_x<T>(parsar, this->num,this->den,othervars);
    }

    void fill_rhos(py::array_t<double> parsar, py::array_t<double>othervars, double xval){

        rhos_N4Pol_basal_x<T>(parsar, this->rhos,othervars, xval);
    }
    
};
typedef number<mpc_complex_backend<50> > mpc_50;
typedef Polynomial<50> polytype_50;
typedef number<mpfr_float_backend<15> > mpfr_15;
typedef number<mpfr_float_backend<50> > mpfr_50;
typedef number<mpfr_float_backend<100> > mpfr_100;
typedef number<mpc_complex_backend<100> > mpc_100;
typedef Polynomial<100> polytype_100;


PYBIND11_MODULE(N4Pol_basal, m) {
    py::class_<N4Pol_basal_GRFCalculations<long double,mpc_50,polytype_50,mpfr_15>>(m, "GRFCalculations_ld_50_15", py::module_local())
    .def(py::init())
    .def("fill_num_den", &N4Pol_basal_GRFCalculations<long double,mpc_50,polytype_50,mpfr_15>::fill_num_den)
    .def("fill_rhos", &N4Pol_basal_GRFCalculations<long double,mpc_50,polytype_50,mpfr_15>::fill_rhos)
    .def("interfaceGRF", &N4Pol_basal_GRFCalculations<long double,mpc_50,polytype_50,mpfr_15>::interfaceGRF)
    .def("getrhos", &N4Pol_basal_GRFCalculations<long double,mpc_50,polytype_50,mpfr_15>::getrhos)
    .def("interfaceps", &N4Pol_basal_GRFCalculations<long double,mpc_50,polytype_50,mpfr_15>::interfaceps,py::arg("verbose")=false, py::arg("thresholdimag")=1e-15,py::arg("minx0")=false,py::arg("maxx1")=false,py::arg("writex05coeffs")=false, py::arg("absder")=false, py::arg("normalisefirst")=true, py::arg("fnamecoeffs")="coefficients.txt")
    .def("interface_return_num_den", &N4Pol_basal_GRFCalculations<long double,mpc_50,polytype_50,mpfr_15>::interface_return_num_den)
    .def("interfacemonotonic", &N4Pol_basal_GRFCalculations<long double,mpc_50,polytype_50,mpfr_15>::interfacemonotonic, py::arg("thresholdimag")=1e-15)
    .def("print_num_den", &N4Pol_basal_GRFCalculations<long double,mpc_50,polytype_50,mpfr_15>::print_num_den);

    py::class_<N4Pol_basal_GRFCalculations<mpfr_50,mpc_50,polytype_50,mpfr_15>>(m, "GRFCalculations_50_50_15", py::module_local())
    .def(py::init())
    .def("fill_num_den", &N4Pol_basal_GRFCalculations<mpfr_50,mpc_50,polytype_50,mpfr_15>::fill_num_den)
    .def("fill_rhos", &N4Pol_basal_GRFCalculations<mpfr_50,mpc_50,polytype_50,mpfr_15>::fill_rhos)
    .def("interfaceGRF", &N4Pol_basal_GRFCalculations<mpfr_50,mpc_50,polytype_50,mpfr_15>::interfaceGRF)
    .def("getrhos", &N4Pol_basal_GRFCalculations<mpfr_50,mpc_50,polytype_50,mpfr_15>::getrhos)
    .def("interfaceps", &N4Pol_basal_GRFCalculations<mpfr_50,mpc_50,polytype_50,mpfr_15>::interfaceps,py::arg("verbose")=false, py::arg("thresholdimag")=1e-15,py::arg("minx0")=false,py::arg("maxx1")=false,py::arg("writex05coeffs")=false, py::arg("absder")=false, py::arg("normalisefirst")=true, py::arg("fnamecoeffs")="coefficients.txt")
    .def("interface_return_num_den", &N4Pol_basal_GRFCalculations<mpfr_50,mpc_50,polytype_50,mpfr_15>::interface_return_num_den)
    .def("interfacemonotonic", &N4Pol_basal_GRFCalculations<mpfr_50,mpc_50,polytype_50,mpfr_15>::interfacemonotonic, py::arg("thresholdimag")=1e-15)
    .def("print_num_den", &N4Pol_basal_GRFCalculations<mpfr_50,mpc_50,polytype_50,mpfr_15>::print_num_den);

    py::class_<N4Pol_basal_GRFCalculations<mpfr_100,mpc_100,polytype_100,mpfr_15>>(m, "GRFCalculations_100_100_15", py::module_local())
    .def(py::init())
    .def("fill_num_den", &N4Pol_basal_GRFCalculations<mpfr_100,mpc_100,polytype_100,mpfr_15>::fill_num_den)
    .def("fill_rhos", &N4Pol_basal_GRFCalculations<mpfr_100,mpc_100,polytype_100,mpfr_15>::fill_rhos)
    .def("interfaceGRF", &N4Pol_basal_GRFCalculations<mpfr_100,mpc_100,polytype_100,mpfr_15>::interfaceGRF)
    .def("getrhos", &N4Pol_basal_GRFCalculations<mpfr_100,mpc_100,polytype_100,mpfr_15>::getrhos)
    .def("interfaceps", &N4Pol_basal_GRFCalculations<mpfr_100,mpc_100,polytype_100,mpfr_15>::interfaceps,py::arg("verbose")=false, py::arg("thresholdimag")=1e-15,py::arg("minx0")=false,py::arg("maxx1")=false,py::arg("writex05coeffs")=false, py::arg("absder")=false, py::arg("normalisefirst")=true, py::arg("fnamecoeffs")="coefficients.txt")
    .def("interface_return_num_den", &N4Pol_basal_GRFCalculations<mpfr_100,mpc_100,polytype_100,mpfr_15>::interface_return_num_den)
    .def("interfacemonotonic", &N4Pol_basal_GRFCalculations<mpfr_100,mpc_100,polytype_100,mpfr_15>::interfacemonotonic, py::arg("thresholdimag")=1e-15)
    .def("print_num_den", &N4Pol_basal_GRFCalculations<mpfr_100,mpc_100,polytype_100,mpfr_15>::print_num_den);

}
