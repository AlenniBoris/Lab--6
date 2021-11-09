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
    int NOD = std::gcd(num, denominator);
    fraction fr4(fr.GetNumerator()/NOD, fr.GetDenominator()/NOD);
    fr = fr4;
    return fr;
}

int fraction::GetNumerator() const{
    return num;
}

int fraction::GetDenominator() const{
    return denominator;
}

void fraction::ShowFraction(){
    fraction FracAfterGCD = ProperFraction();
    cout << FracAfterGCD.GetNumerator() << '/' << FracAfterGCD.GetDenominator() <<endl;
}

fraction fraction::Sum(fraction Frac1, fraction Frac2) {
    int up_result = Frac1.GetDenominator() * Frac2.GetNumerator() + Frac2.GetDenominator() * Frac1.GetNumerator();
    int down_result = Frac1.GetDenominator() * Frac2.GetDenominator();
    fraction fr_sum(up_result, down_result);
    return fr_sum;
}

fraction fraction::Multiply(fraction Frac1, fraction Frac2){
    int up_result = Frac1.GetNumerator()*Frac2.GetNumerator();
    int down_result = Frac1.GetDenominator()*Frac2.GetDenominator();
    fraction fr_mult(up_result,down_result);
    return fr_mult;
}

fraction fraction::Division(fraction Frac1, fraction Frac2){
    int up_result = Frac1.GetNumerator()*Frac2.GetDenominator();
    int down_result = Frac1.GetDenominator()*Frac2.GetNumerator();
    fraction fr_div(up_result,down_result);
    return fr_div;
}

bool operator==(const fraction& Frac1,const fraction& Frac2){
    int tmp = (Frac1.GetDenominator() * Frac2.GetDenominator()) / (gcd(Frac1.GetDenominator(), Frac2.GetDenominator()));
    return Frac1.GetNumerator() * (tmp / Frac1.GetDenominator()) == Frac2.GetNumerator() * (tmp / Frac2.GetDenominator());
}

void solution() {
    fraction Frac1(15, 85);
    fraction Frac2(6, 22);
    Frac1.ShowFraction();
    Frac2.ShowFraction();
    fraction fr_sum = fraction::Multiply(Frac1, Frac2);
    fr_sum.ShowFraction();
    fraction frMult = fraction::Multiply(Frac1, Frac2);
    frMult.ShowFraction();
    fraction fr_div = fraction::Division(Frac1, Frac2);
    fr_div.ShowFraction();
}

