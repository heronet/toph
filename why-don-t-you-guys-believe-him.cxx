#include <iostream>

int main() {
    int mem, yetl;
    std::cin >> mem >> yetl;
    int total = 0;
    while(mem--) {
        int x;
        std::cin >> x;
        total += x;
    }
    std::cout << (total > yetl ? "Yes": "No") << std::endl;

}
