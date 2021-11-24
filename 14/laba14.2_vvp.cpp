#include <iostream>
using namespace std;

int main()
{
    int a, b, x;
    cout << "Введите два целых числа A и B (A > B): ";
    cin >> a >> b;
    while(x >= b){
        x = a - b;
        a = x;
    };
    cout << "Оставшаяся часть равна "<< x;
    

    return 0;
}