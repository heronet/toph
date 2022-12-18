#include <iostream>
#include <algorithm>

int main() {
	int c;
	std::string s;
	std::cin >> c >> s;
	char state;
	for(char ch: s) {
		if(ch == state) {
			std::cout << "Change needed" << std::endl;
			return 0;
		}
		state = ch;
	}
	std::cout << "No change needed" << std::endl;

}
