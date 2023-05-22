#include <iostream>

int main() {
	int tc;
	std::cin >> tc;
	for(int i = 0; i != tc; ++i) {
		int a, b;
		char s;
		std::cin >> a >> s >> b;
		std::cout << "Case " << (i+1) << ": ";
		switch (s) {
			case '*':
				std::cout << (a*b) << std::endl;
				break;
			case '/':
				std::cout << (a/b) << std::endl;
				break;
			case '+':
				std::cout << (a+b) << std::endl;
				break;
			case '-':
				std::cout << (a-b) << std::endl;
				break;
			default:
				break;
		}
	}
}
