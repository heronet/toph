#include <iostream>
#include <vector>
#include <cmath>
std::vector<int> primes(int n)
{
    std::vector<bool> is_prime(n+1,true);
    for(auto divisor=2; divisor*divisor <= n; ++divisor)
        for(auto candidate=divisor*divisor; candidate <= n; candidate+=divisor)
            is_prime[candidate]=false;
    std::vector<int> result;
    for(auto candidate=2; candidate <= n; ++candidate)
        if(is_prime[candidate]) result.push_back(candidate);
    return result;
}
int main() {
    std::vector<int> nums = primes(500000);
    int x;
    std::cin >> x;
    std::cout << nums[x - 1] << std::endl;
}
