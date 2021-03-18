#include <iostream>
#include <algorithm>

int main() {
	size_t t_case;
	std::cin >> t_case;

	for (size_t i = 0; i != t_case; ++i) {
		std::string input;
		std::cin >> input;

		uint32_t balls = 0;
		uint32_t overs = 0;
		std::string valid_cars = "1234567890O";

		for (char ch : input) {
			auto it = std::find(valid_cars.cbegin(), valid_cars.cend(), ch);
			if (it != valid_cars.cend()) {
				++balls;
				if (balls == 6) {
					++overs;
					balls = 0;
				}
			}
		}
		if (overs > 0) {
			if (overs > 1) {
				if (balls > 1) {
					std::cout << overs << " OVERS " << balls << " BALLS\n";
				} else if (balls == 1) {
					std::cout << overs << " OVERS " << balls << " BALL\n";
				} else 
					std::cout << overs << " OVERS\n";
			}
			else {  
				if (balls > 1)
					std::cout << overs << " OVER " << balls << " BALLS\n";
				else if (balls == 1)
					std::cout << overs << " OVER " << balls << " BALL\n";
				else
					std::cout << overs << " OVER\n";
			}
		}
		else { // It's not been an over yet
			std::cout << balls << ((balls > 1) ? " BALLS" : " BALL") << std::endl;
		}
	}
}