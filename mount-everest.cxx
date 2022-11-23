#include <iostream>

int main() {
    int tcase;
    std::cin >> tcase;
    constexpr uint16_t height = 8848;
    while (tcase--) {
        uint16_t x;
        std::cin >> x;
        std::cout << (height - x) << std::endl;
    }
}
