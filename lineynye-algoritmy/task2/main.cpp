#include <iostream>
#include <cmath>
using namespace std;

void radiansToDegrees(double radians, int& degrees, int& minutes, int& seconds) {
    double totalDegrees = radians * 180.0 / M_PI;
    
    degrees = floor(totalDegrees);

    double fractionalPart = (totalDegrees - degrees) * 60.0;

    minutes = floor(fractionalPart);
    seconds = floor((fractionalPart - minutes) * 60.0);
}

int main() {
    double radians;
    cout << "Введите радианы: ";
    cin >> radians;

    int degrees, minutes, seconds;
    radiansToDegrees(radians, degrees, minutes, seconds);
    cout << "Градусы: " << degrees << "° " << "минуты: " << minutes << " Ceкунды: " << seconds << endl;

    return 0;
}