#include <iostream>
using namespace std;

int main()
{
    int a, b, c, y, x;
    cout << "Введите три точки A, B, C: " << endl;
    cin >> a >> b >> c;
    x = abs(b - a);
    y = abs(c - a);
    if (x < y){
        cout << "Ближе к А расположена точка B. Она находится на расстоянии: " << x;
    }
    else if (x > y){
        cout << "Ближе к А расположена точка C. Она находится на расстоянии: " << y;
    }
    else{
       cout << "К точке А обе точки B и C расположены на одинаковом расстоянии:" << x;
    }
    return 0;
}
