#include <iostream>
#include <sstream>
#include <map>

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
    std::map<std::string, size_t> words;
    std::string tmp;

    while (ss >> tmp)
    {
        ++words[tmp];
    }
    size_t most_count = 0;
    std::string longest = "", shortest = "", most = "";
    for (const std::pair<std::string, size_t> &word : words)
    {
        if(!shortest.length()) 
            shortest = word.first;
        if (word.first.length() >= longest.length())
            longest = word.first;
        if (word.second >= most_count)
        {
            most_count = word.second;
            most = word.first;
        }
        if (word.first.length() <= shortest.length())
            shortest = word.first;
    }
    std::cout << longest << std::endl;
    std::cout << shortest << std::endl;
    std::cout << most << std::endl;
}
