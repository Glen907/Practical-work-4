#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "RU");
	char ans;
	bool var = true;
	var = false;

	cout << "Вы сейчас находитесь в Лобне.\nВы можете отправиться на станцию:\n";
	cout << "*Марьино\n*Новогиреево\n*Римская\n*Щукинская\n*Лужники\nВведите букву, для расчета времени в пути (A,B,C,D,E): "; cin >> ans;
	do{
		switch (ans) {
		case 'a':
		case 'A':
			cout << "Станция метро: Марьино.\n" << "Время в пути - 1 час 28 мин.\n";
			break;
		case 'b':
		case 'B':
			cout << "Станция метро: Новогиреево.\n" << "Время в пути - 1 час 22 мин.\n";
			break;
		case 'c':
		case 'C':
			cout << "Станция метро: Римская.\n" << "Время в пути - 1 час 7 мин.\n";
			break;
		case 'd':
		case 'D':
			cout << "Станция метро: Щукинская.\n" << "Время в пути - 1 час 18 мин.\n";
			break;
		case 'e':
		case 'E':
			cout << "Станция метро: Лужники.\n" << "Время в пути - 1 час 17 мин.\n";
			break;
		default:
			cout << var << " - Некорректный ввод! ";
			cout << "Сделайте правильный выбор (A,B,C,D,E): ";
			var = true;
		}} while (var);
	return 0;
}