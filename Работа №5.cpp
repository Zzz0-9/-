#include <iostream> 
using namespace std;

int main() {
	setlocale(0, "");
	cout << "Добро пожаловать в ваш любимый переводчик Кейси\n";
	cout << "[1] Русские слова\n";
	cout << "[2] АНглийские слова\n";
	cout << "[3] Выход\n";

	int coca;
	cin >> coca;

	switch (coca) {
	case 1:
		cout << "[1] Человек\n";
		cout << "[2] Яблоко\n";
		cout << "[3] Дом\n";
		cout << "[4] Сыр\n";
		cout << "[5] Вова\n";
		cout << "[6] Дима\n";
		cout << "[7] Куст\n";
		cout << "[8] Капуста\n";
		cout << "[9] Человек-паук\n";
		cout << "[10] Книга\n";
		cout << "[11] Пенал\n";
		cout << "[12] Программист\n";
		cout << "[13] Кот\n";
		cout << "[14] Шоколад\n";
		cout << "[15] Мороженое\n";
		cout << "[+] Для перевода введите номер слова";
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

			cout << "[+] Вы ввели не верное значение";







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

		cout << "[+] Для перевода введите номер слова:";
		cin >> coca;

		switch (coca) {
		case 1:
			cout << "[1] Человек\n";
			break;
		case 2:
			cout << "[2] Яблоко\n";
			break;
		case 3:
			cout << "[3] Дом\n";
			break;
		case 4:
			cout << "[4] Сыр\n";
			break;
		case 5:
			cout << "[5] Вова\n";
			break;
		case 6:
			cout << "[6] Дима\n";
			break;
		case 7:
			cout << "[7] куст\n";
			break;

		case 8:
			cout << "[8] капуста\n";
			break;

		case 9:
			cout << "[9] Человек-паук\n";
			break;
		case 10:
			cout << "[10] Книга\n";
			break;
		case 11:
			cout << "[11] Пенал\n";
			break;
		case 12:
			cout << "[12] Программист\n";
			break;
		case 13:
			cout << "[13] кот\n";
			break;
		case 14:
			cout << "[14] шоколад\n";
			break;
		case 15:
			cout << "[15] мороженое\n";
			break;
		default:

			cout << "[+] Вы ввели не верное значение";







		}
		break;
	case 3:
		cout << "[+] Выйти из Кейси";



		return 0;
	default:
		cout << "[+] Вы ввели не верное значение";
	}

	return 0;
}