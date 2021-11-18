#include <iostream>

using namespace std;

int main()
{
    int g, s;
    cout<<"Введите год: ";
    cin >> g;
    s = (g / 100) + 1; 
    cout << s <<"-е столетие.";

    return 0;
}
