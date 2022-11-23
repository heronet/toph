#include <iostream>
#include <algorithm>

int main() {
    int redundant;
    std::cin >> redundant;
    std::string str;
    std::cin >> str;
    int u = std::count(str.cbegin(), str.cend(), 'U');
    int s = std::count(str.cbegin(), str.cend(), 'S');
    int n = std::count(str.cbegin(), str.cend(), 'N');
    int min = std::min(std::min(u, s), n); 

    std::cout << min << std::endl;
}
