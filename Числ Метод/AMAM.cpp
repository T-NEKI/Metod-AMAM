#include <iostream>
#include <cmath>

double equation(double x) {
    return 2 * sin(x) - atan(x);
}

double bisection(double a, double b, double epsilon) {
    while ((b - a) > 2 * epsilon) {
        double c = (a + b) / 2;
        if (equation(a) * equation(c) < 0) {
            b = c;
        }
        else {
            a = c;
        }
    }
    return (a + b) / 2;
}

int main() {
    setlocale(LC_ALL, "Russian");
    double a = 2.5;
    double b = 2.6;
    double epsilon = 0.001;

    double root = bisection(a, b, epsilon);

    std::cout << " орень уравнени€ на отрезке [2.5, 2.6] с точностью 0.001: " << root << std::endl;

    return 0;
}
