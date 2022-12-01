#include <iostream>
#include <vector>
#include <unordered_map>

int main() {
    std::unordered_map<int, int> map {
        {1, 1},
        {2, -1},
        {3, 0},
        {4, -2},
        {5, -1},
        {6, -3},
        {7, -2},
        {8, -4},
        {9, -3},
    };

    int tcase;
    std::cin >> tcase;
    while(tcase--) {
        long x;
        std::cin >> x;
        long ans;
        if(x >= 10) {
            int lastDigit = x % 10;
            long endsWithZero = x - lastDigit;
            ans = -(endsWithZero / 2);
            ans += map[lastDigit];
        } else {
            ans = map[x];
        }
        std::cout << ans << std::endl;
    }

}
