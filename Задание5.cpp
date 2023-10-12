#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "RU");
	int finger, z = -7;
	do {
		cout << "\n Введите номер пальца: "; cin >> finger; cout << "\n";
		if (finger > 5) {
			cout << " Такого пальца не существует.\n Введите следующий номер пальца: "; cin >> finger;
		}
		if (finger == 1) {
			cout << " Большой палец.\n";
		}
		if (finger == 2) {
			cout << " Указательный палец.\n";
		}
		if (finger == 3) {
			cout << " Средний палец.\n";
		}
		if (finger == 4) {
			cout << " Безимянный палец.\n";
		}
		if (finger == 5) {
			cout << " Мезинец.\n";
		}} while (z < 8);
	return 0;
}