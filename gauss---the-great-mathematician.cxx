#include <iostream>

int main() {
	int tc;
	std::cin >> tc;

	for(int it = 1; it <= tc; ++it) {
		int a, b, n;
		std::cin >> a >> b >> n;
		int diff = b - a;
		int sum = a;
		while(a != n) {
			a += diff;
			sum += a;
		}
		std::cout << sum << std::endl;
	}
}
