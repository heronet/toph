#include <iostream>

int main() {
	uint16_t year;
	std::cin >> year;

	bool is_leap = false;

	if ((year % 400) == 0)
		is_leap = true;
	else if (((year % 4) == 0) && ((year % 100) != 0))
		is_leap = true;
	std::cout << ((is_leap) ? "Yes" : "No") << std::endl;
}