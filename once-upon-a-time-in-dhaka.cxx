#include <iostream>

int main() {
	int tcase;
	std::cin >> tcase;
	while (tcase--) {
		int w, g;
		std::cin >> w >> g;
		double open = static_cast<double>(w - g) / 2;
		std::cout << open << std::endl;
	}
}
