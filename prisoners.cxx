#include <iostream>
#include <iomanip>

int main() {
	int tc;
	std::cin >> tc;
	while(tc--) {
		double n;
		std::cin >> n;
		double div = 1.0 / n;
		double sum = 0.0;

		while(n--) {
			int x;
			std::cin >> x;
			sum += x * div;
		}
		std::cout << std::fixed << std::setprecision(17) <<sum << std::endl;
	}
}
