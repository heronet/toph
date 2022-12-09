#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main() {
	int n;
	std::cin >> n;
	std::vector<std::string> bas;
	std::string longest;
	for(int i = 0; i != n; ++i) {
		std::string temp;
		std::cin >> temp;

		size_t na = std::count(temp.cbegin(), temp.cend(), 'a');
		if(na == 1)
			temp.push_back('a');
		else if(na % 2 != 0)
			temp.pop_back();

		if(temp.size() > longest.size())
			longest = temp;
		bas.push_back(std::move(temp));
	}
	
	for(const auto& s: bas) {
		size_t spaces = (size_t)(longest.size() / 2) - (size_t)(s.size() / 2);
		std::string out;
		for(int i = 0; i != spaces; ++i)
			out.push_back(' ');
		out += s;
		std::cout << out << std::endl;
	}
}
