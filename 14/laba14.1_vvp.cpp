#include <iostream>
using namespace std;

int main()
{
    int a, b, j, i;
    cout << "Введите два целых числа A и B (A < B): ";
    cin >> a >> b;
    for (i = a; i < b+1; i++){
        for (j = 0; j < i; j++){
            cout << i;
        }
        cout << endl;
    };
    

    return 0;
}