#include <iostream>
using namespace std;

int main()
{
	int a,b,c;
	cin >> a;
	cin >> b;
	
	c = a/b;
	
	int d = a - c * b;
	
	cout << c << " ";
	cout << d << " ";
	cout << b;
}
