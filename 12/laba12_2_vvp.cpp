#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    int n, i, x;
    string s;
    string Napr[4]{"Запад", "Север", "Восток", "Юг"};
    cout << "Введите начальное напрвавление: ";
    cin >> s;
    for (i = 0; i < 4; i++){
        if(s == Napr[i]){
            x = i;
        }
    };
        cout << "Введите команду, где 0 — продолжать движение, 1 — поворот налево, −1 — поворот направо: ";
    cin >> n;
    i = x;
    if (n == 0){
        cout << "Робот повернул на " << Napr[x];
    }
    else if (n == 1){
        int k = x - 1;
        if(k == -1){
            cout << "Робот повернул на " << Napr[x+3];
        }
        else{
            cout << "Робот повернул на " << Napr[x-1];
        };
    }
    else if (n == -1){
        int k = x + 1;
        if(k == 4){
            cout << "Робот повернул на " << Napr[x-3];
        }
        else{
            cout << "Робот повернул на " << Napr[x+1];
        };
    };
    return 0;
}
