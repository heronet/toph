#include <iostream>
#include <vector>
#include <algorithm>

int main() {
  int num;
  std::cin >> num;
  for(int i = 0; i != num; ++i) {
    std::vector<int> ivec;
    int a;
    for(int j = 0; j != 3; ++j) {
      std::cin >> a;
      ivec.push_back(a);
    }
    std::sort(ivec.begin(), ivec.end());
    std::cout << ((ivec[0] + ivec[1] >= ivec[2]) ? "Yes" : "No") << std::endl;
  }
}
