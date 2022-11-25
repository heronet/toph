#include <iostream>
#include <unordered_map>

int main() {
    std::unordered_map<std::string, std::string> reacts {
        {"Like", "(y)"},
        {"Love", "<3"},
        {"Care", "^_<3_^"},
        {"Haha", ":p"},
        {"Wow", ":O"},
        {"Sad", ":'("},
        {"Angry", ">_<"}
    };
    std::string input;
    std::cin >> input;
    std::cout << reacts[input] << std::endl;
}
