#ifndef LAB__6_FUNCTIONSLAB_H
#define LAB__6_FUNCTIONSLAB_H

#include <iostream>
#include <cassert>
#include <numeric>

using  namespace std;

class fraction {
private:
    int num;
    int denominator;
    fraction(){
        num = 0;
        denominator = 1;
    }
public:
    fraction(int num, int denominator){
        (*this).num = num;
        (*this).denominator = denominator;
        assert(denominator != 0);
    }
    int GetNumerator();
    int GetDenominator();
    fraction ProperFraction();
    void ShowFraction();
    static fraction Sum(fraction Frac1, fraction Frac2);
    static fraction Multiply(fraction Frac1, fraction Frac2);
    static fraction Division(fraction Frac1, fraction Frac2);
    fraction(const fraction &frac){
        num = frac.num;
        denominator = frac.denominator;
    }
};
void solution();

#endif //LAB__6_FUNCTIONSLAB_H
