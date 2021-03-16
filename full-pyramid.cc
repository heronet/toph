#include <iostream>

int main()
{
  int num;
  std::cin >> num;
  int spaces = num - 1;
  int ast = 1;
  for(int i = 0; i != num; ++i)
  {
    for(int j = spaces; j != 0; --j)
    {
      std::cout << ' ';
    }
    for(int j = 0; j != ast; ++j)
    {
      std::cout << '*';
      if(!(j == ast - 1))
        std::cout << ' ';
    }
    ++ast;
    --spaces;
    std::cout << std::endl;
  }
}
