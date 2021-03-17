#include <iostream>

int main() {
    std::string input, password;
    std::cin >> input;
    for(size_t i = 0; i != input.size(); ++i) {
        if(i == 0) {
            password.push_back(toupper(input[i]));
            continue;
        }
        else if(input[i] == 's')
            password.push_back('$');
        else if(input[i] == 'i')
            password.push_back('!');
        else if(input[i] == 'o')
            password.append("()");
        else
            password.push_back(input[i]);
    }
    password.push_back('.');
    std::cout << password << std::endl;
}