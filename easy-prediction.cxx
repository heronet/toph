#include <iostream>

int main() {
	int tcase;
	std::cin >> tcase;
	bool alice = false;
	while(tcase--) {
		int n;
		std::cin >> n;
		for(int i = 0; i != n; ++i) {
			int x;
			std::cin >> x;
			if(x != 0)
				alice = !alice;
		}
		if(alice)
			std::cout << "Alice" << std::endl;
		else
			std::cout << "Bob" << std::endl;
		alice = false;
	}
}
