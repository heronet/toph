#include <iostream>

int main() {
	size_t iter;
	std::cin >> iter;
	while(iter--) {
		int n, k, total = 0;
		std::cin >> n >> k;
		for(int i = 0; i != n; ++i) {
			int slice;
			std::cin >> slice;
			total += slice;
		}
		int extra = n - (total / k);
		std::cout << extra << std::endl;
	}
}
