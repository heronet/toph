#include <iostream>
#include <sstream>
#include <algorithm>
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
    std::string longest = "", shortest = "", most = "";
    size_t most_count = 0;

    std::string tmp;
    while (ss >> tmp)
    {
        auto tmpcpy = tmp;
        std::transform(tmpcpy.begin(), tmpcpy.end(), tmpcpy.begin(), ::tolower);
        ++words[tmpcpy];
        if(!shortest.length()) 
            shortest = tmp;
        if (tmp.length() > longest.length())
            longest = tmp;
        if (tmp.length() < shortest.length())
            shortest = tmp;
        if (words[tmpcpy] > most_count)
        {
            most_count = words[tmpcpy];
            most = tmp;
        }
    }

    std::cout << longest << std::endl;
    std::cout << shortest << std::endl;
    std::cout << most << std::endl;
}
