#include "find_longest_word.h"

int main(){
  std::string S;
  std::string D_str;
  std::cout<<"please give me a string:";
  std::cin>>S;
  std::cin.ignore();
  std::cout<<"please give me a set of words (e.g. \"able\", \"ale\", \"apple\", \"bale\"):";
  std::getline(std::cin, D_str);
  find_longest_word(S, D_str);
  return 0;
}
