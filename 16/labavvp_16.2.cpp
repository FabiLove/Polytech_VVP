
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector <int> x;
	int n, a, d;
	cout << "Введите целое число n, большее 1: ";
	cin >> n;
	cout << "Введите первый член прогрессии а: ";
	cin >> a;
	cout << "Введите знаменатель d: ";
	cin >> d;
	for (int i = 0; i < n; i++){
		x.push_back(d);
		d = d * d;
	}
	cout << a << " ";
	for (int i = 0; i < n; i++){
		cout << x[i] * a << ' ';
	}
    return 0;
}