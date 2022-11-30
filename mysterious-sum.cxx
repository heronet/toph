#include <iostream>
#include <string>

int main() {
    int tcase;
    std::cin >> tcase;
    for(int i = 0; i != tcase; ++i) {
        uint32_t x, y;
        std::cin >> x >> y;

        uint32_t total = x + y;
        uint32_t suffix = x - y;

        std::string num = std::to_string(total) + std::to_string(suffix);
        std::cout << "Case " << (i + 1) << ": " << num << std::endl;
    }
}
