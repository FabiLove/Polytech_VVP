#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    int n, i;
    string s;
    string Napr[6]{"Восток", "Север", "Запад", "Юг", "Восток", "Север"};
    cout << "Введите начальное напрвавление: ";
    cin >> s;
    if(s == "север"){
        i = 1;
    };
    if(s == "запад"){
        i = 2;
    };
    if(s == "юг"){
        i = 3;
    };
    if(s == "восток"){
        i = 4;
    };
    cout << "Введите команду, где 0 — продолжать движение, 1 — поворот налево, −1 — поворот направо: ";
    cin >> n;
    if (n == 0){
        cout << "Робот повернул на " << Napr[i];
    }
    else if (n == 1){
        cout << "Робот повернул на " << Napr[i+1];
    }
    else if (n == -1){
        cout << "Робот повернул на " << Napr[i-1];
    };
    return 0;
}
