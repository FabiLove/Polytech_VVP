#include <iostream>
using namespace std;

int main()
{
    int a, b, x;
    cout << "Два целых числа: ";
    cin >> a >> b;
    if (a != b){
            if(a > b){
                b = a;
            }
            else{
                a = b;
            };
            cout << a << b << endl;
    }
    else{
        a = 0;
        b = 0;
        cout << a << b << endl;
    }
    return 0;
}
