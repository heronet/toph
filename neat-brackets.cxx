#include <iostream>
#include <stack>

int main() {
    std::stack<char> stack;
    std::string str;
    std::cin >> str;
    for(char ch: str) {
        if(ch == '(')
            stack.push(ch);
        else {
            if(stack.empty()) {
                std::cout << "No" << std::endl;
                return 0;
            }
            stack.pop();
        }
    }
    if(stack.size())
        std::cout << "No" << std::endl;
    else
        std::cout << "Yes" << std::endl;
}
