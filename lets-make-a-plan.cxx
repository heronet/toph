#include <iostream>

int main() {
    int tcase;
    std::cin >> tcase;

    while(tcase--) {
        std::string f1, f2, f3 ,f4;
        std::cin >> f1 >> f2 >> f3 >> f4;
        if(f1 == f3 || f2 == f4 || f1 == f4 || f2 == f3)
            std::cout << "Possible" << std::endl;
        else
            std::cout << "Oh no!, such a shame" << std::endl;
    }
}
