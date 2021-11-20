#include <iostream>
using namespace std;

int main()
{
    int a, b, c, y, x, s;
    cout << "Введите три целых числа: ";
    cin >> a >> b >> c;
    if ((a > b) && (c > b)){
        x = a;
        y = c;
        s = x + y;
    }
    else if ((a > c) && (b > c)){
        x = a;
        y = b;
        s = x + y;
    }
    else if ((c > a) && (b > a)){
        x = c;
        y = b;
        s = x + y;
    };
    cout << "Сумма наибольших из них равна " << s;
    return 0;
}
