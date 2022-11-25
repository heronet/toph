#include <iostream>
#include <string>
#include <unordered_map>

int main() {
    std::unordered_map<std::string, std::string> deps {
        {"115", "CSE"},
        {"141", "EEE"},
        {"116", "BBA"},
        {"117", "LLB"},
        {"114", "English"},
        {"111", "Economics"}
    };
    std::unordered_map<std::string, std::string> terms {
        {"1", "Spring"},
        {"2", "Summer"},
        {"3", "Autumn"}
    };
    uint32_t tcase;
    std::cin >> tcase;
    while(tcase--) {
        std::string id;
        std::cin >> id;
        std::string year = "20" + id.substr(0, 2);  
        std::string dep = deps[id.substr(4, 3)];
        std::string term = terms[id.substr(2, 1)];

        std::string decoded = dep + " " + term + " " + year;
        std::cout << decoded << std::endl;
    }
}
