#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
    double loanAmount, interestRate, annualProfit;

    // Ввод данных
    cout << "Введите сумму кредита: ";
    cin >> loanAmount;
    cout << "Введите процентную ставку (в %): ";
    cin >> interestRate;
    cout << "Введите годовую прибыль: ";
    cin >> annualProfit;

   
    interestRate /= 100;

    // Проверка, сможет ли предприниматель погасить кредит
    if (annualProfit <= loanAmount * interestRate) {
        cout << "Кредит не может быть погашен, так как прибыль недостаточна." << endl;
    } else {
        double years = loanAmount / (annualProfit - loanAmount * interestRate);
        cout << fixed << setprecision(2); 
        cout << "Кредит будет погашен за " << years << " лет." << endl;
    }

    return 0;
}