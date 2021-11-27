#include <iostream>
using namespace std;

int Sign(float X)
{
    float v;
    if (X < 0){
        v = -1;
        return v;
    }
    else if (X > 0){
        v = 1;
        return v;
    }
    else{
        v = 0;
        return v;
    };
}

int main()
{
    float a, b;
    cout << "Введите два числа: ";
    cin >> a >> b;                              
    cout << Sign(a) + Sign(b) << endl;
    return 0;
}