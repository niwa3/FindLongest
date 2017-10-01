#include <gtest/gtest.h>
#include "find_longest_word.h"

TEST(find_longest_word_test, find_longest_word){
  EXPECT_EQ(0, find_longest_word("abppplee", "\"able\", \"ale\", \"apple\", \"bale\", \"kangaroo\""));

  EXPECT_EQ(0, find_longest_word("skwnnwiohnjwiownk", "\"show\", \"sky\", \"known\", \"apple\", \"own\""));
}
