#include <iostream>
using namespace std;

int PowerA3(int A)
{
    int B;
    B = A * A * A; 
    return B; 
}

int main()
{
    
    
    int ch;
    cout << "Введите число, которое нужно возвести в 3 степень: ";
    cin >> ch;
    cout << ch << "^3 = " << PowerA3(ch) << endl;
    return 0;
}