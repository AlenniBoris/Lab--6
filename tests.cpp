#include "gtest/gtest.h"
#include "FunctionsLab.h"

TEST(SUMMA, TestForSumma1){
    fraction Frac1(15, 5);
    fraction Frac2(12, 24);
    fraction Frac3(7, 2);
    ASSERT_EQ( fraction::Sum(Frac1, Frac2),Frac3);
}