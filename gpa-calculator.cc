#include <iostream>
#include <iomanip>

int main() {
    int num;
    std::cin >> num;
    for(int t_case = 0; t_case != num; ++t_case) {
        float sum = 0;
        int total_sub;
        std::cin >> total_sub;
        for (int i = 0; i != total_sub; ++i)
        {
            float in;
            std::cin >> in;
            sum += in;
        }
        float gpa = sum / total_sub;
        std::cout << "Case " << t_case + 1 << ": "<< std::setprecision(4) << gpa << std::endl;
    }
}