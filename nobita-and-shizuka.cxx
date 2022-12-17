#include <iostream>

int main() {
	int tcase;
	std::cin >> tcase;
	for(int t = 1; t <= tcase; ++t) {
		std::string str;
		std::cin >> str;

		int count = 0;
		bool one_found = false, zero_found = false;

		for(int i = 0; i != str.size(); ++i) {
			if(str[i] == '1') {
				if(!zero_found)
					one_found = true;
			}
			if(str[i] == '0') {
				if(one_found)
					zero_found = true;
			}
			if(one_found && zero_found && str[i] == '1') {
				++count;
				zero_found = false;
			}
		}
		printf("Case %d: %d\n", t, count);
	}
}
