#include <iostream>
#include <cmath>
using namespace std;


long long binomialCoeff(int m, int i) {
    long long res = 1;
    for (int j = 1; j <= i; ++j) {
        res *= (m - j + 1);  
        res /= j;             
    }
    return res;
}

int main() {
    int m;
    double x;
    cout << "Введите m: ";
    cin >> m;
    cout << "Введите x: ";
    cin >> x;

    double result = 0;
   
    for (int i = 0; i <= m; i++) {
        result += binomialCoeff(m, i) * pow(x, i); 
    }

    cout << "Результат бинома Ньютона: " << result << endl;
    return 0;
}