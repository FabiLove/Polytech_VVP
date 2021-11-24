#include <iostream>
using namespace std;

int main()
{
    int k;
    float p, s;
    cout << "Введите кол-во процентов P: ";
    cin >> p;
    s = 1000;
    k = 0;
    while(s < 1100){
        s = s + s * (p/100);
        k = k + 1;
    };
    cout << "Прошло "<< k << " мес." << endl << "Итоговый размер вклада " << s;
    

    return 0;
}

