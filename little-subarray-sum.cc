#include <iostream>
#include <vector>

int main() {
    std::vector<int> ivec;

    size_t n, a, b;
    std::cin >> n >> a >> b;
    for(int i = 0; i != n; ++i) {
        int dum;
        std::cin >> dum;
        ivec.push_back(dum);
    }
    size_t sum = 0;
    for(int t = a; t <= b; ++t)
        sum += ivec[t];
    std::cout << sum << std::endl;
}