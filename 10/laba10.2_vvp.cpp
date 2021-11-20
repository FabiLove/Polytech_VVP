
#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cout << "Введите 3 числа: ";
    cin >> a >> b >> c;
    if (a < b){
        if (b < c){
            cout << "Справедливо двойное неравенство A < B < C";
        }
    }
    else{
        cout << "Ошибка";
    };
    return 0;
}