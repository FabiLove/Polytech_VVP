#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Введите количество секунд, которые прошли от начала суток: ";
    cin >> n;
    int k = n % 60;
    cout << k << " секунд прошло от начала последней минуты";

    return 0;
}
