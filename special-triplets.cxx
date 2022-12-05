#include <iostream>

int main() {
    int x;
    std::cin >> x;
    if(x % 3 == 0) {
        int n = x / 3;
        std::printf("%d %d %d\n", n, n, n);
    } else if(x % 2 == 0) {
        std::cout << (x/2) << " " << ((x/2)-1) << " " << 1 << " "<< std::endl;
    } else {
        std::cout << ((x-1) / 2) << " " << (x/2) << " " << 1 << std::endl;
    }
}
