#include <iostream> 
using namespace std;

int main() {
    setlocale(0, "");

    cout << "[-] ����� ����: \n\n";
    cout << "[1] ������: \n";
    cout << "[2] �������: \n";
    cout << "[3] ����: \n";
    cout << "[4] ������: \n";
    cout << "[5] ���: \n";
    cout << "[6] ����: \n";
    cout << "[7] ����: \n";
    cout << "[8] ������: \n";
    cout << "[9] ��������: \n";
    cout << "[10] �������: \n";
    cout << "[11] ������: \n";
    cout << "[12] �������: \n";

    cout << "[+] ������� ����� ������: \n";

    short month;
    cin >> month;

    switch (month) {
    case 1:
        cout << "[-] �� ������� ������ \n";
            break;
    case 2:
        cout << "[-] �� ������� ������� \n";
            break;
    case 3:
        cout << "[-] �� ������� ���� \n";
            break;
    case 4:
        cout << "[-] �� ������� ������ \n";
            break;
    case 5:
        cout << "[-] �� ������� ��� \n";
            break;
    case 6:
        cout << "[-] �� ������� ���� \n";
            break;
    case 7:
        cout << "[-] �� ������� ���� \n";
            break;
    case 8:
        cout << "[-] �� ������� ������ \n";
            break;
    case 9:
        cout << "[-] �� ������� �������� \n";
            break;
    case 10:
        cout << "[-] �� ������� ������� \n";
            break;
    case 11:
        cout << "[-] �� ������� ������ \n";
            break;
    case 12:
        cout << "[-] �� ������� ������� \n";
            break;
    default:
        cout << "[-] �� ����� �� ������ ����� \n";
            break;
    }


    return 0;
}