#include <boost/multiprecision/mpfr.hpp>
#include <pybind11/pybind11.h>
#include <pybind11/numpy.h>
#include <pybind11/eigen.h>
#include <cmath>
#include <vector>
#include <stack>
#include <stdexcept>
#include <Eigen/Dense>
#include <stdlib.h>
#include <iostream>

using namespace Eigen;

/**From kmnam MarkovDigraphs module
 * Compute the nullspace of A by performing a singular value decomposition.
 * 
 * This function returns the column of V in the SVD of A = USV corresponding
 * to the least singular value (recall that singular values are always
 * non-negative). It therefore effectively assumes that the A has a 
 * nullspace of dimension one.
 * 
 * @param A Input matrix to be decomposed. 
 * @returns The column of V in the singular value decomposition A = USV 
 *          corresponding to the least singular value. 
 */
namespace py = pybind11;
typedef boost::multiprecision::number<boost::multiprecision::mpfr_float_backend<100> > InternalType;

template <typename T>
Matrix<T, Dynamic, 1> getOneDimNullspaceFromSVD(const Ref<const Matrix<T, Dynamic, Dynamic> >& A)
{
    // Perform a singular value decomposition of A, only computing V in full
    Eigen::BDCSVD<Matrix<T, Dynamic, Dynamic> > svd(A, Eigen::ComputeFullV);

    // Return the column of V corresponding to the least singular value of A
    // (always given last in the decomposition) 
    Matrix<T, Dynamic, 1> singular = svd.singularValues(); 
    Matrix<T, Dynamic, Dynamic> V = svd.matrixV();
    return V.col(singular.rows() - 1); 
}

