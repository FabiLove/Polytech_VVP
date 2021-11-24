#include <iostream>

using namespace std;

int main()
{
    int n, i;
    int x = 0;
    cout << "Введите целое число N: ";
    cin >> n;
    for (i = 1; i < n * 2 ; i += 2){
        x = x + i;
        cout << x << " ";
    };
    cout << endl;
    cout << "N^2 = " << x;

    return 0;
}