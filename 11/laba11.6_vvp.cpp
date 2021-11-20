#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "Введите целое число: " << endl;
    cin >> a;
    if (a % 2 == 0){
        if(a / 100 != 0){
        cout << "Это трехзначное четное число";
        }
        else if(a / 10 != 0){
            cout << "Это двузначное четное число";
        }
        else{
            cout << "Это четное число";
        }
    }
    else{
        if(a / 100 != 0){
        cout << "Это трехзначное нечетное число";
        }
        else if(a / 10 != 0){
            cout << "Это двузначное нечетное число";
        }
        else{
            cout << "Это нечетное число";
        }
    };
    return 0;
}
