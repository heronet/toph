#include <iostream>
#include <algorithm>

int main() {
    int tcase;
    std::cin >> tcase;
    while(tcase--) {
        int total_upcc = 0;
        std::string str;
        std::cin >> str;
        int u = std::count(str.cbegin(), str.cend(), 'U');
        int p = std::count(str.cbegin(), str.cend(), 'P');
        int c = std::count(str.cbegin(), str.cend(), 'C') / 2;
        int min = std::min(std::min(u, p), c); 
        
        if (min == u) {
            if (c >= u) {
                total_upcc = u;
            }
        }
        else if (min == p) {
            if (c >= p) {
                total_upcc = p;
            }
        }
        else if (min == c) {
            total_upcc = c;
        }
        std::cout << total_upcc << std::endl;
    }
}
