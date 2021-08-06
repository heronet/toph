#include <iostream>
#include <bitset>
#include <algorithm>

int main() {
    uint32_t input;
    std::cin >> input;
    
    const auto bin = std::bitset<32>(input).to_string();
    const uint32_t one_count = std::count(bin.cbegin(), bin.cend(), '1');
    
    for (size_t i = 0; i < input; i++)
    {
        const auto bin = std::bitset<32>(i).to_string();
        const auto lowest = std::count(bin.cbegin(), bin.cend(), '1');

        if (lowest == one_count) {
            std::cout << i << std::endl;
            return 0;
        }
    }
}