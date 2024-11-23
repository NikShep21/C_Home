#include <iostream>
using namespace std;

int main() {
    int width, height; 
    cout << "Введите ширину эллипса: ";
    cin >> width;
    cout << "Введите высоту эллипса: ";
    cin >> height;

    cout << "Точки внутри эллипса:" << endl;
    for (int x = -width; x <= width; x++) {
        for (int y = -height; y <= height; y++) {
            // Проверяем, попадает ли точка (x, y) внутрь эллипса
            if ((x * x) / (width * width) + (y * y) / (height * height) <= 1.0) {
                cout << "[" << x << ", " << y << "]" << endl;
            }
        }
    }

    return 0;
}