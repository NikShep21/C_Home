#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double epsilon, x = 1;
    cout << "Введите погрешность: ";
    cin >> epsilon;

    double result = sin(x) / x;
    while (abs(result - 1) > epsilon) {
        x /= 2;  
        result = sin(x) / x;
        cout << "Для x = " << x << ", значение: " << result << endl;
    }

    cout << "Предел достигнут для x = " << x << endl;
    return 0;
}