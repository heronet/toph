#include <iostream>
#include <map>
#include <vector>
#include <string>

// [WARNING]: "DOES NOT WORK ON TOPH"

std::string sign_selector(char sign, int a, int b, bool& minus) {
    if (sign == '*') {
        int res = a * b;
        if (res < 0) minus = true;
        return std::to_string(abs(res));
    }
    else if (sign == '/') {
        int res = a / b;
        if (res < 0) minus = true;
        return std::to_string(abs(res));
    }
    else if (sign == '+') {
        int res = a + b;
        if (res < 0) minus = true;
        return std::to_string(abs(res));
    }
    else if (sign == '-') {
        int res = a - b;
        if (res < 0) minus = true;
        return std::to_string(abs(res));
    }
    return "0";
}

int main() {
    std::map<char, std::vector<std::string>> digit_map{
        {'0', {"***", "* *", "* *", "* *", "***"}},
        {'1', {"*", "*", "*", "*", "*"}},
        {'2', {"***", "  *", "***", "*  ", "***"}},
        {'3', {"***", "  *", "***", "  *", "***"}},
        {'4', {"* *", "* *", "***", "  *", "  *"}},
        {'5', {"***", "*  ", "***", "  *", "***"}},
        {'6', {"***", "*  ", "***", "* *", "***"}},
        {'7', {"***", "  *", "  *", "  *", "  *"}},
        {'8', {"***", "* *", "***", "* *", "***"}},
        {'9', {"***", "* *", "***", "  *", "***"}},
    };

    int t_case;
    std::cin >> t_case;
    for (int k = 0; k != t_case; ++k) {
        int a, b;
        char sign;
        std::cin >> a >> sign >> b;
        bool has_minus = false;
        std::string math_res = sign_selector(sign, a, b, has_minus);

        std::cout << "Case #" << (k + 1) << ":\n";
        for (int i = 0; i != 5; ++i)
        {
            if (k == 0) {
                if (!has_minus) {
                    if (math_res.size() == 1)
                        std::cout << " " << digit_map[math_res[0]][i] << std::endl;
                    else
                    {
                        std::cout << " ";  
                        for (int r = 0; r != math_res.size(); ++r) {
                            std::cout << digit_map[math_res[r]][i];
                            if (r != math_res.size() - 1) {
                                std::cout << "  ";
                            }
                        }
                        std::cout << std::endl;
                    }
                }
                // IF it does have minus
                else {
                    if (math_res.size() == 1)
                    {
                        std::cout << " ";
                        if (i == 2)
                            std::cout << "***  ";
                        else
                            std::cout << "     ";
                        std::cout << digit_map[math_res[0]][i] << std::endl;
                    }
                    else
                    {
                        std::cout << " ";
                        if (i == 2)
                            std::cout << "***  ";
                        else
                            std::cout << "     ";
                        for (int r = 0; r != math_res.size(); ++r) {
                            std::cout << digit_map[math_res[r]][i];
                            if (r != math_res.size() - 1) {
                                std::cout << "  ";
                            }
                        }
                        std::cout << std::endl;
                    }
                }
            }
            else {
                if (!has_minus) {
                    if (math_res.size() == 1)
                        std::cout << digit_map[math_res[0]][i] << " " << std::endl;
                    else
                    {
                        for (int r = 0; r != math_res.size(); ++r) {
                            std::cout << digit_map[math_res[r]][i];
                            if (r != math_res.size() - 1) {
                                std::cout << "  ";
                            }
                            else {
                               std::cout << " ";
                            }
                        }
                        std::cout << std::endl;
                    }
                }
                // If it has minus
                else {
                    if (math_res.size() == 1)
                    {
                        if (i == 2)
                            std::cout << "***  ";
                        else
                            std::cout << "     ";
                        std::cout << digit_map[math_res[0]][i] << " " << std::endl;
                    }
                    else
                    {
                        if (i == 2)
                            std::cout << "***  ";
                        else
                            std::cout << "     ";
                        for (int r = 0; r != math_res.size(); ++r) {
                            std::cout << digit_map[math_res[r]][i];
                            if (r != math_res.size() - 1) {
                                std::cout << "  ";
                            }
                            else {
                                std::cout << " ";
                            }
                        }
                        std::cout << std::endl;
                    }
                }
            }
        }
        if (!(k == t_case - 1)) {
            std::cout << std::endl;
        }
    }
}
