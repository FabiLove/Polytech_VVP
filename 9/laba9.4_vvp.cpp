#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cout<<"Введите длины сторон прямоугольника a и b: ";
    cin >> a >> b;
    cout<<"Введите длину стороны квадрата c: ";
    cin >> c;
    int p = a * b; //площадь прямоугольника
    int pk = c * c; //площадь квадратика
    int sa = a - (a % c); //сторона а внутренней фигуры
    int sb = b - (b % c); // сторона б внутренней фигуры
    int pc = sa * sb; // площадь внутренней фигуры
    int k = (pc / pk);
    cout << "Количество квадратов, поместившихся в прямоугольнике = " << k;
    int o = p - pc;
    cout << "Оставшаяся площадь: "<< o;

    return 0;
}
