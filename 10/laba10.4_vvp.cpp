#include <iostream>

using namespace std;

int main()
{
    int x, a, b, c;
    cout << "Введите трехзначное число: ";
    cin >> x;
    a = x / 100; //первая цифра (сотни)
    b = (x / 10) % 10; // вторая цифра (десятки)
    c = (x % 10); // третья цифра (единицы)
    if (a < b){
        if(b < c){
            cout << "Цифры данного числа образуют возрастающую или убывающую последовательность";
        }
    else{
        cout << "Цифры данного числа не образуют возрастающую или убывающую последовательность";
    };
    }
    return 0;
}