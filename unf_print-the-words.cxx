#include <iostream>
#include <sstream>
#include <algorithm>
#include <string>
#include <unordered_map>

int main()
{
    std::string str;
    std::getline(std::cin, str);
    for (char &ch : str)
    {
        if (ch == '.' || ch == ',' || ch == ';')
            ch = ' ';
    }
    std::stringstream ss(str);
    std::unordered_map<std::string, size_t> words;
    std::unordered_map<std::string, size_t> priority;
    std::unordered_map<std::string, std::string> capital;
    std::string longest = "", shortest = "";
    size_t most_count = 0;
    int counter = 0;

    std::string tmp;
    while (ss >> tmp)
    {
        auto tmpcpy = tmp;
        std::transform(tmpcpy.begin(), tmpcpy.end(), tmpcpy.begin(), ::tolower);
        ++words[tmpcpy];
        ++counter;
        priority[tmpcpy] = counter;
        capital[tmpcpy] = tmp;
        if(!shortest.length()) 
            shortest = capital[tmpcpy];
        if (tmp.length() > longest.length())
            longest = capital[tmpcpy];
        if (tmp.length() < shortest.length())
            shortest = capital[tmpcpy];
    }

    std::string most_word;
    for(const auto& pair: words) {
        if(pair.second > most_count) {
            most_count = pair.second;
            most_word = capital[pair.first];
        }
        if(pair.second == most_count) {
            if(priority[pair.first] < priority[most_word]) {
                most_word = capital[pair.first];
            }
        }
    }

    std::cout << longest << std::endl;
    std::cout << shortest << std::endl;
    std::cout << most_word << std::endl;
}
