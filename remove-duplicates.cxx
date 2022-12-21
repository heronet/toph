#include <iostream>
#include <unordered_map>

int main() {
	int tc;
	std::cin >> tc;
	for(int i = 0; i != tc; ++i) {
		std::unordered_map<char, size_t> map;
		std::unordered_map<char, bool> printed;
		std::string s;
		std::cin >> s;
		for(char ch: s)
			++map[ch];
		printf("Case #%d:\n", i+1);
		for(char ch: s) {
			if(!printed[ch]) {
				std::cout << ch << " " << map[ch] << std::endl;
				printed[ch] = true;
			}
		}
	}
}
