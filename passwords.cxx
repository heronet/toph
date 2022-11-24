#include <iostream>
#include <string>

int main() {
    std::string input;
    while(std::getline(std::cin, input)) {
        size_t password_count = 0;
        bool up = false, low = false, dig = false;
        for(int i = 0; i != input.length(); ++i) {
            if(isupper(input[i]))
                up = true;
            else if(islower(input[i]))
                low = true;
            else if(isdigit(input[i]))
                dig = true;
            if(up && low && dig) {
                up = low = dig = false;
                ++password_count;
            }
        }
        std::cout << password_count << std::endl;   
    }
}
