#include <iostream>

using namespace std;

int main()
{
    int x;
    float i;
    cout << "Введите стоимость 1 кг конфет: ";
    cin >> x;
    for (i = 0.1; i < 1.1; i += 0.1){
        cout << i << " кг конфет стоит " << i * x << endl;
    };

    return 0;
}