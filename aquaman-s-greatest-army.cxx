#include <iostream>

int main() {
    int n;
    std::cin >> n;
    size_t evens = 0;
    for(int i = 0; i != n; ++i) {
        int x;
        std::cin >> x;
        if(x % 2 == 0)
            ++evens;
    }
    std::cout << evens << std::endl;
}
