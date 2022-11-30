#include <iostream>

int main() {
    int tcase;
    std::cin >> tcase;
    for(int i = 0; i != tcase; ++i) {
        int n, a, b, c;
        std::cin >> n;

        if(n % 3 == 0) {
            a = b = c = (n / 3);
        } else {
           int offset = 0;
           while(n % 3 != 0) {
               --n;
               ++offset;
           }
           a = b = c = (n / 3);
           while(offset != 0) {
               if(offset != 0) {
                   --offset;
                   ++c;
               }
               if(offset != 0) {
                   --offset;
                   ++b;
               }
               if(offset != 0) {
                   --offset;
                   ++a;
               }
           }
        }
        std::cout << a << " " << b << " " << c << std::endl;
    }
}
