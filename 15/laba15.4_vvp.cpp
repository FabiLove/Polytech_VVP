#include <iostream>
using namespace std;

int Quarter(float X, float Y)
{
    int S;
    
    if (X > 0){
        if (Y > 0){
            S = 1;
        }
        else{
            S = 4;
        }
    }
    else if (X < 0){
        if (Y > 0){
            S = 2;
        }
        else{
            S = 3;
        }
    }
    return S;
}

int main()
{
    float x, y;
    cout << "Введите координаты точки x, y: ";
    cin >> x >> y;                              
    cout << Quarter(x, y) << " - я четверть." << endl;
    return 0;
}