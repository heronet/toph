#include <iostream>
#include <string>
#include <vector>

int main() {
	int r, c, total = 0;
	std::cin >> r >> c;
	std::vector<std::string> svec;
	for(int i = 0; i != r; ++i) {
		std::string s;
		std::cin >> s;
		svec.push_back(s);
	}
	for(int i = 0; i != r; ++i) {
		for(int j = 0; j != c; ++j) {
			if(svec[i][j] == '.') {
				if(j == 0) {
					if(svec[i][j + 1] == '.') {
						if(i == 0) {
							if(svec[i + 1][j] == '.')
								++total;
						} else if(i == r - 1) {
							if(svec[i - 1][j] == '.')
								++total;
						} else if(svec[i + 1][j] == '.' && svec[i - 1][j] == '.') {
							++total;
						}
					}
				} else if (j == c - 1) {
					if(svec[i][j - 1] == '.') {
						if(i == 0) {
							if(svec[i + 1][j] == '.')
								++total;
						} else if(i == r - 1) {
							if(svec[i - 1][j] == '.')
								++total;
						} else if(svec[i + 1][j] == '.' && svec[i - 1][j] == '.') {
							++total;
						}
					}
				} else {
					if(svec[i][j - 1] == '.' && svec[i][j + 1] == '.') {
						if(svec[i][j - 1] == '.') {
							if(i == 0) {
								if(svec[i + 1][j] == '.')
									++total;
							} else if(i == r - 1) {
								if(svec[i - 1][j] == '.')
									++total;
							} else if(svec[i + 1][j] == '.' && svec[i - 1][j] == '.') {
								++total;
							}
						}
					}
				}
			}
		}
	}
	std::cout << total << std::endl;
}
