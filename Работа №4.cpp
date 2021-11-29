#include <iostream> 
using namespace std;

int main() {
    setlocale(0, "");

    cout << "[-] Месяц года: \n\n";
    cout << "[1] Январь: \n";
    cout << "[2] Февраль: \n";
    cout << "[3] Март: \n";
    cout << "[4] Апрель: \n";
    cout << "[5] Май: \n";
    cout << "[6] Июнь: \n";
    cout << "[7] Июль: \n";
    cout << "[8] Август: \n";
    cout << "[9] Сентябрь: \n";
    cout << "[10] Октябрь: \n";
    cout << "[11] Ноябрь: \n";
    cout << "[12] Декабрь: \n";

    cout << "[+] Введите число месяца: \n";

    short month;
    cin >> month;

    switch (month) {
    case 1:
        cout << "[-] Вы выбрали Январь \n";
            break;
    case 2:
        cout << "[-] Вы выбрали Февраль \n";
            break;
    case 3:
        cout << "[-] Вы выбрали Март \n";
            break;
    case 4:
        cout << "[-] Вы выбрали Апрель \n";
            break;
    case 5:
        cout << "[-] Вы выбрали Май \n";
            break;
    case 6:
        cout << "[-] Вы выбрали Июнь \n";
            break;
    case 7:
        cout << "[-] Вы выбрали Июль \n";
            break;
    case 8:
        cout << "[-] Вы выбрали Август \n";
            break;
    case 9:
        cout << "[-] Вы выбрали Сентябрь \n";
            break;
    case 10:
        cout << "[-] Вы выбрали Октябрь \n";
            break;
    case 11:
        cout << "[-] Вы выбрали Ноябрь \n";
            break;
    case 12:
        cout << "[-] Вы выбрали Декабрь \n";
            break;
    default:
        cout << "[-] Вы ввели не верное число \n";
            break;
    }


    return 0;
}