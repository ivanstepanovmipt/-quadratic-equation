#include <iostream>
#include <cmath>
#include <assert.h>

int SolveQuadradicEquation(double a, double b, double c, double *x1, double *x2) {
    assert(x1);
    assert(x2);
    assert(x1 != x2);
    if(a != 0){
        double discriminant = b * b - 4 * a * c;
        if(discriminant >= 0){
            *x1 = (-b + sqrt(discriminant)) / (2 * a);
            *x2 = (-b - sqrt(discriminant)) / (2 * a);
            return 2;
        } else {
            return 0;
        }
    } else {
        if(b != 0){
            *x1 = -c / b;
            return 1;
        } else {
            return 0;
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
    std::cin >> a >> b >> c;
    number_of_roots = SolveQuadradicEquation(a, b, c, &x1, &x2);
    std::cout << number_of_roots << " " << x1 << " " << x2;
    return 0;
}
