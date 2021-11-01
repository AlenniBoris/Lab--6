//#include "class.h"

//fraction fraction::ProperFraction(){
//    fraction fr(num, denominator);
//    if(denominator < 0 && num < 0 ){
//        fraction fr1(-num, -denominator);
//        fr = fr1;
//    }
//    if(denominator < 0 && num > 0 ) {
//        fraction fr2(-num, -denominator);
//        fr = fr2;
//    }
//    int p = gcd(num, denominator);
//    fraction fr4(fr.GetNumerator()/p, fr.GetDenominator()/p);
//    fr = fr4;
//    return fr;
//}
//int fraction::GetNumerator(){
//    return num;
//}
//int fraction::GetDenominator(){
//    return denominator;
//}
//void fraction::PrintFraction(){
//    fraction fr = ProperFraction();
//    cout << fr.GetNumerator() << '/' << fr.GetDenominator() <<endl;
//}
//int fraction::gcd(int a, int b) {
//    while (b) {
//        a %= b;
//        swap (a, b);
//    }
//    return a;
//}
//fraction fraction::GetFraction() {
//    fraction fr(num, denominator);
//    return fr;
//}
//fraction fraction::Sum(fraction a, fraction b) {
//    int up_result = a.GetDenominator()*b.GetNumerator() + b.GetDenominator()*a.GetNumerator();
//    int down_result = a.GetDenominator()*b.GetDenominator();
//    fraction fr_sum(up_result, down_result);
//    return fr_sum;
//}
//
//fraction fraction::Multiply(fraction a, fraction b ){
//    int up_result = a.GetNumerator()*b.GetNumerator();
//    int down_result = a.GetDenominator()*b.GetDenominator();
//    fraction fr_mult(up_result,down_result);
//    return fr_mult;
//}
//
//fraction fraction::Division(fraction a, fraction b){
//    int up_result = a.GetNumerator()*b.GetDenominator();
//    int down_result = a.GetDenominator()*b.GetNumerator();
//    fraction fr_div(up_result,down_result);
//    return fr_div;
//}
//void solution() {
//    fraction MyFraction1(3, 5);
//    fraction MyFraction2(2, 4);
//    MyFraction1.PrintFraction();
//    MyFraction2.PrintFraction();
//    fraction fr_sum = fraction::Sum(MyFraction1, MyFraction2);
//    fr_sum.PrintFraction();
//    fraction fr_mult = fraction::Multiply(MyFraction1, MyFraction2);
//    fr_mult.PrintFraction();
//    fraction fr_div = fraction::Division(MyFraction1, MyFraction2);
//    fr_div.PrintFraction();
//}
