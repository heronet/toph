#include <iostream>

int main() {
    size_t tcase;
    std::cin >> tcase;
    while(tcase--) {
        int x;
        std::cin >> x;
        if(x == 1971)
            std::cout << "Joy Bangla" << std::endl;
        else if(x % 2 == 0)
            std::cout << "Bangla" << std::endl;
        else 
            std::cout << "Joy" << std::endl;
    }
}
