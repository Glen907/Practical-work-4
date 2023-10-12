#include <iostream>
using namespace std;

int main(){
    setlocale(LC_ALL, "RU");
    
    int age = 0, maxAge = 0, minAge = 100, sum = 0, average = 0, amount = 0;

    cout << "Введите количество посетителей спортзала: ";
    cin >> amount;
    
    for (int i = 0; i < amount; i++){
        cout << "Введите возраст " << i + 1 << "-го посетителя: ";
        cin >> age;
        if (age > maxAge)
        maxAge = age;
        if (age < minAge)  
        minAge = age;
        sum += age;
    }
    
    average = sum / amount;
    cout << "\nСредний возраст всех посетителей: \n" << average;
    cout << "\nСамый взрослый: \n" << maxAge;
    cout << "\nСамый молодой: \n" << minAge;

return 0;
}