#include <iostream>

int main() {
	int tc;
	std::cin >> tc;

	while(tc--) {
		size_t d, k, upset = 0;
		std::cin >> d >> k;
		while(d--) {
			int n;
			std::cin >> n;
			int dupset = n - k;
			if(dupset > 0)
				upset += dupset;
		}
		std::cout << upset << std::endl;
	}
}
