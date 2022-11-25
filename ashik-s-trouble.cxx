#include <iostream>

int main() {
    int tcase;
    std::cin >> tcase;
    while(tcase--) {
        uint32_t length, squares;
        std::cin >> length >> squares;
        size_t area = length * length;
        double multiplier = ((float)squares / 2) + 0.5;
        size_t total_area = area * multiplier;
        std::cout << total_area << std::endl;
    }
}
