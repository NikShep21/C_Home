#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double T; 
    cout << "Введите период T: ";
    cin >> T;

    double epsilon = 0.0001; 
    int steps = 50; 
    double step = T / steps; 

    // Проверка периодичности на отрезке [0, 5T]
    bool isPeriodic = true;
    for (double x = 0; x <= 5 * T - step; x += step) {
        double f1 = sin(x); 
        double f2 = sin(x + T); 
        if (abs(f1 - f2) > epsilon) {
            isPeriodic = false;
            break;
        }
    }

    if (isPeriodic) {
        cout << "Функция периодична с периодом T." << endl;
    } else {
        cout << "Функция не является периодичной." << endl;
    }

    return 0;
}