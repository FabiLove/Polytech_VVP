#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cout << "Введите два числа: ";
    cin >> a >> b;
    if ((a > 2) && (b <= 3)){
        cout << "Справедливы неравенства A > 2 и B ≤ 3";
    }
    else{
        cout << "Ошибка";
    };
    return 0;
}
