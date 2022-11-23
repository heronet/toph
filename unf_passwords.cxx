#include <iostream>
#include <string>

int main() {
    std::string input;
    std::cin >> input;
    int up, low, dig;
    for(std::string::const_iterator it = input.cbegin(); it !=  input.cend(); ++it) {
        if(isupper(*it))
            ++up;
        else if(islower(*it))
            ++low;
        else if(isdigit(*it))
            ++dig;
    }
    std::cout << std::min(std::min(up, low), dig) << std::endl;
}
