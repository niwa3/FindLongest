#include "find_longest_word.h"


bool sort_more(const std::pair<std::string,unsigned int>& x, const std::pair<std::string,unsigned int>& y){
  return x.second > y.second;
}


bool sort_word_more_len(const std::string& x, const std::string& y){
  return x.length() > y.length();
}


std::string find_longest_word(std::string S, std::string D_str){
  auto start = std::chrono::system_clock::now();
  std::vector< std::pair<std::string,unsigned int> > D;
  std::stringstream D_buffer;
  D_buffer<<D_str;
  while(!D_buffer.eof()){
    std::string tmp_word;
    D_buffer.ignore(sizeof(D_buffer),'\"');
    std::getline(D_buffer, tmp_word, '\"');
    if(tmp_word!=""){
      D.push_back(std::pair<std::string,unsigned int>(tmp_word,0));
    }
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
  std::sort(mached_D.begin(), mached_D.end(), sort_more); 
  auto end = std::chrono::system_clock::now();
  auto dur = end - start;        // 要した時間を計算
  auto nsec = std::chrono::duration_cast<std::chrono::nanoseconds>(dur).count();
  std::cout<< nsec << "ns\n";

  return mached_D.begin()->first;
}


std::string find_longest_word_greedy(std::string S, std::string D_str){
  auto start = std::chrono::system_clock::now();
  std::unordered_map<char, std::vector<int>> letter_positions;
  for(int i=0;i<S.length();i++){
    letter_positions[S[i]].push_back(i);
  }
  std::vector<std::string> D;
  std::stringstream D_buffer;
  D_buffer<<D_str;
  while(!D_buffer.eof()){
    std::string tmp_word;
    D_buffer.ignore(sizeof(D_buffer),'\"');
    std::getline(D_buffer, tmp_word, '\"');
    if(tmp_word!=""){
      D.push_back(tmp_word);
    }
  }

  std::sort(D.begin(), D.end(), sort_word_more_len);

  for(std::vector<std::string>::iterator D_itr=D.begin(); D_itr!=D.end(); D_itr++){
    int pos = 0;
    std::string word = *D_itr;
    for(int i=0; i!=word.length(); i++){
      char letter = word[i];
      if(letter_positions.find(letter)==letter_positions.end()) break;
      std::vector<int> possible_positions;
      std::vector<int> positions = letter_positions[letter];
      for(std::vector<int>::iterator p_ptr=positions.begin(); p_ptr!=positions.end(); p_ptr++){
        possible_positions.push_back(*p_ptr);
      }
      if(possible_positions.size()==0) break;
      pos = *(possible_positions.begin()) + 1;
      if(i==(word.length()-1)){
        auto end = std::chrono::system_clock::now();
        auto dur = end - start;        // 要した時間を計算
        auto nsec = std::chrono::duration_cast<std::chrono::nanoseconds>(dur).count();
        std::cout<< nsec << "ns\n";
        return word;
      }
    }
  }
  return "none";
}
