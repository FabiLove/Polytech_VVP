#include <iostream>
using namespace std;
int main()
{
    int a, b, c, k, n;
    cout << "Введите число Фибоначчи N: ";
    cin >> n;
    k = 0;
    c = 0;
    a = 0;
    b = 1;
    while(c != n){
        c = a + b;
        k = k + 1;
        if(a >= b){
            b = c;
        }
        else{
            a = c;
        };
    };

    cout << "Порядковый номер числа Фибоначчи N "<< k << endl;
    

    return 0;
}

