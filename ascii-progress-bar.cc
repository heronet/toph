#include <iostream>

int main() {
    double input;
    std::cin >> input;
    int pluses = input / 10;
    
    std::string bar = "[";
    for(int i = 0; i != pluses; ++i)
        bar.push_back('+');
    for(int t = 0; t != 10 - pluses; ++t)
        bar.push_back('.');
    bar.push_back(']');
    std::cout << bar << ' ' << int(input) << "%\n";
}