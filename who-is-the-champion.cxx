#include <iostream>

int main() {
	size_t a, b;
	std::cin >> a >> b;
	if(a > b) {
		std::cout << "Champion\nRunner up" << std::endl;
	} else 
		std::cout << "Runner up\nChampion" << std::endl;
}
