#include <iostream>
#include <vector>

int main() {
	int players;
	std::cin >> players;
	std::vector<int> goals;

	for(int i = 0; i != players; ++i) {
		int x;
		std::cin >> x;
		goals.push_back(x);
	}
	int highest = 0;
	for(int i = 0; i != players; ++i) {
		int x;
		std::cin >> x;
		x = goals[i] * 20 - x * 10;
		if(x > highest)
			highest = x;
	}
	if(highest > 0)
		std::cout << highest << std::endl;
	else
		std::cout << 0 << std::endl;
}
