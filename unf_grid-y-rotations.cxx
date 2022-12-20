#include <iostream>
#include <vector>

int main() {
	int m, n;
	std::cin >> m >> n;

	std::vector<std::vector<int32_t>> matrix;
	for(int i = 0; i != m; ++i) {
		std::vector<int> vec;
		for(int j = 0; j != n; ++j) {
			int x;
			std::cin >> x;
			vec.push_back(x);
		}
		matrix.push_back(std::move(vec));
	}

	int q;
	std::cin >> q;

	std::vector<std::vector<int32_t>> rc;
	for(int i = 0; i != q; ++i) {
		std::vector<int> vec;
		int x, y;
		std::cin >> x >> y;
		vec.push_back(x);
		vec.push_back(y);
		rc.push_back(std::move(vec));
	}
	for(auto& vec: rc) {
		int x = vec[0];
		int y = vec[1];
		auto matrix2 = matrix;

		int& n01 = matrix2[x-1][y-1];
		int& n02 = matrix2[x-1][y];
		int& n03 = matrix2[x-1][y+1];
		int& n11 = matrix2[x][y-1];
		int& n12 = matrix2[x][y];
		int& n13 = matrix2[x][y+1];
		int& n21 = matrix2[x+1][y-1];
		int& n22 = matrix2[x+1][y];
		int& n23 = matrix2[x+1][y+1];

		int r01 = n01;
		int r02 = n02;
		int r03 = n03;
		int r11 = n11;
		int r12 = n12;
		int r13 = n13;
		int r21 = n21;
		int r22 = n22;
		int r23 = n23;

		n01 = r11;
		n02 = r01;
		n03 = r02;
		n11 = r21;
		n12 =	r12;
		n13 =	r03; 
		n21 =	r22; 
		n22 = r23;
		n23 = r13;

		for(const auto& mat: matrix2) {
			for(const int elem: mat) {
				std::cout << elem << " ";
			}
			std::cout << std::endl;
		}

	}
}
