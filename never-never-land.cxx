#include <iostream>
#include <algorithm>

int main() {
    std::string str;
    std::cin >> str;
    std::string::difference_type count = std::count(str.cbegin(), str.cend(), 'n');
    std::cout << count << std::endl;
}
