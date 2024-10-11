#include <iostream>
#include <cmath> 
using namespace std;

int main() {
    double k, p, s; 
    
    cout << "Введите стартовый капитал (k): ";
    cin >> k;
    cout << "Введите процент увеличения капитала в месяц (p): ";
    cin >> p;
    cout << "Введите сумму, которую необходимо накопить (s): ";
    cin >> s;
    // вычисляем количество месяцев необходимых для достижения s
    double n = log(s / k) / log(1 + p / 100);

    int years = int(n) / 12;
    int remainingMonths = int(n) % 12;

    cout << "Коммерсант накопит сумму " << s << " через " << years << " лет и " << remainingMonths << " месяцев." << endl;

    return 0;
}