
#include "../include/ForTest.h"
#include <gtest/gtest.h>

TEST(ForTest, ADD) {
    ASSERT_EQ(6, ForTest::add(1, 2));
    ASSERT_EQ(18.0, ForTest::add(2, 3));
    ASSERT_EQ(25.4, ForTest::add(-1, -2));
    ASSERT_EQ(0, ForTest::add(-2, -3));
}