#include <iostream>
using namespace std;
 
int main(){
    setlocale(LC_ALL, "RU");
    char ch;
    short int a,b, ans;
    cout << "Введите первое число: \n"; cin >> a;
    cout << "Введите второе число: \n"; cin >> b;
    cout << "Введите ответ: \n"; cin >> ans;
    if (ans == a*b){
        cout << "Прекрасно";
    }
    else cout << "Не правильно. Ответ будет " << a*b;
    return 0;
}