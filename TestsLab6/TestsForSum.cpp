#include "gtest/gtest.h"
#include "../Functions/FunctionsLab.h"

TEST(TestSum, test1){
    fraction testFraction(2,4);
    fraction testFraction2(15,6);
    fraction resultFraction(3,1);
    ASSERT_EQ(fraction::Sum(testFraction2, testFraction),resultFraction);
}
TEST(TestSum, test2){
    fraction testFraction(15,6);
    fraction testFraction2(3,5);
    fraction resultFraction(31,10);
    ASSERT_EQ(fraction::Sum(testFraction2, testFraction),resultFraction);
}
TEST(TestSum, test3){
    fraction testFraction(3,5);
    fraction testFraction2(7,10);
    fraction resultFraction(13,10);
    ASSERT_EQ(fraction::Sum(testFraction2, testFraction),resultFraction);
}
TEST(TestSum, test4){
    fraction testFraction(7,10);
    fraction testFraction2(16,21);
    fraction resultFraction(307,210);
    ASSERT_EQ(fraction::Sum(testFraction2, testFraction),resultFraction);
}
TEST(TestSum, test5){
    fraction testFraction(16,21);
    fraction testFraction2(37,110);
    fraction resultFraction(2537,2310);
    ASSERT_EQ(fraction::Sum(testFraction2, testFraction),resultFraction);
}