#include <iostream>

int main() {
    int tc;
    std::cin >> tc;
    while(tc--) {
        int x;
        std::cin >> x;
        int res = (x / 4) * (x / 4);
        std::cout << res << std::endl;
    }
}
