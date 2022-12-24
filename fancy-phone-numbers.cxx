#include <iostream>
#include <unordered_map>

std::string fancy(std::string& str) {
		// flags
		size_t seq_count = 0;
		size_t same_count = 0;
		size_t two_same_count = 0;
		std::unordered_map<char, size_t> map;

		for(int i = 0; i != 10; ++i) {
			// sequential four
			if(str[i] + 1 == str[i + 1])
				seq_count += 1;
			else
				seq_count = 0;
			if(seq_count == 3)
				return "Fancy";
			
			// same three
			if(str[i] == str[i + 1]) {
				same_count += 1;
				two_same_count += 1;
			}
			else
				same_count = 0;
			if(same_count == 2)
				return "Fancy";

			// two same
			if (two_same_count > 1)
				return "Fancy";

			++map[str[i]];
		}
		// at least five
		for(const auto& pair: map) {
			if(pair.second > 4)
				return "Fancy";
		} 
		return "Not Fancy";

}
int main() {
	int tc;
	std::cin >> tc;
	while(tc--) {
		std::string str;
		std::cin >> str;
		std::cout << fancy(str) << std::endl;
	}
}
