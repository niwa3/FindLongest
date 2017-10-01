#include "find_longest_word.h"


bool sort_less(std::pair<std::string,unsigned int>& x,std::pair<std::string,unsigned int>& y){
  return x.second > y.second;
}

int find_longest_word(std::string S, std::string D_str){
  std::vector< std::pair<std::string,unsigned int> > D;
  std::stringstream D_buffer;
  D_buffer<<D_str;
  while(!D_buffer.eof()){
    std::string tmp_word;
    D_buffer.ignore(sizeof(D_buffer),'\"');
    std::getline(D_buffer, tmp_word, '\"');
    if(tmp_word!=""){
      std::cout<<tmp_word<<std::endl;
      D.push_back(std::pair<std::string,unsigned int>(tmp_word,0));
    }
  }
  for(std::vector< std::pair<std::string,unsigned int> >::iterator D_itr = D.begin(); D_itr != D.end(); D_itr++){
    std::cout<<"key="<<D_itr->first<<", value="<<D_itr->second<<std::endl;
  }
  for(std::string::iterator S_itr=S.begin(); S_itr!=S.end(); S_itr++){
    for(std::vector< std::pair<std::string,unsigned int> >::iterator D_itr=D.begin(); D_itr !=D.end(); D_itr++){
      if(D_itr->first[D_itr->second]==*S_itr){
        D_itr->second++;
      }
    }
  }
  std::vector< std::pair<std::string,unsigned int> > mached_D;
  for(std::vector< std::pair<std::string,unsigned int> >::iterator D_itr = D.begin(); D_itr != D.end(); D_itr++){
    if(D_itr->second==D_itr->first.length())
      mached_D.push_back(std::pair<std::string,unsigned int>(D_itr->first,D_itr->second));
  }
  std::sort(mached_D.begin(), mached_D.end(), sort_less); 
  std::cout<<"key="<<mached_D.begin()->first<<", value="<<mached_D.begin()->second<<std::endl;

  return 0;
}
