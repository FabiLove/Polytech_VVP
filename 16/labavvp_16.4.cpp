
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
    for(int i = n-1; i > 0; i--)
    {
        x.push_back(a[i]);
    }
    if(n % 2 == 0){
        for (int i = 0; i < n/2; i++){
            cout << a[i] << ' ';
		    cout << x[i] << ' ';
	    } 
    }
    else{
        for (int i = 0; i < n/2; i++){
            cout << a[i] << ' ';
		    cout << x[i] << ' ';
	    }
	    cout << a[n/2] << ' ';
    }
	
	
    return 0;
}
