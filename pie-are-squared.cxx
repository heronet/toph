#include <iostream>

int main() {
    double r;
    std::cin >> r;
    constexpr double pi = 3.141592653589793;
    double area = pi * r * r;
    std::cout << area << std::endl;
}
