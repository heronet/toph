#include <iostream>

int main() {
    unsigned long long  number = 1;
    uint32_t level = 0;
    for(int i = 0; i != 4; ++i) {
        unsigned long long  x;
        std::cin >> x;
        number *= x;
    }
    uint16_t last_2_digits = number - ((number / 100) * 100);
    if (last_2_digits <= 24) {
        level = 0;
    }
    else if (last_2_digits <= 49) {
        level = 1;
    }
    else if (last_2_digits <= 74) {
        level = 2;
    }
    else if (last_2_digits <= 99) {
        level = 3;
    }
    std::cout << "level " << level << std::endl;
}
