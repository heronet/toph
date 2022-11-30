#include <iostream>
#include <vector>

int main() {
    int tcase;
    std::cin >> tcase;
    while(tcase--) {
        int x;
        std::cin >> x;

        bool one = true;
        int total = 0;
        for(long i = 1; i <= x; ++i) {
            if(one)
                total += 1;
            else
                total += -2;
            one = !one;
        }
        std::cout << total << std::endl;
    }

}
