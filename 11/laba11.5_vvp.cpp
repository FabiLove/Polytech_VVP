#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "Введите целое число: " << endl;
    cin >> a;
    if (a > 0){
        if (a % 2 == 0){
            cout << "Это положительное четное число";
        }
        else{
            cout << "Это положительное нечетное число";
        }
    }
    else if (a < 0){
        if (a % 2 == 0){
            cout << "Это отрицательное четное число";
        }
        else{
            cout << "Это отрицательное нечетное число";
        }
    }
    else{
        cout << "Это нулевое число";
    };
    return 0;
}