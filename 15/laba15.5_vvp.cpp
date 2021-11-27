#include <iostream>
using namespace std;

float Fact2(int N)
{
    int f = 1;
    if (N % 2 == 0){
        for(int i = 2; i < N+1; i += 2){
            f = f * i;
        };
    }
    else if (N % 2 != 0){
        for(int i = 1; i < N+1; i += 2){
            f = f * i;
        };
    };
    return f;
}

int main()
{
    int n;
    cout << "Введите число N: ";
    cin >> n;                              
    cout << "N!! = " << Fact2(n) << endl;
    return 0;
}