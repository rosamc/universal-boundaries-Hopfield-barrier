#include "commonincludes.hpp"
template <typename T>
void N6MWC_x(py::array_t<double> parsar, vector<T> &num, vector<T> &den, py::array_t<double>othervars){

    auto parsarbuf=parsar.request();
    double *pars=(double *) parsarbuf.ptr;
    T K1=pars[0];
    T K2=pars[1];
    T L=pars[2];
    //L*K2*x*(K2*x+1)^5+K1*x*(K1*x+1)^5. Expand using mathematica: CForm[CoefficientList[Expand[a], x]]
    num={0,K1 + K2*L,5*pow(K1,2) + 5*pow(K2,2)*L,10*pow(K1,3) + 10*pow(K2,3)*L,10*pow(K1,4) + 10*pow(K2,4)*L,5*pow(K1,5) + 5*pow(K2,5)*L,pow(K1,6) + pow(K2,6)*L};
    den={1 + L,6*K1 + 6*K2*L,15*pow(K1,2) + 15*pow(K2,2)*L,20*pow(K1,3) + 20*pow(K2,3)*L,15*pow(K1,4) + 15*pow(K2,4)*L,6*pow(K1,5) + 6*pow(K2,5)*L,pow(K1,6) + pow(K2,6)*L};

}

template <typename T>
void rhos_N6MWC_x(py::array_t<double> parsar, vector<T> &rhos, py::array_t<double>othervars, double valGRF){

    rhos={0};
}

template <typename T, typename Tpolyc, typename polytype, typename thresholdtype>
class N6MWC_GRFCalculations: public GRFCalculations <T, Tpolyc, polytype, thresholdtype>{

    public:

    void fill_num_den(py::array_t<double> parsar, py::array_t<double>othervars){
            
        N6MWC_x<T>(parsar, this->num,this->den,othervars);
    }

    void fill_rhos(py::array_t<double> parsar, py::array_t<double>othervars, double xval){

        rhos_N6MWC_x<T>(parsar, this->rhos,othervars, xval);
    }
    
};
typedef number<mpc_complex_backend<50> > mpc_50;
typedef Polynomial<50> polytype_50;
typedef number<mpfr_float_backend<15> > mpfr_15;
typedef number<mpfr_float_backend<50> > mpfr_50;
typedef number<mpfr_float_backend<100> > mpfr_100;
typedef number<mpc_complex_backend<100> > mpc_100;
typedef Polynomial<100> polytype_100;


