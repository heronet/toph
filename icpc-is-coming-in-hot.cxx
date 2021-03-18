#include <iostream>
#include <map>

int main() {
	std::string input;
	std::cin >> input;

	std::map<char, size_t> repo;

	for (char ch : input)
		++repo[ch];

	int biggest = 0;
	char output = '0';
	for (const auto& each : repo) {
		if (each.second > biggest) {
			biggest = each.second;
			output = each.first;
		}
	}
	std::cout << output << std::endl;
}