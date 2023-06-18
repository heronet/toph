#include <cctype>
#include <iostream>
#include <sstream>
#include <string>

bool is_upper_word(const std::string& word) {
	size_t count = 0;
	for(const char c: word) {
		if(std::isupper(c))
			++count;
	}
	return (count == word.length()) ? true : false;
}

int main() {
	std::string str, nstr, word;
	std::getline(std::cin, str);
	std::stringstream s(str);

	while (s >> word) {
		if(std::islower(word[0]) || !is_upper_word(word))	 {
			nstr.append(word);
			nstr.push_back(' ');
		}
	}
	std::cout << nstr << std::endl;
}
