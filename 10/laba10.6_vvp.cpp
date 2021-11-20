#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Введите длины сторон треугольника: ";
    cin >> a >> b >> c;
    if ((a*a == b*b + c*c) || (b*b == a*a + c*c) || (c*c == a*a + b*b)){
            cout << "Треугольник со сторонами a, b, c является прямоугольным";
        }
    else{
        cout << "Треугольник со сторонами a, b, c не является прямоугольным";
    }
    return 0;
}
