#include "find_longest_word.h"

int main(int argc, char* argv[]){
  int i, opt;
  opterr = 0;
  std::string S;
  std::string D_str;
  while((opt=getopt(argc, argv, "dm"))!=-1){
    switch(opt){
      case 'd':
        S = "skwnnwiohnjwiownk";
        D_str = "\"show\", \"sky\", \"known\", \"apple\", \"own\"";
        std::cout<<find_longest_word(S, D_str)<<std::endl;
        std::cout<<find_longest_word(S, D_str)<<std::endl;
        std::cout<<find_longest_word_greedy(S, D_str)<<std::endl;
        std::cout<<find_longest_word_greedy(S, D_str)<<std::endl;

        S = {0};
        S.clear();
        D_str = {0};
        D_str.clear();

        S = "abppplee";
        D_str = "\"able\", \"ale\", \"apple\", \"bale\", \"lsjdk\", \"owinwww\", \"wwiqms\", \"wii\", \"wio\", \"wow\", \"woqm\", \"qqm\", \"oqmq\", \"q\", \"oq\", \"kangaroo\"";
        std::cout<<find_longest_word(S, D_str)<<std::endl;
        std::cout<<find_longest_word_greedy(S, D_str)<<std::endl;

        S = {0};
        S.clear();
        D_str = {0};
        D_str.clear();

        S = "aboahnwafjsdljjflaskdpiwwlsdjfoawiejrfowaijfoiwhjeiorjaosidnmfsakjndefoawuperoksajnfklajflaskdpiwwlsdjfoawiejrfowaijfoiwhjeiorjaosidnmfsakjndefoawuperoksajnfklajflaskdpiwwlsdjfoawiejrfowaijfoiwhjeiorjaosidnmfsakjndefoawuperoksajnfklajflaskdpiwwlsdjfoawiejrfowaijfoiwhjeiorjaosidnmfsakjndefoawuperoksajnfklajflaskdpiwwlsdjfoawiejrfowaijfoiwhjeiorjaosidnmfsakjndefoawuperoksajnfklajflaskdpiwwlsdjfoawiejrfowaijfoiwhjeiorjaosidnmfsakjndefoawuperoksajnfklajflaskdpiwwlsdjfoawiejrfowaijfoiwhjeiorjaosidnmfsakjndefoawuperoksajnfklajflaskdpiwwlsdjfoawiejrfowaijfoiwhjeiorjaosidnmfsakjndefoawuperoksajnfklajflaskdpiwwlsdjfoawiejrfowaijfoiwhjeiorjaosidnmfsakjndefoawuperoksajnfklajflaskdpiwwlsdjfoawiejrfowaijfoiwhjeiorjaosidnmfsakjndefoawuperoksajnfklajflaskdpiwwlsdjfoawiejrfowaijfoiwhjeiorjaosidnmfsakjndefoawuperoksajnfklajflaskdpiwwlsdjfoawiejrfowaijfoiwhjeiorjaosidnmfsakjndefoawuperoksajnfklajflaskdpiwwlsdjfoawiejrfowaijfoiwhjeiorjaosidnmfsakjndefoawuperoksajnfklajflaskdpiwwlsdjfoawiejrfowaijfoiwhjeiorjaosidnmfsakjndefoawuperoksajnfklajflaskdpiwwlsdjfoawiejrfowaijfoiwhjeiorjaosidnmfsakjndefoawuperoksajnfklajflaskdpiwwlsdjfoawiejrfowaijfoiwhjeiorjaosidnmfsakjndefoawuperoksajnfklajflaskdpiwwlsdjfoawiejrfowaijfoiwhjeiorjaosidnmfsakjndefoawuperoksajnfklajflaskdpiwwlsdjfoawiejrfowaijfoiwhjeiorjaosidnmfsakjndefoawuperoksajnfklajflaskdpiwwlsdjfoawiejrfowaijfoiwhjeiorjaosidnmfsakjndefoawuperoksajnfklajflaskdpiwwlsdjfoawiejrfowaijfoiwhjeiorjaosidnmfsakjndefoawuperoksajnfklajflaskdpiwwlsdjfoawiejrfowaijfoiwhjeiorjaosidnmfsakjndefoawuperoksajnfklajflaskdpiwwlsdjfoawiejrfowaijfoiwhjeiorjaosidnmfsakjndefoawuperoksajnfklajflaskdpiwwlsdjfoawiejrfowaijfoiwhjeiorjaosidnmfsakjndefoawuperoksajnfklajflaskdpiwwlsdjfoawiejrfowaijfoiwhjeiorjaosidnmfsakjndefoawuperoksajnfklajflaskdpiwwlsdjfoawiejrfowaijfoiwhjeiorjaosidnmfsakjndefoawuperoksajnfklaflaskdpiwwlsdjfoawiejrfowaijfoiwhjeiorjaosidnmfsakjndefoawuperoksajnfklasdnfioawujerioajsdfokasjdfiowjeoijrfaowkjnefoiawjefioasjdfokawmnrekjfahwuhpfjskodcvnjmksjodnfcvosahjdfioasdjfsdnfiosadhjrfoijwefkasncmjaoppzjpzfwuhqnqkjnwmfkajsdfimiwehouiweujieiwoiwopnpsodjwjwlpvcaoiwplsljfwineipqqxxzeoiaaniwome";
        D_str = "\"able\", \"ale\", \"apple\", \"bale\", \"kangaroo\", \"content\", \"me\", \"talk\", \"banana\", \"abasflaskdpiw\", \"shown\"";
        std::cout<<find_longest_word(S, D_str)<<std::endl;
        std::cout<<find_longest_word_greedy(S, D_str)<<std::endl;

       break;
      case 'm':
        std::cout<<"please give me a string:";
        std::cin>>S;
        std::cin.ignore();
        std::cout<<"please give me a set of words (e.g. \"able\", \"ale\", \"apple\", \"bale\"):";
        std::getline(std::cin, D_str);
        find_longest_word(S, D_str);
        break;
      default:
        std::cout<<"Usage: "<<opt<<" [-d] [-m]\n";
        break;
    }
  }
  return 0;
}
