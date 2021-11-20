#include <iostream>

using namespace std;

int main()
{
    int a, p;
    cout << "Введите целое число: ";
    cin >> a;
    if (((a / 10) != 0) && ((a / 10) < 10)){
        if (a % 2 == 0){
            cout << "Данное число является четным двузначным";
        }
    }
    else{
        cout << "Ошибка";
    }
    return 0;
}