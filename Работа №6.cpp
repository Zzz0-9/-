#include <iostream>
using namespace std;

int main() {
	setlocale(0, "");
	cout << "[+] ����������� � ���������\n";
	cout << "[1] ��������� \n";
	cout << "[2] ����� ��� \n";
	int menu;


	int day;
	string month;
	cin >> menu;
	system("cls");
	switch (menu) {
	case 1:
		cout << "[1] ������ \n[2] ������� \n[3] ����\n[4] ������\n[5] ���\n[6] ����\n[7] ����\n[8] ������\n[9] ��������\n[10] �������\n[11] ������\n[12] �������\n[+] ������� ����� ������: ";
		cin >> menu;
		system("cls");
		switch (menu) {
		case 1:
			month = "������";
			break;
		case 2:
			month = "�������";
			break;
		case 3:
			month = "�����";
			break;
		case 4:
			month = "������";
			break;
		case 5:
			month = "���";
			break;
		case 6:
			month = "����";
			break;
		case 7:
			month = "����";
			break;
		case 8:
			month = "�������";
			break;
		case 9:
			month = "��������";
			break;
		case 10:
			month = "�������";
			break;
		case 11:
			month = "������";
			break;
		case 12:
			month = "�������";
			break;

		default:
			cout << "ERROR!";
			break;
		}
		cout << "������� ����, �� 1 �� 31.\n";
		cin >> menu;
		switch (menu) {
		case 1:
			day = 1;
			break;
		case 2:
			day = 2;
			break;
		case 3:
			day = 3;
			break;
		case 4:
			day = 4;
			break;
		case 5:
			day = 5;
			break;
		case 6:
			day = 6;
			break;
		case 7:
			day = 7;
			break;
		case 8:
			day = 8;
			break;
		case 9:
			day = 9;
			break;
		case 10:
			day = 10;
			break;
		case 11:
			day = 11;
			break;
		case 12:
			day = 12;
			break;
		case 13:
			day = 13;
			break;
		case 14:
			day = 14;
			break;
		case 15:
			day = 15;
			break;
		case 16:
			day = 16;
			break;
		case 17:
			day = 17;
			break;
		case 18:
			day = 18;
			break;
		case 19:
			day = 19;
			break;
		case 20:
			day = 20;
			break;
		case 21:
			day = 21;
			break;
		case 22:
			day = 22;
			break;
		case 23:
			day = 23;
			break;
		case 24:
			day = 24;
			break;
		case 25:
			day = 25;
			break;
		case 26:
			day = 26;
			break;
		case 27:
			day = 27;
			break;
		case 28:
			day = 28;
			break;
		case 29:
			day = 29;
			break;
		case 30:
			day = 30;
			break;
		case 31:
			day = 31;
			break;



		default:
			cout << "ERROR!";
			break;
		}
		cout << "������ " << day << " " << month;

		break;
	case 2:
		cout << "�� �����.";
		return 0;
		break;
	default:
		cout << "ERROR!";
		return 0;
		break;
	}

	return 0;
}