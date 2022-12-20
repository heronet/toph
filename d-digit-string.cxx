#include <iostream>

int main() {
	int tc;
	std::cin >> tc;
	for(int t = 1; t <= tc; ++t) {
		int n;
		std::cin >> n;
		printf("Case %d: ", t);
		while (n--) {
			std::cout << 0;
		}
		std::cout << std::endl;
	}
}
