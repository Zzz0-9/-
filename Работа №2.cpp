#include <iostream>
using namespace std;
int main()
{
    setlocale(0, "");
    cout << "[-]��������� \"������� ����\"" << endl;
    cout << endl;
    cout << "[1]����" << endl;
    cout << "[2]�����" << endl;
    cout << "[3]����" << endl;
    cout << "[4]�����" << endl;
    cout << endl;
    cout << "������� ��������: ";
    int menu;
    cin >> menu;
    if (menu == 1)
    {
        cout << "[-]�� ������� ����!";
    }
    else if (menu == 2)
    {
        cout << "[-]�� ������� �����!";
    }
    else if (menu == 3)
    {
        cout << "[-]�� ������� ����!";
    }
    else if (menu == 4)
    {
        cout << "[-]�� ������� �����!";
    }
    else
    {
        cout << "[-]�� ������� ������������ ��������!";
    }
    return 0;
}