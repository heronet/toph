#include <iostream>

int main() {
    int tcase;
    std::cin >> tcase;
    while(tcase--) {
        std::string str;
        int n = 0, e = 0, p = 0, a = 0, l = 0;
        std::cin >> str;
        for(char ch: str) {
            if(ch == 'n')
                ++n;
            else if(ch == 'e')
                ++e;
            else if(ch == 'p')
                ++p;
            else if(ch == 'a')
                ++a;
            else if(ch == 'l')
                ++l;
        }
        if(n && e && p && a && l)
            std::cout << "Maile Nepal banauna sakchhu!!" << std::endl;
        else
            std::cout << "Hami sabai milera Nepal Banau hai!!" << std::endl;
    }
}
