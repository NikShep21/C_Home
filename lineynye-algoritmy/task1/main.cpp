#include <iostream>
#include <cmath>
using namespace std;

double degreesToRadians(int degrees, int minutes, int seconds) {
    
    double totalDegrees = degrees + minutes / 60.0 + seconds / 3600.0;
    return totalDegrees * M_PI / 180.0;  
}

int main() {

    int degrees, minutes, seconds;
    cout << "Введите градусы: ";
    cin >> degrees;
    
    cout << "Введите минуты: ";
    cin >> minutes;
    
    cout << "Введите секунды: ";
    cin >> seconds;

    double radians = degreesToRadians(degrees, minutes, seconds);
    cout << "Радианы: " << radians << endl;

    return 0;
}