#include <algorithm>
#include <iostream>

int main() {
    int cash;
    std::cin >> cash;
    int cost[3];
    for(int i = 0; i != 3; ++i) {
        std::cin >> cost[i];
    }
    int min = std::min(std::min(cost[0], cost[1]), cost[2]);
    if((cash - min) >= 10)
        std::cout << "Yes :-D" << std::endl;
    else
        std::cout << "No :-(" << std::endl;
}
