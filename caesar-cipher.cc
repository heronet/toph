// [WARNING]: Incomplete

#include <iostream>

int main()
{
   uint32_t shift;
   std::string input, output;
   std::cin >> shift;
   std::cin.ignore();
   std::getline(std::cin, input);

   for(char ch: input) {
      if(ch == ' ') {
         output += ch;
         continue;
      }
      for(int i = 0; i != shift; ++i) {
        if(ch == 'a')
           ch = 'z';
        else
            ch -= 1; 
      }
      output += ch;
   }
   std::cout << output << std::endl;
}
