#include <iostream>
#include <cmath>

using namespace std;

void SolveQuadradicEquation (double a, double b, double c) {
    double discriminant = b * b - 4 * a * c;
    if(discriminant >= 0){
        double x1 = (-b + sqrt(discriminant)) / (2 * a);
        double x2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << x1 << " " << x2;
    }
}

void SolveLinearEquation (double b, double c) {
    if (b != 0) {
        double x = -c / b;
        cout << x;
    }
}

int main () {
    double a, b, c;
    cin >> a >> b >> c;
    if (a != 0) {
    SolveQuadradicEquation (a, b, c); // решаем квадратное уравнение
    } else {
        SolveLinearEquation (b, c); // решаем линейное уравнение
    }
    return 0;
}
