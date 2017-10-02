#ifndef __INCLUDED_FIND_LONGEST_H__
#define __INCLUDED_FIND_LONGEST_H__

#include <vector>
#include <iostream>
#include <string>
#include <sstream>
#include <map>
#include <unordered_map>
#include <limits>
#include <algorithm>
#include <chrono>
#include <unistd.h>

//brute force
std::string find_longest_word(std::string S, std::string D_str);

//greedy algorithm
std::string find_longest_word_greedy(std::string S, std::string D_str);

#endif
