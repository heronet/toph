#include <iostream>
#include <vector>
#include <algorithm>

int main() {
	int n, k;
	std::cin >> n >> k;
	std::vector<int> hours;
	for(int i = 0; i != n; ++i) {
		int x;
		std::cin >> x;
		hours.push_back(x);
	}
	std::sort(hours.begin(), hours.end());
	std::cout << hours[n - k] << std::endl;
}
