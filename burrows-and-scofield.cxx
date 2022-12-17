#include <iostream>
#include <string>

int main() {
	std::string s1, s2;
	std::cin >> s1 >> s2;

	int x = 0, y = 0;
	for(char ch: s1) {
		if(isdigit(ch)) {
			x += (ch - '0');
		}
	}
	for(char ch: s2) {
		if(isdigit(ch)) {
			y += (ch - '0');
		}
	}
	int a = x + y;
	int b = x * y;
	int c = abs(x - y);
	int med;

	if((a > b && a < c) || (a > c && a < b))
		med = a;
	else if((b > a && b < c) || (b < a && b > c))
		med = b;
	else
		med = c;
	std::string out = '"' + std::to_string(med) + '"';
	std::cout << out << std::endl;
}
