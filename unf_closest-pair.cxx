#include <cstdio>
#include <iostream>
#include <vector>
#include <cmath>

int main() {
	std::vector<std::vector<double>> vec;
	int iter;
	std::cin >> iter;
	while (iter--) {
		double x, y;
		std::cin >> x >> y;
		vec.push_back(std::vector<double>{x, y});
	}
	double distance = 0;
	for(int i = 0; i != vec.size() - 1; ++i) {
		for(int j = i + 1; j != vec.size(); ++j) {
			double new_d = std::pow(vec[i][0] - vec[j][0], 2) +  std::pow(vec[i][1] - vec[j][1], 2);
			new_d = std::sqrt(new_d);
			if(distance == 0)
				distance = new_d;
			if(new_d < distance)
				distance = new_d;
		}
	}
	std::printf("%.14lf\n", distance);
}
