#include <gtest/gtest.h>

TEST(WslVcpkgTest, passedTest) {
    auto const a = (9 * 9 + 9) / 9;
    auto const b = 1 + 2 + 3 + 4;
    ASSERT_EQ(a, b);
}
