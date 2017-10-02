#include <gtest/gtest.h>
#include "find_longest_word.h"

TEST(find_longest_word_test, find_longest_word){
  EXPECT_EQ("apple", find_longest_word("abppplee", "\"able\", \"ale\", \"apple\", \"bale\", \"kangaroo\""));

  EXPECT_EQ("known", find_longest_word("skwnnwiohnjwiownk", "\"show\", \"sky\", \"known\", \"apple\", \"own\""));
}
