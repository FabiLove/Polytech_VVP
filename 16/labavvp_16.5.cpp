
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector <int> a;
    vector <int> x;
	int n;
	cout << "Введите целое число n: ";
	cin >> n;
	cout << "Заполните массив: ";
	for(int i = 1; i < n+1; i++)
    {
        int c;
        cin >> c;
        a.push_back(c);
    }
    
    cout << "Элементы с нечетными номерами: ";
    for (int i = 1; i < n; i+=2){
            cout << a[i] << ' ';
	} 
    cout << endl;
    cout << "Элементы с четными номерами: ";
    for (int i = 0; i < n; i+=2){
            cout << a[i] << ' ';
	} 
    
    return 0;
}
