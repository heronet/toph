#include <iostream>
#include <unordered_map>

int main() {
	std::unordered_map<std::string, uint32_t> map;
	std::string s;
	while(std::cin >> s)
		++map[s];
	std::string most; 
	int count = 0;

	for(auto& pair: map) {
		if(pair.second > count) {
			count = pair.second;
			most = pair.first;
		}
	}
	std::cout << most << std::endl;
}
