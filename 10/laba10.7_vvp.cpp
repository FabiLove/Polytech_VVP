#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Введите длины сторон треугольника: ";
    cin >> a >> b >> c;
    if ((a + b > c) && (a + c > b) && (c + b > a)){
            cout << "Существует треугольник со сторонами a, b, c";
        }
    else{
        cout << "Не существует треугольник со сторонами a, b, c";
    }
    return 0;
}
