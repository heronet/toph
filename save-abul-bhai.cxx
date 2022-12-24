#include <iostream>

int main() {
	int n, p, q;
	std::cin >> n >> p >> q;
	std::string s;
	std::cin >> s;
	int win = 0, loss = 0;
	for(int i = 0; i != n; ++i) {
		if(s[i] == s[i + 1]) {
			if(s[i] == '0') {
				++loss;
			} else {
				++win;
			}
		} else {
			if(s[i] == '1') {
				win = 0;
			} else {
				loss = 0;
			}
		}
		if(win == p - 1 || loss == q - 1) {
			std::cout << "Abul Bhai is in danger" << std::endl;
			return 0;
		}
	}
	std::cout << "Abul Bhai is safe" << std::endl;

}
