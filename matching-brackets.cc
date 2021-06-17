#include <iostream>
#include <map>
#include <vector>

int main() {
    auto map = std::map<char, char> {
        {'[', ']'},
        {'{', '}'},
        {'(', ')'},
    };
    std::string input;
    std::vector<char> collection;
    collection.reserve(25);
    std::cin >> input;

    if(input.empty()) {
        std::cout << "No\n";
        return 0;
    }
    for(auto& val: input) {
        if (val == '[' || val == '{' || val == '(')
        {
            collection.push_back(val);
        }
        else if(val == ']' || val == '}' || val == ')') {
            if(map[collection[collection.size() - 1]] == val) {
                collection.pop_back();
            } else {
                collection.push_back('f');
                break;
            }
        }
        else {
            collection.push_back('f');
            break;
        }
    }
    std::cout << (collection.empty() ? "Yes\n": "No\n");
}