#include <iostream>

using namespace std;

int main()
{
    int n;
    float i;
    float x = 1;
    cout << "Введите целое число сомножителей: ";
    cin >> n;
    for (i = 1; i < n + 1; i++){
        x = x * (1 + i / 10);
    };
    cout << x;

    return 0;
}