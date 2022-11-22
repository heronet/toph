#include <iostream>

int main() {
    uint32_t tcase;
    std::cin >> tcase;
    while(tcase--) {
        uint32_t N;
        std::cin >> N;
        int max = N * 6;
        int min = N * 1;
        std::cout << max << " " << min << std::endl;
    }
}
