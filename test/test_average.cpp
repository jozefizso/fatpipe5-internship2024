#include "../lib/average.h"
#include <gtest/gtest.h>
#include <vector>

TEST(AverageTest, HandlesEmptyVector) {
    std::vector<double> numbers;
    ASSERT_DOUBLE_EQ(average(numbers), 0.0);
}

TEST(AverageTest, ComputesAverage) {
    std::vector<double> numbers = { 1.0, 2.0, 3.0, 4.0 };
    ASSERT_DOUBLE_EQ(average(numbers), 2.5);
}
