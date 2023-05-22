#include <iostream>

int main() {
	int m, n, seats = 0;
	std::cin >> m >> n;
	while(m--) {
		for(int i = 0; i != n; ++i) {
			int x;
			std::cin >> x;
			if(x == 0) ++seats;
		}
	} 
	std::cout << seats << std::endl;
}
