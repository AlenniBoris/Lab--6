#include "gtest/gtest.h"
#include "../Functions/FunctionsLab.h"

//Numerator
TEST(TestNumerator, test1){
    fraction TestFraction(2,4);
    ASSERT_EQ(TestFraction.GetNumerator(),2);
}
TEST(TestNumerator, test2){
    fraction TestFraction(15,6);
    ASSERT_EQ(TestFraction.GetNumerator(), 15);
}
TEST(TestNumerator, test3){
    fraction TestFraction(3,5);
    ASSERT_EQ(TestFraction.GetNumerator(),3);
}
TEST(TestNumerator, test4){
    fraction TestFraction(7,10);
    ASSERT_EQ(TestFraction.GetNumerator(), 7);
}
TEST(TestNumerator, test5){
    fraction TestFraction(16,21);
    ASSERT_EQ(TestFraction.GetNumerator(),16);
}
TEST(TestNumerator, test6){
    fraction TestFraction(37,110);
    ASSERT_EQ(TestFraction.GetNumerator(), 37);
}
//Denominator
TEST(TestDenominator, test1){
    fraction TestFraction(2,4);
    ASSERT_EQ(TestFraction.GetDenominator(),4);
}
TEST(TestDenominator, test2){
    fraction TestFraction(15,6);
    ASSERT_EQ(TestFraction.GetDenominator(), 6);
}
TEST(TestDenominator, test3){
    fraction TestFraction(3,5);
    ASSERT_EQ(TestFraction.GetDenominator(),5);
}
TEST(TestDenominator, test4){
    fraction TestFraction(7,10);
    ASSERT_EQ(TestFraction.GetDenominator(), 10);
}
TEST(TestDenominator, test5){
    fraction TestFraction(16,21);
    ASSERT_EQ(TestFraction.GetDenominator(),21);
}
TEST(TestDenominator, test6){
    fraction TestFraction(37,110);
    ASSERT_EQ(TestFraction.GetDenominator(), 110);
}
