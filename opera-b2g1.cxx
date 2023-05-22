#include <iostream>

int main() {
	int tc;
	std::cin >> tc;
	while (tc--) {
		int balance, price;
		std::cin >> balance >> price;
		int total = 0;
		while (balance >= price) {
			balance -= price;
			++total;
		}
		total += (total / 2);
		std::cout << total << std::endl;
	}
}
