#include <iostream>
#include <vector>

int main() {
    int cash;
    std::cin >> cash;

    std::vector<int> notes;

    while(cash) {
        if (cash >= 500) {
            cash -= 500;
            notes.push_back(500);
        } else if(cash >= 100) {
            cash -= 100;
            notes.push_back(100);
        } else if(cash >= 50) {
            cash -= 50;
            notes.push_back(50);
        } else if(cash >= 10) {
            cash -= 10;
            notes.push_back(10);
        } else if(cash >= 5) {
            cash -= 5;
            notes.push_back(5);
        } else if(cash < 5) {
            for(int i = 0; i != cash; ++i)
                notes.push_back(1);
            cash = cash - cash;
        }
    }
    for(auto it = notes.cend() - 1; it >= notes.cbegin(); --it)
        std::cout << *it << " ";
    std::cout << std::endl;
}
