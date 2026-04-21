#include <gtest/gtest.h>
#include <no_strings_attached/string_trim.h>

using namespace no_strings_attached;

TEST(TrimTest, BasicTrimBothSides) {
    auto result = Trim("  hello world  ");
    EXPECT_EQ(result, "hello world");
}

TEST(TrimTest, TrimLeft) {
    auto result = Trim("  hello world  ", ' ', Side::kLeft);
    EXPECT_EQ(result, "hello world  ");
}

TEST(TrimTest, TrimRight) {
    auto result = Trim("  hello world  ", ' ', Side::kRight);
    EXPECT_EQ(result, "  hello world");
}

TEST(TrimTest, TrimBoth) {
    auto result = Trim("  hello world  ", ' ', Side::kBoth);
    EXPECT_EQ(result, "hello world");
}

TEST(TrimTest, TrimCustomCharacter) {
    auto result = Trim("***hello***", '*', Side::kBoth);
    EXPECT_EQ(result, "hello");
}

TEST(TrimTest, TrimNoSpaces) {
    auto result = Trim("hello", ' ', Side::kBoth);
    EXPECT_EQ(result, "hello");
}

TEST(TrimTest, TrimAllSpaces) {
    auto result = Trim("     ", ' ', Side::kBoth);
    EXPECT_EQ(result, "");
}

TEST(TrimTest, TrimEmptyString) {
    auto result = Trim("", ' ', Side::kBoth);
    EXPECT_EQ(result, "");
}

TEST(TrimTest, TrimSingleCharacter) {
    auto result = Trim(" a ", ' ', Side::kBoth);
    EXPECT_EQ(result, "a");
}

TEST(TrimTest, TrimMultipleCharacterTypes) {
    auto result = Trim("xxxhelloxxx", 'x', Side::kBoth);
    EXPECT_EQ(result, "hello");
}

TEST(TrimTest, TrimLeftOnly) {
    auto result = Trim("xxhelloxx", 'x', Side::kLeft);
    EXPECT_EQ(result, "helloxx");
}

TEST(TrimTest, TrimRightOnly) {
    auto result = Trim("xxhelloxx", 'x', Side::kRight);
    EXPECT_EQ(result, "xxhello");
}
