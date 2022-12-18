#include <iostream>
#include <algorithm>

int main() {
	std::string s1, s2;
	std::cin >> s1 >> s2;
	std::reverse(s1.begin(), s1.end());
	std::reverse(s2.begin(), s2.end());
	for(auto it = s1.end() - 1; it != s1.begin(); --it) {
		if(*it == '0')
			s1.pop_back();
		else
			break;
	}
	for(auto it = s2.end() - 1; it != s2.begin(); --it) {
		if(*it == '0')
			s2.pop_back();
		else
			break;
	}
	
	std::string s_num;
	if(s1.size() < s2.size())
		std::swap(s1, s2);
	size_t iter = s2.size(); 
	int carry = 0;
	for(int i = 0; i != s2.size(); ++i) {
		int x = s1[i] - '0';
		int y = s2[i] - '0';
		int sum = x + y + carry;

		if(sum >= 10) {
			int digit = sum % 10;
			carry = sum / 10;
			s_num.push_back(digit + '0');

		} else {
			s_num.push_back(sum + '0');
		}
	}
	for(int i = s2.size(); i != s1.size(); ++i) {
		int x = s1[i] - '0';
		int sum = x + carry;
		if(sum >= 10) {
			int digit = sum % 10;
			carry = sum / 10;
			s_num.push_back(digit + '0');

		} else {
			s_num.push_back(sum + '0');
		}
	}
	if(carry > 0)
		s_num.push_back(carry + '0');
	std::reverse(s_num.begin(), s_num.end());
	std::cout << s_num << std::endl;
}
