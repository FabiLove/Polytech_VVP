#include <iostream>
using namespace std;

int main()
{
    int y, x;
    cout << "Введите координаты, не лежащие на осях координатной плоскости: " << endl;
    cin >> x >> y;
    if (x > 0){
        if (y > 0){
        cout << "Точка находится в первой четверти.";
        }
        else{
            cout << "Точка находится в четвертой четверти.";
        }
    }
    else{
        if (y > 0){
        cout << "Точка находится во второй четверти.";
        }
        else{
            cout << "Точка находится в третьей четверти.";
        }
    };
    return 0;
}