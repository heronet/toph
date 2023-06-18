#include <iostream>

int main() {
	size_t count = 0;
	int x;
	while (count < 3) {
		std::cin >> x;
		++count;
	}
	std::cout << x << std::endl;
}
