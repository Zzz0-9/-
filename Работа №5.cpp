#include <iostream> 
using namespace std;

int main() {
	setlocale(0, "");
	cout << "����� ���������� � ��� ������� ���������� �����\n";
	cout << "[1] ������� �����\n";
	cout << "[2] ���������� �����\n";
	cout << "[3] �����\n";

	int coca;
	cin >> coca;

	switch (coca) {
	case 1:
		cout << "[1] �������\n";
		cout << "[2] ������\n";
		cout << "[3] ���\n";
		cout << "[4] ���\n";
		cout << "[5] ����\n";
		cout << "[6] ����\n";
		cout << "[7] ����\n";
		cout << "[8] �������\n";
		cout << "[9] �������-����\n";
		cout << "[10] �����\n";
		cout << "[11] �����\n";
		cout << "[12] �����������\n";
		cout << "[13] ���\n";
		cout << "[14] �������\n";
		cout << "[15] ���������\n";
		cout << "[+] ��� �������� ������� ����� �����";
		cin >> coca;

		switch (coca) {
		case 1:
			cout << "[1] People\n";
			break;
		case 2:
			cout << "[2] apple\n";
			break;
		case 3:
			cout << "[3] home\n";
			break;
		case 4:
			cout << "[4] cheese\n";
			break;
		case 5:
			cout << "[5] Vova\n";
			break;
		case 6:
			cout << "[6] Dima\n";
			break;
		case 7:
			cout << "[7] bush\n";
			break;

		case 8:
			cout << "[8] cabbage\n";
			break;

		case 9:
			cout << "[9] Spiderman\n";
			break;
		case 10:
			cout << "[10] book\n";
			break;
		case 11:
			cout << "[11] pencil case\n";
			break;
		case 12:
			cout << "[12] programmer\n";
			break;
		case 13:
			cout << "[13] cat\n";
			break;
		case 14:
			cout << "[14] chocolate\n";
			break;
		case 15:
			cout << "[15] ice cream\n";
			break;
		default:

			cout << "[+] �� ����� �� ������ ��������";







		}
		break;

	case 2:
		cout << "[1] People\n";
		cout << "[2] apple\n";
		cout << "[3] home\n";
		cout << "[4] cheese\n";
		cout << "[5] Vova\n";
		cout << "[6] Dima\n";
		cout << "[7] bush\n";
		cout << "[8] cabbage\n";
		cout << "[9] Spiderman\n";
		cout << "[10] book\n";
		cout << "[11] pencil case\n";
		cout << "[12] programmer\n";
		cout << "[13] cat\n";
		cout << "[14] chocolate\n";
		cout << "[15] ice cream\n";

		cout << "[+] ��� �������� ������� ����� �����:";
		cin >> coca;

		switch (coca) {
		case 1:
			cout << "[1] �������\n";
			break;
		case 2:
			cout << "[2] ������\n";
			break;
		case 3:
			cout << "[3] ���\n";
			break;
		case 4:
			cout << "[4] ���\n";
			break;
		case 5:
			cout << "[5] ����\n";
			break;
		case 6:
			cout << "[6] ����\n";
			break;
		case 7:
			cout << "[7] ����\n";
			break;

		case 8:
			cout << "[8] �������\n";
			break;

		case 9:
			cout << "[9] �������-����\n";
			break;
		case 10:
			cout << "[10] �����\n";
			break;
		case 11:
			cout << "[11] �����\n";
			break;
		case 12:
			cout << "[12] �����������\n";
			break;
		case 13:
			cout << "[13] ���\n";
			break;
		case 14:
			cout << "[14] �������\n";
			break;
		case 15:
			cout << "[15] ���������\n";
			break;
		default:

			cout << "[+] �� ����� �� ������ ��������";







		}
		break;
	case 3:
		cout << "[+] ����� �� �����";



		return 0;
	default:
		cout << "[+] �� ����� �� ������ ��������";
	}

	return 0;
}