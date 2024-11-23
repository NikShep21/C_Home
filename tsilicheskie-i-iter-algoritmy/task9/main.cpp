#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double calculateEUsingSeries(double epsilon) {
    double e = 1.0;
    double fact = 1.0; 
    int n = 1;
    while (1.0 / fact > epsilon) {
        fact *= n; 
        e += 1.0 / fact;
        n++;
    }
    return e;
}

double calculateEUsingContinuedFraction(double epsilon) {
    double e = 2.0;
    double term = 2.0;
    while (term > epsilon) {
        e = 2 + 1.0 / e; 
        term = 1.0 / e; 
    }
    return e;
}

int main() {
    double epsilon;
    cout << "Введите погрешность: ";
    cin >> epsilon;

    double eFromSeries = calculateEUsingSeries(epsilon);
    double eFromFraction = calculateEUsingContinuedFraction(epsilon);

    cout << fixed << setprecision(10);
    cout << "Число e (сумма ряда) с точностью " << epsilon << " : " << eFromSeries << endl;
    cout << "Число e (бесконечная дробь) с точностью " << epsilon << " : " << eFromFraction << endl;

    return 0;
}