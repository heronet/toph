#include <iostream>
#include <vector>


int main() {
    int it;
    std::cin >> it;
    std::vector<int> ivec;
    for(int i = 0; i != it; ++i) {
        int dum;
        std::cin >> dum;
        ivec.push_back(dum);
    }
    int current;
    for(int i = 0; i != it; ++i) {
        current = ivec[i];
        if(i + 1 != it) {
            if (current > ivec[i + 1])
            {
                std::cout << "No" << std::endl;
                return 0;
            }
        }
    }
    std::cout << "Yes\n";
}