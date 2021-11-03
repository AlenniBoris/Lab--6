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
    int p = gcd(num, denominator);
    fraction fr4(fr.GetNumerator()/p, fr.GetDenominator()/p);
    fr = fr4;
    return fr;
}
int fraction::GetNumerator(){
    return num;
}
int fraction::GetDenominator(){
    return denominator;
}
void fraction::PrintFraction(){
    fraction fr = ProperFraction();
    cout << fr.GetNumerator() << '/' << fr.GetDenominator() <<endl;
}
int fraction::gcd(int a, int b) {
    while (b) {
        a %= b;
        swap (a, b);
    }
    return a;
}
fraction fraction::GetFraction() {
    fraction fr(num, denominator);
    return fr;
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
    Frac1.PrintFraction();
    Frac2.PrintFraction();
    fraction fr_sum = fraction::Sum(Frac1, Frac2);
    fr_sum.PrintFraction();
    fraction frMult = fraction::Multiply(Frac1, Frac2);
    frMult.PrintFraction();
    fraction fr_div = fraction::Division(Frac1, Frac2);
    fr_div.PrintFraction();
}