double getGRFval(py::array_t<double> parsar, double x){

    auto parsarbuf=parsar.request();
    double *pars=(double *) parsarbuf.ptr;
    InternalType a_1_2 = pars[0];
    InternalType b_1_2 = pars[1];
    InternalType a_1_3 = pars[2];
    InternalType b_1_3 = pars[3];
    InternalType a_1_4 = pars[4];
    InternalType b_1_4 = pars[5];
    InternalType a_1_5 = pars[6];
    InternalType b_1_5 = pars[7];
    InternalType a_2_6 = pars[8];
    InternalType b_2_6 = pars[9];
    InternalType a_2_7 = pars[10];
    InternalType b_2_7 = pars[11];
    InternalType a_2_8 = pars[12];
    InternalType b_2_8 = pars[13];
    InternalType a_3_6 = pars[14];
    InternalType b_3_6 = pars[15];
    InternalType a_3_9 = pars[16];
    InternalType b_3_9 = pars[17];
    InternalType a_3_10 = pars[18];
    InternalType b_3_10 = pars[19];
    InternalType a_4_7 = pars[20];
    InternalType b_4_7 = pars[21];
    InternalType a_4_9 = pars[22];
    InternalType b_4_9 = pars[23];
    InternalType a_4_11 = pars[24];
    InternalType b_4_11 = pars[25];
    InternalType a_5_8 = pars[26];
    InternalType b_5_8 = pars[27];
    InternalType a_5_10 = pars[28];
    InternalType b_5_10 = pars[29];
    InternalType a_5_11 = pars[30];
    InternalType b_5_11 = pars[31];
    InternalType a_6_12 = pars[32];
    InternalType b_6_12 = pars[33];
    InternalType a_6_13 = pars[34];
    InternalType b_6_13 = pars[35];
    InternalType a_7_12 = pars[36];
    InternalType b_7_12 = pars[37];
    InternalType a_7_14 = pars[38];
    InternalType b_7_14 = pars[39];
    InternalType a_8_13 = pars[40];
    InternalType b_8_13 = pars[41];
    InternalType a_8_14 = pars[42];
    InternalType b_8_14 = pars[43];
    InternalType a_9_12 = pars[44];
    InternalType b_9_12 = pars[45];
    InternalType a_9_15 = pars[46];
    InternalType b_9_15 = pars[47];
    InternalType a_10_13 = pars[48];
    InternalType b_10_13 = pars[49];
    InternalType a_10_15 = pars[50];
    InternalType b_10_15 = pars[51];
    InternalType a_11_14 = pars[52];
    InternalType b_11_14 = pars[53];
    InternalType a_11_15 = pars[54];
    InternalType b_11_15 = pars[55];
    InternalType a_12_16 = pars[56];
    InternalType b_12_16 = pars[57];
    InternalType a_13_16 = pars[58];
    InternalType b_13_16 = pars[59];
    InternalType a_14_16 = pars[60];
    InternalType b_14_16 = pars[61];
    InternalType a_15_16 = pars[62];
    InternalType b_15_16 = pars[63];


    Matrix<InternalType, Dynamic, Dynamic> L = Matrix<InternalType, Dynamic, Dynamic>::Zero(16, 16);


    // Populate the off-diagonal entries of the matrix first: 
    // (i,j)-th entry is the label of the edge j -> i

    L<<0,b_1_2,b_1_3,b_1_4,b_1_5,0,0,0,0,0,0,0,0,0,0,0,
    a_1_2*x,0,0,0,0,b_2_6,b_2_7,b_2_8,0,0,0,0,0,0,0,0,
    a_1_3*x,0,0,0,0,b_3_6,0,0,b_3_9,b_3_10,0,0,0,0,0,0,
    a_1_4*x,0,0,0,0,0,b_4_7,0,b_4_9,0,b_4_11,0,0,0,0,0,
    a_1_5*x,0,0,0,0,0,0,b_5_8,0,b_5_10,b_5_11,0,0,0,0,0,
    0,a_2_6*x,a_3_6*x,0,0,0,0,0,0,0,0,b_6_12,b_6_13,0,0,0,
    0,a_2_7*x,0,a_4_7*x,0,0,0,0,0,0,0,b_7_12,0,b_7_14,0,0,
    0,a_2_8*x,0,0,a_5_8*x,0,0,0,0,0,0,0,b_8_13,b_8_14,0,0,
    0,0,a_3_9*x,a_4_9*x,0,0,0,0,0,0,0,b_9_12,0,0,b_9_15,0,
    0,0,a_3_10*x,0,a_5_10*x,0,0,0,0,0,0,0,b_10_13,0,b_10_15,0,
    0,0,0,a_4_11*x,a_5_11*x,0,0,0,0,0,0,0,0,b_11_14,b_11_15,0,
    0,0,0,0,0,a_6_12*x,a_7_12*x,0,a_9_12*x,0,0,0,0,0,0,b_12_16,
    0,0,0,0,0,a_6_13*x,0,a_8_13*x,0,a_10_13*x,0,0,0,0,0,b_13_16,
    0,0,0,0,0,0,a_7_14*x,a_8_14*x,0,0,a_11_14*x,0,0,0,0,b_14_16,
    0,0,0,0,0,0,0,0,a_9_15*x,a_10_15*x,a_11_15*x,0,0,0,0,b_15_16,
    0,0,0,0,0,0,0,0,0,0,0,a_12_16*x,a_13_16*x,a_14_16*x,a_15_16*x,0;
            

            
    for (unsigned i = 0; i < 16; ++i){
        L(i, i) = -(L.col(i).sum());
    }
    
    Matrix<InternalType, Dynamic, 1> steady_state;
    
    // Obtain the steady-state vector of the Laplacian matrix
    
    try
    {
    steady_state = getOneDimNullspaceFromSVD<InternalType>(L);
    }
    catch (const std::runtime_error& e)
    {
        throw;
    }
    

    // Normalize by the sum of its entries and return 
    InternalType norm = steady_state.sum();
    //py::array_t<double> resultpy = py::array_t<double>(16);
    //py::buffer_info bufresultpy = resultpy.request();
    //double *ptrresultpy=(double *) bufresultpy.ptr;
    for (int i=0; i<steady_state.size();i++){
        //ptrresultpy[i]=(steady_state[i] / norm).template convert_to<double>();
        steady_state[i]=steady_state[i] / norm;
    }
    InternalType out=0.25*(steady_state[1]+steady_state[2]+steady_state[3]+steady_state[4])+0.5*(steady_state[5]+steady_state[6]+steady_state[7]+steady_state[8]+steady_state[9]+steady_state[10])+0.75*(steady_state[11]+steady_state[12]+steady_state[13]+steady_state[14])+steady_state[15];
    //cout << out.template convert_to<double>();
    //cout.flush()
    return out.template convert_to<double>();
}

PYBIND11_MODULE(N4av_noneq_100, m)
{
    //m.def("getSteadyStateFromSVD",&getSteadyStateFromSVD,py::arg("parsar"), py::arg("x"));
    m.def("getGRFval",&getGRFval,py::arg("parsar"), py::arg("x"));
    }
