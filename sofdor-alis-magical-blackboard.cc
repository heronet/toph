#include <iostream>

int main() {
    int t_case;
    std::cin >> t_case;
    for(int i = 0; i != t_case; ++i) {
        int base;
        int times;
        unsigned long long total = 0;
        std::cin >> base >> times;
        for(int j = 0; j != times; ++j)
            total += base;
        std::cout << total << std::endl;
    }
}