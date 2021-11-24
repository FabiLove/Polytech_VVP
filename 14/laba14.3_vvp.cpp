#include <iostream>
using namespace std;

int main()
{
    int n, s, k;
    cout << "Введите целое число N: ";
    cin >> n;
    s = 0;
    k = 0;
    while(s < n){
        k = k + 1;
        s = s + k;
    };
    cout << "Сумма чисел равна "<< s << endl << "Последнее число суммы равно " << k;
    

    return 0;
}

