#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Введите номер дня года в пределах 1 - 365: ";
    cin >> n;
    int k = (n % 7);
    cout << k;
    if (k == 0){
        cout << "воскресенье";
    }
    else if (k == 1){
        cout << "понедельник";
    }
        else if (k == 2){
            cout << "вторник";
        }
    else if (k == 3){
        cout << "среда";
    }
    else if (k == 4){
        cout << "четверг";
    }
    else if (k == 5){
        cout << "пятница";
    }
    else if (k == 6){
        cout << "суббота";
    }

    return 0;
}