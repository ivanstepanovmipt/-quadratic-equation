#include <iostream>
#include <cmath>
#include <assert.h>

const int Infinity = -1;

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
        } else if (discriminant == 0) {
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
            return Infinity;
        }
    }
}

int main () {
    double a = 0;
    double b = 0;
    double c = 0;
    double x1 = 0;
    double x2 = 0;
    int number_of_roots = 0;
    std::cout << "enter coefficient at x^2";
    std::cin >> a;
    std::cout << "enter coefficient at x";
    std::cin >> b;
    std::cout << "enter coefficient at x^0";
    std::cin >> c;
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
