#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double epsilon;
    cout << "Введите погрешность: ";
    cin >> epsilon;

    double result = 0;
    int n = 1;
    double limit = M_E; 

    while (abs(result - limit) > epsilon) {
        result = pow((1 + 1.0 / n), n);
        n++;
    }

    cout << "Для n = " << n << " достигнут предел e с погрешностью " << epsilon << endl;
    return 0;
}