#include <iostream>
#include <unordered_map>

int main() {
	int tc;
	std::cin >> tc;
	for(int t = 0; t != tc; ++t) {
		std::unordered_map<std::string, size_t> map;
		std::unordered_map<std::string, size_t> priority;
		for(int i = 0; i != 5; ++i) {
			std::string s;
			int num;
			std::cin >> s >> num;
			map[s] += num;
			priority[s] = i;
		}
		std::string most_word;
		size_t most_count = 0;
		for(const auto& pair: map) {
			if(pair.second > most_count) {
				most_count = pair.second;
				most_word = pair.first;
			}
			if(pair.second == most_count) {
				if(priority[pair.first] < priority[most_word]) {
					most_word = pair.first;
				}
			}
		}
		std::cout << "Case " << (t+1) << ": " << most_word << std::endl;
	}
}
