#include <iostream>

int main() {
	int age, wei, x;
	std::cin >> age >> wei >> x;
	size_t cost = (x * age) + (x * wei);
	std::cout << cost << std::endl;
}
