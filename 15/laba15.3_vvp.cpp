#include <iostream>
using namespace std;

float RingS(float R1, float R2)
{
    float S;
    float pi = 3.14;
    S = 3.14 * ((R1 * R1) - (R2 * R2));
    return S;
}

int main()
{
    float a, b;
    for(int i = 0; i < 3; i++){
        cout << "Введите два радиуса R1 и R2, где R1 > R2: ";
        cin >> a >> b;                              
        cout << "S = " << RingS(a, b) << endl;
    }
    return 0;
}