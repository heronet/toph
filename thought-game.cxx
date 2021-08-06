#include <iostream>

int main() {
    size_t tcase;
    std::cin >> tcase;

    for (size_t i = 0; i < tcase; i++)
    {
        size_t a, b;
        std::cin >> a >> b;
        if (((a + b) / 2) % 2 == 0)
            std::cout << "Sadia will be happy.\n";
        else 
            std::cout << "Oops!\n";
    }
    return 0;
}