#include <iostream>
#include "test_runner.h"
#include "solution.h"

/**
  * @file main.c
  *
  * @brief Program for solving quadratic equations
  *
  * @author Ivan Stepanov
  *
  * @date 09/28/2020
 */

const int Infinity_ROOTS = -1;

int main () {
    TestSolveQuadradicEquation();
    TestSolveQuadradicEquationOutFile();
    double a = 0;
    double b = 0;
    double c = 0;
    double x1 = 0;
    double x2 = 0;
    int number_of_roots = 0;
    a = Input("enter coefficient at x^2");
    b = Input("enter coefficient at x^1");
    c = Input("enter coefficient at x^0");
    number_of_roots = SolveQuadradicEquation(a, b, c, &x1, &x2);
    switch(number_of_roots){
    case 2:
        std::cout << "x1 = : " << x1 << " x2 = : " << x2;
        break;
    case 1:
        std::cout << "x = : " << x1;
        break;
    case 0:
        std::cout << "no solutions";
        break;
    case -1:
        std::cout << "infinitely many solutions";
        break;
    }
    return 0;
}
