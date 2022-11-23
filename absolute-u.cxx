#include <iostream>

int main() {
    uint32_t tcase;
    std::cin >> tcase;
    while(tcase--) {
        int32_t x;
        std::cin >> x;
        std::cout << std::abs(x) << std::endl;
    }
}
