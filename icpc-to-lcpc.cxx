#include <iostream>

int main() {
	size_t year;
	std::cin >> year;

	if(year <= 1582) {
		if(year % 4 == 0)
			std::cout << "I can participate in LCPC" << std::endl;
		else
			std::cout << "I have to travel back to the past" << std::endl;
		return 0;
	} else if(year > 1582) {
		if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
			std::cout << "I can participate in LCPC" << std::endl;
		else
			std::cout << "I have to travel back to the past" << std::endl;
	}
}
