#include <iostream>
#define clear system("cls")
using namespace std;

int main();

int line() {
	clear;
	cout << "[-] ������: '�����'\n" << endl;
	cout << "[-] �������� ���:" << endl;
	cout << "[1] ��������������" << endl;
	cout << "[2] �����������\n" << endl;
	cout << "[-] �������� ���: ";

	int figur1;
	cin >> figur1;

	if (figur1 == 1) {
		int lin1;
		cout << "[-] ����� �����: ";
		cin >> lin1;

		char lin_textur1;
		cout << "[-] �������� �����: ";
		cin >> lin_textur1;

		for (int t = 0; t < lin1; t++) {
			cout << lin_textur1;
		}
		int menu1;
		cout << "\n[-] ������� 1, ����� ��������� � ����: ";
		cin >> menu1;
		if (menu1 == 1) {
			main();
		}
	}

	if (figur1 == 2) {
		int lin2;
		cout << "[-] ����� �����: ";
		cin >> lin2;

		char lin_textur2;
		cout << "[-] �������� �����: ";
		cin >> lin_textur2;

		for (int t1 = 0; t1 < lin2; t1++) {
			cout << lin_textur2;
			cout << endl;
		}
		int menu1;
		cout << "\n[-] ������� 1, ����� ��������� � ����: ";
		cin >> menu1;
		if (menu1 == 1) {
			main();
		}
	}
	return 0;
}

int kvadrat() {
	clear;
	cout << "[-] ������: '�������'\n" << endl;
	cout << "[-] �������� ���:" << endl;
	cout << "[1] �����������" << endl;
	cout << "[2] ������\n" << endl;
	cout << "[-] �������� ���: ";

	int figur2;
	cin >> figur2;

	if (figur2 == 1) {
		int zkvadrat1;
		cout << "[-] ������ ��������: ";
		cin >> zkvadrat1;

		char kvadrat_textur1;
		cout << "[-] �������� ��������: ";
		cin >> kvadrat_textur1;

		for (int i = 0; i < zkvadrat1; i++) {
			for (int s = 0; s < zkvadrat1; s++) {
				cout << kvadrat_textur1 << " ";
			}
			cout << "\n";
		}
		int menu2;
		cout << "\n[-] ������� 1, ����� ��������� � ����: ";
		cin >> menu2;
		if (menu2 == 1) {
			main();
		}
	}

	if (figur2 == 2) {
		int zkvadrat2;
		cout << "[-] ������ ��������: ";
		cin >> zkvadrat2;

		char kvadrat_textur1;
		cout << "[-] �������� ��������: ";
		cin >> kvadrat_textur1;

		for (int i = 0; i < zkvadrat2; i++) {
			for (int s = 0; s < zkvadrat2; s++) {
				if (i == 0 || i == zkvadrat2 - 1 || s == 0 || s == zkvadrat2 - 1) {
					cout << kvadrat_textur1 << " ";
				}
				else {
					cout << "  ";
				}

			}
			cout << "\n";
		}
		int menu2;
		cout << "\n[-] ������� 1, ����� ��������� � ����: ";
		cin >> menu2;
		if (menu2 == 1) {
			main();
		}
	}
	return 0;
}

int pramoug() {
	clear;
	cout << "[-] ������: '�������������'\n" << endl;
	cout << "[-] �������� ���:" << endl;
	cout << "[1] �����������" << endl;
	cout << "[2] ������\n" << endl;
	cout << "[-] �������� ���: ";

	int figur3;
	cin >> figur3;

	if (figur3 == 1) {
		int dpram1;
		cout << "[-] ����� ��������������: ";
		cin >> dpram1;

		int spram1;
		cout << "[-] ������ ��������������: ";
		cin >> spram1;

		char pram_textur1;
		cout << "[-] �������� ��������������: ";
		cin >> pram_textur1;

		for (int i = 0; i < dpram1; i++) {
			for (int s = 0; s < spram1; s++) {
				cout << pram_textur1 << " ";
			}
			cout << "\n";
		}
		int menu3;
		cout << "\n[-] ������� 1, ����� ��������� � ����: ";
		cin >> menu3;
		if (menu3 == 1) {
			main();
		}
	}

	if (figur3 == 2) {
		int dpram2;
		cout << "[-] ����� ��������������: ";
		cin >> dpram2;

		int spram2;
		cout << "[-] ������ ��������������: ";
		cin >> spram2;

		char pram_textur2;
		cout << "[-] �������� ��������������: ";
		cin >> pram_textur2;

		for (int x = 0; x < dpram2; x++) {
			for (int y = 0; y < spram2; y++) {
				if (y == 0 || y == spram2 - 1 || x == 0 || x == dpram2 - 1) {
					cout << pram_textur2 << " ";
				}
				else {
					cout << "  ";
				}
			}
			cout << "\n";
		}
		int menu3;
		cout << "\n[-] ������� 1, ����� ��������� � ����: ";
		cin >> menu3;
		if (menu3 == 1) {
			main();
		}
	}
	return 0;
}

