#include "gtest/gtest.h"
#include "../Functions/FunctionsLab.h"

TEST(TestDivision, test1){
fraction testFraction(2,4);
fraction testFraction2(15,6);
fraction resultFraction(1,5);
ASSERT_EQ(fraction::Division(testFraction, testFraction2),resultFraction);
}
TEST(TestDivision, test2){
fraction testFraction(15,6);
fraction testFraction2(3,5);
fraction resultFraction(25,6);
ASSERT_EQ(fraction::Division(testFraction, testFraction2),resultFraction);
}
TEST(TestDivision, test3){
fraction testFraction(3,5);
fraction testFraction2(7,10);
fraction resultFraction(6,7);
ASSERT_EQ(fraction::Division(testFraction, testFraction2),resultFraction);
}
TEST(TestDivision, test4){
fraction testFraction(7,10);
fraction testFraction2(16,21);
fraction resultFraction(147,160);
ASSERT_EQ(fraction::Division(testFraction, testFraction2),resultFraction);
}
TEST(TestDivision, test5){
fraction testFraction(16,21);
fraction testFraction2(37,110);
fraction resultFraction(1760,777);
ASSERT_EQ(fraction::Division(testFraction, testFraction2),resultFraction);
}