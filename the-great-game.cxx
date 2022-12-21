#include <iostream>

int main() {
	int tc;
	std::cin >> tc;
	for(int i = 0; i != tc; ++i) {
		std::string s;
		int total = 0;
		std::cin >> s;
		for(char ch: s)
			total += (ch - '0');
		std::string safe;
		if((total % 2 != 0 && s.size() % 2 != 0) || (total % 2 == 0 && s.size() % 2 == 0))
			safe = "Safe to push";
		else
			safe = "BOOM";
		printf("Case %d: %s\n", i+1, safe.c_str());
	}
}
