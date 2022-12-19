#include <cstdio>
#include <iostream>

int main() {
	int tc;
	std::cin >> tc;
	for(int i = 0; i != tc; ++i) {
		float m, p, n;
		std::cin >> m >> p >> n;
		int total = m - p / 100 * n;
		if(total >= 0)
			printf("Case %d: YES\n", i+1);
		else
			printf("Case %d: NO\n", i+1);
	}
}
