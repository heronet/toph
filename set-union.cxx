#include <iostream>
#include <set>

int main() {
	int x, y;
	std::cin >> x >> y;
	std::set<int> set;
	int z = x + y;
	while(z--) {
		int n;
		std::cin >> n;
		set.emplace(n);
	}
	for(const int num: set) {
		std::cout << num;
		if(num != *(--set.end()))
			std::cout << " ";
	}
	std::cout << std::endl;
}
