#include <iostream>

int main() {
    long x, y, z;
    std::cin >> x >> y >> z;
    long max = std::max(std::max(x, y), z);
    std::cout << max << std::endl;
}
