#include "solution.h"

/**
  * @file solution.cpp
  *
  * @brief Program for solve quadratic equations
  *
  * @author Ivan Stepanov
  *
  * @date 09/28/2020
 */

const int Infinity_ROOTS = -1;

bool EqualToZero(double& d){
    if(abs(d) < 0.000000001){
        return true;
    } else {
        return false;
    }
}

int SolveQuadradicEquation(double a, double b, double c, double *x1, double *x2) {
    assert(x1);
    assert(x2);
    assert(x1 != x2);
    if(a != 0){
        double discriminant = b * b - 4 * a * c;
        if(discriminant > 0){
            *x1 = (-b + sqrt(discriminant)) / (2 * a);
            *x2 = (-b - sqrt(discriminant)) / (2 * a);
            return 2;
        } else if (EqualToZero(discriminant)) {
            *x1 = -b / (2 * a);
            *x2 = -b / (2 * a);
            return 1;
        } else {
            return 0;
        }
    } else {
        if(b != 0){
            *x1 = -c / b;
            return 1;
        } else {
            return Infinity_ROOTS;
        }
    }
}

double Input(const std::string& s){
    std::cout << s;
    double value = 0;
    while (!(std::cin >> value)){
        std::cout << "error\n";
        std::cout << s;
        std::cin.clear();
        fflush(stdin);
    }
    return value;
}
