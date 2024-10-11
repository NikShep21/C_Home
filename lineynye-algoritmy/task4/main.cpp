#include <iostream>
using namespace std;

int main() {
    double a, b, c;

    
    cout << "Введите коэффициент a: ";
    cin >> a;
    cout << "Введите коэффициент b: ";
    cin >> b;
    cout << "Введите коэффициент c: ";
    cin >> c;

    double x = -b / (2 * a);
    double y = a * x * x + b * x + c;

    cout << "Координаты вершины параболы: " << x << ", " << y << endl;

    return 0;
}