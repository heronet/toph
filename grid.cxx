#include <iostream>

int main() {
	int tc;
	std::cin >> tc;
	for(int i = 1; i <= tc; ++i) {
		int h, w;
		std::cin >> h >> w;
		std::printf("Case %d:\n", i);
		for(int x = 0; x != h; ++x) {
			for(int y = 0; y != w; ++y) {
				std::cout << '*';
			}
			std::cout << std::endl;
		}
	}
}