PYBIND11_MODULE(N6MWC, m) {
    py::class_<N6MWC_GRFCalculations<long double,mpc_50,polytype_50,mpfr_15>>(m, "GRFCalculations_ld_50_15", py::module_local())
    .def(py::init())
    .def("fill_num_den", &N6MWC_GRFCalculations<long double,mpc_50,polytype_50,mpfr_15>::fill_num_den)
    .def("fill_rhos", &N6MWC_GRFCalculations<long double,mpc_50,polytype_50,mpfr_15>::fill_rhos)
    .def("interfaceGRF", &N6MWC_GRFCalculations<long double,mpc_50,polytype_50,mpfr_15>::interfaceGRF)
    .def("getrhos", &N6MWC_GRFCalculations<long double,mpc_50,polytype_50,mpfr_15>::getrhos)
    .def("interfaceps", &N6MWC_GRFCalculations<long double,mpc_50,polytype_50,mpfr_15>::interfaceps,py::arg("verbose")=false, py::arg("thresholdimag")=1e-15,py::arg("minx0")=false,py::arg("maxx1")=false,py::arg("writex05coeffs")=false, py::arg("absder")=false, py::arg("normalisefirst")=true, py::arg("fnamecoeffs")="coefficients.txt")
    .def("interface_return_num_den", &N6MWC_GRFCalculations<long double,mpc_50,polytype_50,mpfr_15>::interface_return_num_den)
    .def("interfacemonotonic", &N6MWC_GRFCalculations<long double,mpc_50,polytype_50,mpfr_15>::interfacemonotonic, py::arg("thresholdimag")=1e-15)
    .def("print_num_den", &N6MWC_GRFCalculations<long double,mpc_50,polytype_50,mpfr_15>::print_num_den);

    py::class_<N6MWC_GRFCalculations<mpfr_50,mpc_50,polytype_50,mpfr_15>>(m, "GRFCalculations_50_50_15", py::module_local())
    .def(py::init())
    .def("fill_num_den", &N6MWC_GRFCalculations<mpfr_50,mpc_50,polytype_50,mpfr_15>::fill_num_den)
    .def("fill_rhos", &N6MWC_GRFCalculations<mpfr_50,mpc_50,polytype_50,mpfr_15>::fill_rhos)
    .def("interfaceGRF", &N6MWC_GRFCalculations<mpfr_50,mpc_50,polytype_50,mpfr_15>::interfaceGRF)
    .def("getrhos", &N6MWC_GRFCalculations<mpfr_50,mpc_50,polytype_50,mpfr_15>::getrhos)
    .def("interfaceps", &N6MWC_GRFCalculations<mpfr_50,mpc_50,polytype_50,mpfr_15>::interfaceps,py::arg("verbose")=false, py::arg("thresholdimag")=1e-15,py::arg("minx0")=false,py::arg("maxx1")=false,py::arg("writex05coeffs")=false, py::arg("absder")=false, py::arg("normalisefirst")=true, py::arg("fnamecoeffs")="coefficients.txt")
    .def("interface_return_num_den", &N6MWC_GRFCalculations<mpfr_50,mpc_50,polytype_50,mpfr_15>::interface_return_num_den)
    .def("interfacemonotonic", &N6MWC_GRFCalculations<mpfr_50,mpc_50,polytype_50,mpfr_15>::interfacemonotonic, py::arg("thresholdimag")=1e-15)
    .def("print_num_den", &N6MWC_GRFCalculations<mpfr_50,mpc_50,polytype_50,mpfr_15>::print_num_den);

    py::class_<N6MWC_GRFCalculations<mpfr_100,mpc_100,polytype_100,mpfr_15>>(m, "GRFCalculations_100_100_15", py::module_local())
    .def(py::init())
    .def("fill_num_den", &N6MWC_GRFCalculations<mpfr_100,mpc_100,polytype_100,mpfr_15>::fill_num_den)
    .def("fill_rhos", &N6MWC_GRFCalculations<mpfr_100,mpc_100,polytype_100,mpfr_15>::fill_rhos)
    .def("interfaceGRF", &N6MWC_GRFCalculations<mpfr_100,mpc_100,polytype_100,mpfr_15>::interfaceGRF)
    .def("getrhos", &N6MWC_GRFCalculations<mpfr_100,mpc_100,polytype_100,mpfr_15>::getrhos)
    .def("interfaceps", &N6MWC_GRFCalculations<mpfr_100,mpc_100,polytype_100,mpfr_15>::interfaceps,py::arg("verbose")=false, py::arg("thresholdimag")=1e-15,py::arg("minx0")=false,py::arg("maxx1")=false,py::arg("writex05coeffs")=false, py::arg("absder")=false, py::arg("normalisefirst")=true, py::arg("fnamecoeffs")="coefficients.txt")
    .def("interface_return_num_den", &N6MWC_GRFCalculations<mpfr_100,mpc_100,polytype_100,mpfr_15>::interface_return_num_den)
    .def("interfacemonotonic", &N6MWC_GRFCalculations<mpfr_100,mpc_100,polytype_100,mpfr_15>::interfacemonotonic, py::arg("thresholdimag")=1e-15)
    .def("print_num_den", &N6MWC_GRFCalculations<mpfr_100,mpc_100,polytype_100,mpfr_15>::print_num_den);

}
