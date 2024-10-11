#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, r; 
    cout << "Введите длину стороны треугольника: ";
    cin >> a;
    cout << "Введите радиус круга: ";
    cin >> r;

    double areaTriangle = (sqrt(3) / 4) * a * a;

    double areaCircle = M_PI * r * r;

    int numCircles = int(areaTriangle / areaCircle);

    cout << "Количество кругов: " << numCircles << endl;

    return 0;
}