#include "gtest/gtest.h"
#include "../Functions/FunctionsLab.h"

TEST(TestSum, SumPositive_case1){
    fraction testFraction(2,4);
    fraction testFraction2(15,6);
    fraction resultFraction(3,1);
    ASSERT_EQ(fraction::Sum(testFraction2, testFraction),resultFraction);
}
TEST(TestSum, SumPositive_case2){
    fraction testFraction(15,6);
    fraction testFraction2(3,5);
    fraction resultFraction(31,10);
    ASSERT_EQ(fraction::Sum(testFraction2, testFraction),resultFraction);
}
TEST(TestSum, SumNegative_case1){
    fraction testFraction(3,5);
    fraction testFraction2(-7,10);
    fraction resultFraction(-1,10);
    ASSERT_EQ(fraction::Sum(testFraction2, testFraction),resultFraction);
}
TEST(TestSum, SumNegative_case2){
    fraction testFraction(-7,10);
    fraction testFraction2(-16,21);
    fraction resultFraction(-307,210);
    ASSERT_EQ(fraction::Sum(testFraction2, testFraction),resultFraction);
}
TEST(TestSum, SumZero_case1){
    fraction testFraction(16,21);
    fraction testFraction2(0,1);
    fraction resultFraction(16,21);
    ASSERT_EQ(fraction::Sum(testFraction2, testFraction),resultFraction);
}
TEST(TestSum, SumZero_case2){
    fraction testFraction(0,1);
    fraction testFraction2(0,1);
    fraction resultFraction(0,1);
    ASSERT_EQ(fraction::Sum(testFraction2, testFraction),resultFraction);
}