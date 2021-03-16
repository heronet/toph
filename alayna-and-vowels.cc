#include <regex>
#include <iterator>
#include <iostream>
#include <string>

int main()
{
    std::string s;
    std::cin >> s;

    std::regex words_regex("[aeiouAEIOU]");
    auto words_begin =
        std::sregex_iterator(s.begin(), s.end(), words_regex);
    auto words_end = std::sregex_iterator();

    
    std::cout << std::distance(words_begin, words_end) << std::endl;

}