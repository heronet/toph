#include <iostream>
#include <algorithm>

int main() {
	std::string eq;
	std::cin >> eq;
	int ppos = eq.find('+');
	int epos = eq.find('=');
	auto x = std::stoi(eq.substr(0, ppos));
	auto y = std::stoi(eq.substr(ppos + 1, epos - ppos - 1));
	auto z = std::stoi(eq.substr(epos + 1, eq.size() - epos));
	int total = x + y + z;
	int a, b;
	if(total % 2 == 0) {
		a = total / 2;
		b = a;
		printf("0+%d=%d\n", a, b);
	} else {
		printf("Impossible\n");
	}
}
