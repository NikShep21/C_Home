#include <iostream>
using namespace std;

int main() {
    int h, hRound, m, s;

    cout << "Введите часы : ";
    cin >> h;
    cout << "Введите минуты : ";
    cin >> m;
    cout << "Введите секунды : ";
    cin >> s;
    hRound = h;
    
    if (s >= 30) {
        m += 1; 
    }

    s = 0; 

    if (m >= 60) {
        h += 1; 
        m = 0;
    }
    if (m>30){
        hRound+=1;
    }
    
    cout << "Округленное время: " << h << "ч " << m << "мин" << endl;
     cout << "Округленное время(только часы): " << hRound << "ч " << endl;

    return 0;
}