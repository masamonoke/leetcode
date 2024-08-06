#include <gtest/gtest.h>

#include "../length_of_last_word.hpp"

TEST(lenght_of_last_word, test_1) {
	EXPECT_EQ(length_of_last_word("Hello World"), 5);
}

TEST(lenght_of_last_word, test_2) {
	EXPECT_EQ(length_of_last_word("LeetCode"), 8);
}

TEST(lenght_of_last_word, test_3) {
	EXPECT_EQ(length_of_last_word(" fly me to the moon "), 4);
}

TEST(lenght_of_last_word, test_4) {
	EXPECT_EQ(length_of_last_word(" hello "), 5);
}
