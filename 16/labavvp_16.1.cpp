#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector <int> x;
	int n;
	int a = 1;
	cout << "Введите целое число n:";
	cin >> n;
	for (int i = 0; i < n; i++){
		x.push_back(a);
		a = a + 2;
	}
	for (int i = 0; i < n; i++){
		cout << x[i] << ' ';
	}
    return 0;
}