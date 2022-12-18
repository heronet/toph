#include <iostream>
#include <vector>

int main() {
	int tcase;
	std::cin >> tcase;
	while(tcase--) {
		int n;
		std::cin >> n;
		std::vector<int> vec;
		for(int i = 0; i != n; ++i) {
			int x;
			std::cin >> x;
			if(x > 1)
				x -= 1;
			vec.push_back(x);
		}
		for(int x: vec) {
			std::cout << x << " ";
		}
		std::cout << std::endl;
	}
}
