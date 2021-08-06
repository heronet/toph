#include <iostream>

int main() {
    std::string a, b;
    std::cin >> a >> b;

    const std::string& small = a > b ? b : a;

    for(size_t i = 0; i != small.size(); ++i) {
        if((a[a.size() - 1 - i] - '0') + (b[b.size() - 1 - i] - '0') >= 10) {
            std::cout << "Yes\n";
            return 0;
        }
    }
    std::cout << "No\n";
    return 0;
}