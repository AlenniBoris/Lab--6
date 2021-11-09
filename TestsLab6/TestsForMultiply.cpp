#include "gtest/gtest.h"
#include "../Functions/FunctionsLab.h"

TEST(TestMult, test1){
    fraction testFraction(2,4);
    fraction testFraction2(15,6);
    fraction resultFraction(5,4);
    ASSERT_EQ(fraction::Multiply(testFraction2, testFraction),resultFraction);
}
TEST(TestMult, test2){
    fraction testFraction(15,6);
    fraction testFraction2(3,5);
    fraction resultFraction(3,2);
    ASSERT_EQ(fraction::Multiply(testFraction2, testFraction),resultFraction);
}
TEST(TestMult, test3){
    fraction testFraction(3,5);
    fraction testFraction2(7,10);
    fraction resultFraction(21,50);
    ASSERT_EQ(fraction::Multiply(testFraction2, testFraction),resultFraction);
}
TEST(TestMult, test4){
    fraction testFraction(7,10);
    fraction testFraction2(16,21);
    fraction resultFraction(8,15);
    ASSERT_EQ(fraction::Multiply(testFraction2, testFraction),resultFraction);
}
TEST(TestMult, test5){
    fraction testFraction(16,21);
    fraction testFraction2(37,110);
    fraction resultFraction(296,1155);
    ASSERT_EQ(fraction::Multiply(testFraction2, testFraction),resultFraction);
}