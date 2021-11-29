#include <iostream>
using namespace std;
int main()
{
    setlocale(0, "");
    double a, b;
    int c, d;
    cout << "[-]Введите первое число: ";
    cin >> a;
    cout << "[-]Введите второе число: ";
    cin >> b;
    char menu;
    cout << "[-]Выберите символ: ";
    cin >> menu;
    if (menu == '+')
    {
        cout << "[-]Результат: " << a << " + " << b << " = " << a + b;
    }
    else if (menu == '-')
    {
        cout << "[-]Результат: " << a << " - " << b << " = " << a - b;
    }
    else if (menu == '*')
    {
        cout << "[-]Результат: " << a << " * " << b << " = " << a * b;
    }
    else if (menu == '/')
    {
        cout << "[-]Результат: " << a << " / " << b << " = " << a / b;
    }
    else if (menu == '%')
    {
        c = a;
        d = b;
        cout << "[-]Результат: " << c << " % " << d << " = " << c % d;
    }
    return 0;
}