#include <iostream>
#include <algorithm>

int main() {
	int tc;
	std::cin >> tc;
	for(int i = 1; i <= tc; ++i) {
		std::string s;
		std::cin >> s;
		std::string::size_type upper = std::count_if(s.cbegin(), s.cend(), [](char ch) { return std::isupper(ch); });
		std::string::size_type lower = std::count_if(s.cbegin(), s.cend(), [](char ch) { return std::islower(ch); });
		std::string::size_type digit = std::count_if(s.cbegin(), s.cend(), [](char ch) { return std::isdigit(ch); });

		int ans = 0;
		if(upper && lower) {
			ans = std::min(upper, lower);
		}
		ans += digit;
		printf("Case %d: %d\n", i, ans);
	}
}
