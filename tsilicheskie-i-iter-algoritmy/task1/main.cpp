#include <iostream>
#include <cmath>
#include <iomanip> 
using namespace std;

bool isEven(double a, double b, double step, double epsilon) {
    for (double x = a; x <= b; x += step) {
        if (abs(cos(x) - cos(-x)) > epsilon) {
            return false; 
        }
    }
    return true; 
}

bool isOdd(double a, double b, double step, double epsilon) {
    for (double x = a; x <= b; x += step) {
        if (abs(cos(-x) + cos(x)) > epsilon) {
            return false; 
        }
    }
    return true; 
}

int main() {
    const double step = 0.1;    
    const double epsilon = 1e-6;
    const double a = -5.0, b = 5.0;

    
    bool even = isEven(a, b, step, epsilon);
    bool odd = isOdd(a, b, step, epsilon);

    cout << fixed << setprecision(6); 
    if (even) {
        cout << "Функция чётная." << endl;
    } else if (odd) {
        cout << "Функция нечётная." << endl;
    } else {
        cout << "Функция общего вида." << endl;
    }

    return 0;
}