int treug() {
	clear;
	cout << "[-] ������: '�����������'\n" << endl;
	cout << "[-] �������� ���:" << endl;
	cout << "[1] �����������" << endl;
	cout << "[2] ������\n" << endl;
	cout << "[-] �������� ���: ";

	int figur4;
	cin >> figur4;

	if (figur4 == 1) {
		int treug1;
		cout << "[-] ������ ������������: ";
		cin >> treug1;

		char trug_textur1;
		cout << "[-] �������� ������������: ";
		cin >> trug_textur1;

		for (int y = 0; y < treug1; y++) {
			for (int x = 0; x < treug1; x++) {
				if (x >= treug1 / 2 - y && x <= treug1 / 2 + y && y <= treug1 / 2) {
					cout << trug_textur1 << " ";
				}
				else {
					cout << "  ";
				}
			}
			cout << "\n";
		}
		int menu4;
		cout << "\n[-] ������� 1, ����� ��������� � ����: ";
		cin >> menu4;
		if (menu4 == 1) {
			main();
		}
	}

	if (figur4 == 2) {
		int treug2;
		cout << "[-] ������ ������������: ";
		cin >> treug2;

		char trug_textur2;
		cout << "[-] �������� ������������: ";
		cin >> trug_textur2;

		for (int y = 0; y < treug2; y++) {
			for (int x = 0; x < treug2; x++) {
				if (x == treug2 / 2 + y || x == treug2 / 2 - y || y == treug2 / 2) {
					cout << trug_textur2 << " ";
				}
				else {
					cout << "  ";
				}
			}
			cout << "\n";
		}
		int menu4;
		cout << "\n[-] ������� 1, ����� ��������� � ����: ";
		cin >> menu4;
		if (menu4 == 1) {
			main();
		}
	}
	return 0;
}

int reshot() {
	clear;
	cout << "[-] ������: '���������'\n" << endl;
	cout << "[-] �������� ������ �������" << endl;

	int reshot;
	cout << "[-] ������ �������: ";
	cin >> reshot;

	char reshot_textur;
	cout << "[-] �������� �������: ";
	cin >> reshot_textur;

	for (int y = 0; y < reshot; y++) {
		for (int x = 0; x < reshot; x++) {
			if (x % 2 == 0 || y % 2 == 0) {
				cout << reshot_textur << " ";
			}
			else {
				cout << "  ";
			}
		}
		cout << "\n";
	}
	int menu5;
	cout << "\n[-] ������� 1, ����� ��������� � ����: ";
	cin >> menu5;
	if (menu5 == 1) {
		main();
	}
	return 0;
}

int plusik() {
	clear;
	cout << "[-] ������: '������'\n" << endl;
	cout << "[-] �������� ������ �������" << endl;
	int plus;
	cout << "[-] ������ �������: ";
	cin >> plus;
	char plus_textur;
	cout << "[-] �������� �������: ";
	cin >> plus_textur; 
	for (int y = 0; y < plus; y++) {
		for (int x = 0; x < plus; x++) {
			if (x == plus / 2 || y == plus / 2) {
				cout << plus_textur << " ";
			}
			else {
				cout << "  ";
			}
		}
		cout << "\n";
	}
	int menu6;
	cout << "\n[-] ������� 1, ����� ��������� � ����: ";
	cin >> menu6;
	if (menu6 == 1) {
		main();
	}
	return 0;
}

int krest() {
	clear;
	cout << "[-] ������: '�������'\n" << endl;
	cout << "[-] �������� ������ ��������" << endl;
	int krest;
	cout << "[-] ������ ��������: ";
	cin >> krest;
	char krest_textur;
	cout << "[-] �������� ��������: ";
	cin >> krest_textur;
	for (int y = 0; y < krest; y++) {
		for (int x = 0; x < krest; x++) {
			if (x == y || krest - x == y + 1) {
				cout << krest_textur << " ";
			}
			else {
				cout << "  ";
			}
		}
		cout << "\n";
	}
	int menu7;
	cout << "\n[-] ������� 1, ����� ��������� � ����: ";
	cin >> menu7;
	if (menu7 == 1) {
		main();
	}
	return 0;
}

int main() {
	setlocale(0, "");
	clear;
	cout << "[-] ��������� - '�������������� ������'" << endl;
	cout << "[1] �����" << endl;
	cout << "[2] �������" << endl;
	cout << "[3] ������������" << endl;
	cout << "[4] ����������" << endl;
	cout << "[5] �������" << endl;
	cout << "[6] ������" << endl;
	cout << "[7] �������" << endl;
	cout << "[0] �����" << endl;
	cout << "[-] �������: ";

	int figura;
	cin >> figura;

	switch (figura)
	{
	case 0:
		exit(-1);
		break;
	case 1:
		line();
		break;
	case 2:
		kvadrat();
		break;
	case 3:
		pramoug();
		break;
	case 4:
		treug();
		break;
	case 5:
		reshot();
		break;
	case 6:
		plusik();
		break;
	case 7:
		krest();
		break;
	default:
		cout << "�� ����� �������� ��������!";
		break;
	}
	return 0;
}
