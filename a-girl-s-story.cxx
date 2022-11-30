#include <iostream>

int main() {
    int x, y;
    std::cin >> x >> y;
    int age = (y - x) / 2 + x;
    std::cout << age << std::endl;
}
