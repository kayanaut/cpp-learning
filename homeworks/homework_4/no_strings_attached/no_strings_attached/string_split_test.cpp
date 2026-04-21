#include <gtest/gtest.h>
#include <no_strings_attached/string_split.h>

using namespace no_strings_attached;

TEST(SplitTest, BasicSplit) {
    auto result = Split("hello world", " ");
    ASSERT_EQ(result.size(), 2);
    EXPECT_EQ(result[0], "hello");
    EXPECT_EQ(result[1], "world");
}

TEST(SplitTest, EdgeCaseEmpty) {
    auto result = Split("aaabaaba", "aa");
    EXPECT_EQ(result[0], "");
    EXPECT_EQ(result[1], "ab");
    EXPECT_EQ(result[2], "ba");
}

TEST(SplitTest2, BasicSplit) {
    auto result = Split("Uni Bonn", " ");
    EXPECT_EQ(result[0], "Uni");
    EXPECT_EQ(result[1], "Bonn");
}