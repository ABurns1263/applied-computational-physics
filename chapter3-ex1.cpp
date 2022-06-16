#include <Eigen/Dense>
#include <iostream>
int main(int argc, char **argv) {



// We can set up a 3x3 matrix and return the determinant of it in order to check our work with the Dot and Cross Product
Eigen::Matrix3d d;
d << .3,.2,1.5,
      3, 0, 0,
      5, 2, 0;

Eigen::Vector3d a(3,0,0);
Eigen::Vector3d b(.5,2,0);
Eigen::Vector3d c(.3,2,1.5);

Eigen::Vector3d e = a.cross(b);
double g = e.dot(c);
double f = d.determinant();

std::cout << "Triple Product:\n" << g << std::endl;
std::cout << "Determinant:\n" << f << std::endl;

}