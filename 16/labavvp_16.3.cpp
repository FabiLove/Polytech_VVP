
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector <int> x;
	int n, a, b, c;
	cout << "Введите целое число n, большее 2: ";
	cin >> n;
	cout << "Введите а и b: ";
	cin >> a >> b;
	c = a + b;
	x.push_back(a);
	x.push_back(b);
	x.push_back(c);
	for (int i = 0; i < n; i++){
	    c = c * 2;
		x.push_back(c);
	}
	for (int i = 0; i < n; i++){
		cout << x[i] << ' ';
	}
	
    return 0;
}
