#include <iostream>

int main() {
	int year;
	std::cin >> year;
	if((year % 4 == 0) && (year % 400 != 0))
		std::cout << "Yes" << std::endl;
	else
		std::cout << "No" << std::endl;
}
