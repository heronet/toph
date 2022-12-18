#include <iostream>

int main() {
	int tc;
	std::cin >> tc;

	for(int it = 1; it <= tc; ++it) {
		int a, b, c, n;
		std::cin >> a >> b >> c >> n;
		int diff = b - a;
		if(diff == c - b) {
			for(int i = 1; i != n; ++i)
				a += diff;
			printf("Case %d: %d\n", it, a);
		} else {
			printf("Case %d: Error\n", it);
		}

	}
}
