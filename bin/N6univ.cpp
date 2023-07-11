#include "commonincludes.hpp"
template <typename T>
void N6univ_x(py::array_t<double> parsar, vector<T> &num, vector<T> &den, py::array_t<double>othervars){

    auto parsarbuf=parsar.request();
    double *pars=(double *) parsarbuf.ptr;
    T ad=pars[0];
    T an=pars[1];
    T bd=pars[2];
    T bn=pars[3];
    T cd=pars[4];
    T cn=pars[5];
    T dd=pars[6];
    T dn=pars[7];
    T ed=pars[8];
    T en=pars[9];
    T fd=pars[10];
    T fn=pars[11];
    T gd=pars[12];
    T gn=pars[13];
    num={an,bn,cn,dn,en,fn,gn};
    den={ad,bd,cd,dd,ed,fd,gd};
}

template <typename T>
void rhos_N6univ_x(py::array_t<double> parsar, vector<T> &rhos, py::array_t<double>othervars, double valGRF){

    rhos={0};
}

template <typename T, typename Tpolyc, typename polytype, typename thresholdtype>
class N6univ_GRFCalculations: public GRFCalculations <T, Tpolyc, polytype, thresholdtype>{

    public:

    void fill_num_den(py::array_t<double> parsar, py::array_t<double>othervars){
            
        N6univ_x<T>(parsar, this->num,this->den,othervars);
    }

    void fill_rhos(py::array_t<double> parsar, py::array_t<double>othervars, double xval){

        rhos_N6univ_x<T>(parsar, this->rhos,othervars, xval);
    }
    
};
typedef number<mpc_complex_backend<50> > mpc_50;
typedef Polynomial<50> polytype_50;
typedef number<mpfr_float_backend<15> > mpfr_15;
typedef number<mpfr_float_backend<50> > mpfr_50;
typedef number<mpfr_float_backend<100> > mpfr_100;
typedef number<mpc_complex_backend<100> > mpc_100;
typedef Polynomial<100> polytype_100;


PYBIND11_MODULE(N6univ, m) {
    py::class_<N6univ_GRFCalculations<long double,mpc_50,polytype_50,mpfr_15>>(m, "GRFCalculations_ld_50_15", py::module_local())
    .def(py::init())
    .def("fill_num_den", &N6univ_GRFCalculations<long double,mpc_50,polytype_50,mpfr_15>::fill_num_den)
    .def("fill_rhos", &N6univ_GRFCalculations<long double,mpc_50,polytype_50,mpfr_15>::fill_rhos)
    .def("interfaceGRF", &N6univ_GRFCalculations<long double,mpc_50,polytype_50,mpfr_15>::interfaceGRF)
    .def("getrhos", &N6univ_GRFCalculations<long double,mpc_50,polytype_50,mpfr_15>::getrhos)
    .def("interfaceps", &N6univ_GRFCalculations<long double,mpc_50,polytype_50,mpfr_15>::interfaceps,py::arg("verbose")=false, py::arg("thresholdimag")=1e-15,py::arg("minx0")=false,py::arg("maxx1")=false,py::arg("writex05coeffs")=false, py::arg("absder")=false, py::arg("normalisefirst")=true, py::arg("fnamecoeffs")="coefficients.txt")
    .def("interface_return_num_den", &N6univ_GRFCalculations<long double,mpc_50,polytype_50,mpfr_15>::interface_return_num_den)
    .def("interfacemonotonic", &N6univ_GRFCalculations<long double,mpc_50,polytype_50,mpfr_15>::interfacemonotonic, py::arg("thresholdimag")=1e-15)
    .def("print_num_den", &N6univ_GRFCalculations<long double,mpc_50,polytype_50,mpfr_15>::print_num_den);

    py::class_<N6univ_GRFCalculations<mpfr_50,mpc_50,polytype_50,mpfr_15>>(m, "GRFCalculations_50_50_15", py::module_local())
    .def(py::init())
    .def("fill_num_den", &N6univ_GRFCalculations<mpfr_50,mpc_50,polytype_50,mpfr_15>::fill_num_den)
    .def("fill_rhos", &N6univ_GRFCalculations<mpfr_50,mpc_50,polytype_50,mpfr_15>::fill_rhos)
    .def("interfaceGRF", &N6univ_GRFCalculations<mpfr_50,mpc_50,polytype_50,mpfr_15>::interfaceGRF)
    .def("getrhos", &N6univ_GRFCalculations<mpfr_50,mpc_50,polytype_50,mpfr_15>::getrhos)
    .def("interfaceps", &N6univ_GRFCalculations<mpfr_50,mpc_50,polytype_50,mpfr_15>::interfaceps,py::arg("verbose")=false, py::arg("thresholdimag")=1e-15,py::arg("minx0")=false,py::arg("maxx1")=false,py::arg("writex05coeffs")=false, py::arg("absder")=false, py::arg("normalisefirst")=true, py::arg("fnamecoeffs")="coefficients.txt")
    .def("interface_return_num_den", &N6univ_GRFCalculations<mpfr_50,mpc_50,polytype_50,mpfr_15>::interface_return_num_den)
    .def("interfacemonotonic", &N6univ_GRFCalculations<mpfr_50,mpc_50,polytype_50,mpfr_15>::interfacemonotonic, py::arg("thresholdimag")=1e-15)
    .def("print_num_den", &N6univ_GRFCalculations<mpfr_50,mpc_50,polytype_50,mpfr_15>::print_num_den);

    py::class_<N6univ_GRFCalculations<mpfr_100,mpc_100,polytype_100,mpfr_15>>(m, "GRFCalculations_100_100_15", py::module_local())
    .def(py::init())
    .def("fill_num_den", &N6univ_GRFCalculations<mpfr_100,mpc_100,polytype_100,mpfr_15>::fill_num_den)
    .def("fill_rhos", &N6univ_GRFCalculations<mpfr_100,mpc_100,polytype_100,mpfr_15>::fill_rhos)
    .def("interfaceGRF", &N6univ_GRFCalculations<mpfr_100,mpc_100,polytype_100,mpfr_15>::interfaceGRF)
    .def("getrhos", &N6univ_GRFCalculations<mpfr_100,mpc_100,polytype_100,mpfr_15>::getrhos)
    .def("interfaceps", &N6univ_GRFCalculations<mpfr_100,mpc_100,polytype_100,mpfr_15>::interfaceps,py::arg("verbose")=false, py::arg("thresholdimag")=1e-15,py::arg("minx0")=false,py::arg("maxx1")=false,py::arg("writex05coeffs")=false, py::arg("absder")=false, py::arg("normalisefirst")=true, py::arg("fnamecoeffs")="coefficients.txt")
    .def("interface_return_num_den", &N6univ_GRFCalculations<mpfr_100,mpc_100,polytype_100,mpfr_15>::interface_return_num_den)
    .def("interfacemonotonic", &N6univ_GRFCalculations<mpfr_100,mpc_100,polytype_100,mpfr_15>::interfacemonotonic, py::arg("thresholdimag")=1e-15)
    .def("print_num_den", &N6univ_GRFCalculations<mpfr_100,mpc_100,polytype_100,mpfr_15>::print_num_den);

}
