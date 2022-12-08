#include <iostream>
using namespace std;

int main()
{
	int z;
	cin >> z;
	int x[3];
	int max = x[0];
	
	for(int i = 0; i < z; i++)
	{
		int x[i];
		cin >> x[i];
		
		if(x[i]>max){
			max = x[i];
		}
	}cout << max;

}
