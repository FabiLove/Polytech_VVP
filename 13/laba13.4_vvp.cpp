#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float a;
    int n, i;
    int x = 0;
    cout << "Введите вещественное число A и целое число N: ";
    cin >> a >> n;
    for (i = 0; i < n+1; i++){
        x = x + pow(a, i);
        cout << x << " ";
    };
    cout << endl;
    cout << "Cумма 1 + A + A^2 + ... + A^N = " << x;

    return 0;
}