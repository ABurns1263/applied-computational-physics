#include <Eigen/Dense>
#include <iostream>
int main(int argc, char **argv) {
// Find the eigenvalues and the eigenvectors
// of the matrix
// A = 1.0 2.0
// 4.0 9.0
Eigen::MatrixXd A(2,2);
A(0,0)= 1.0; A(0,1)=2.0;
A(1,0)= 4.0; A(1,1)=9.0;


// initialize an eigensolver with A
Eigen::EigenSolver<Eigen::MatrixXd> s(A);
// and solve
Eigen::VectorXcd val=s.eigenvalues();
Eigen::MatrixXcd vec=s.eigenvectors();
std::cout << "the eigenvalues are" << val << std::endl;
std::cout << "the eigenvectors are" << vec << std::endl;
}