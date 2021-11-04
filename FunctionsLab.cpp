#include "FunctionsLab.h"


fraction fraction::ProperFraction(){
    fraction fr(num, denominator);
    if(denominator < 0 && num < 0 ){
        fraction fr1(-num, -denominator);
        fr = fr1;
    }
    if(denominator < 0 && num > 0 ) {
        fraction fr2(-num, -denominator);
        fr = fr2;
    }
    int NOD = gcd(num, denominator);
    fraction fr4(fr.GetNumerator()/NOD, fr.GetDenominator()/NOD);
    fr = fr4;
    return fr;
}
int fraction::GetNumerator(){
    return num;
}
int fraction::GetDenominator(){
    return denominator;
}
void fraction::ShowFraction(){
    fraction FracAfterGCD = ProperFraction();
    cout << FracAfterGCD.GetNumerator() << '/' << FracAfterGCD.GetDenominator() <<endl;
}
int fraction::gcd(int a, int b) {
    if (a < b) {
        swap(a, b);
    }
    while (a % b != 0) {
        a = a % b;
        swap(a, b);
    }
    return b;
}
fraction fraction::Sum(fraction x, fraction y) {
    int up_result = x.GetDenominator()*y.GetNumerator() + y.GetDenominator()*x.GetNumerator();
    int down_result = x.GetDenominator()*y.GetDenominator();
    fraction fr_sum(up_result, down_result);
    return fr_sum;
}

fraction fraction::Multiply(fraction x, fraction y){
    int up_result = x.GetNumerator()*y.GetNumerator();
    int down_result = x.GetDenominator()*y.GetDenominator();
    fraction fr_mult(up_result,down_result);
    return fr_mult;
}

fraction fraction::Division(fraction x, fraction y){
    int up_result = x.GetNumerator()*y.GetDenominator();
    int down_result = x.GetDenominator()*y.GetNumerator();
    fraction fr_div(up_result,down_result);
    return fr_div;
}

void solution() {
    fraction Frac1(51, 78);
    fraction Frac2(13, 16);
    Frac1.ShowFraction();
    Frac2.ShowFraction();
    fraction fr_sum = fraction::Sum(Frac1, Frac2);
    fr_sum.ShowFraction();
    fraction frMult = fraction::Multiply(Frac1, Frac2);
    frMult.ShowFraction();
    fraction fr_div = fraction::Division(Frac1, Frac2);
    fr_div.ShowFraction();
}

