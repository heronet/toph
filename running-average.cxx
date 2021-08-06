#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;
    std::vector<int> nums;

    for (size_t i = 0; i < n; i++)
    {
        int in;
        std::cin >> in;
        nums.push_back(in);

        int num_total = 0;
        for(int& x: nums) {
            num_total += x;
        }

        double val = static_cast<double>(num_total) / nums.size();
        std::cout << val << std::endl;
    }
    
}