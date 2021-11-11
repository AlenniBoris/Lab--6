#include "gtest/gtest.h"
#include "../Functions/FunctionsLab.h"

TEST(TestNumerator, PositiveNumerator_case1){
    fraction TestFraction(2,4);
    ASSERT_EQ(TestFraction.GetNumerator(),2);
}
TEST(TestNumerator, PositiveNumerator_case2){
    fraction TestFraction(15,6);
    ASSERT_EQ(TestFraction.GetNumerator(), 15);
}
TEST(TestNumerator, NegativeNumerator_case1){
    fraction TestFraction(-3,5);
    ASSERT_EQ(TestFraction.GetNumerator(),-3);
}
TEST(TestNumerator, NegativeNumerator_case2){
    fraction TestFraction(7,-10);
    ASSERT_EQ(TestFraction.GetNumerator(), 7);
}
TEST(TestNumerator, ZeroNumerator_case1){
    fraction TestFraction(0,21);
    ASSERT_EQ(TestFraction.GetNumerator(),0);
}

TEST(TestDenominator, PositiveDenominator_case1){
    fraction TestFraction(2,4);
    ASSERT_EQ(TestFraction.GetDenominator(),4);
}
TEST(TestDenominator, PositiveDenominator_case2){
    fraction TestFraction(-15,6);
    ASSERT_EQ(TestFraction.GetDenominator(), 6);
}
TEST(TestDenominator, NegativeDenominator_case1){
    fraction TestFraction(3,-5);
    ASSERT_EQ(TestFraction.GetDenominator(),-5);
}
TEST(TestDenominator, NegativeDenominator_case2){
    fraction TestFraction(-7,-10);
    ASSERT_EQ(TestFraction.GetDenominator(), -10);
}

