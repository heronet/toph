#include <iostream>

int main() {
    short it;
    std::cin >> it;

    std::string plain;
    std::cin >> plain;

    std::string cc;
    for(int i = plain.size() - it; i != plain.size(); ++i) {
        cc.push_back(plain[i]);
    }
    for (int i = 0; i != plain.size() - it; ++i)
    {
        cc.push_back(plain[i]);
    }
    std::cout << cc << std::endl;

}