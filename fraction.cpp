//
// Created by Alex Hughes on 2019-03-25.
//

#include <iostream>
#include "fraction.h"
using namespace std;






Fraction::Fraction()
{
    numerator = 0;
    denominator = 1;
}







Fraction::Fraction(int a, int b)
{
    numerator = a;
    denominator = b;
}






Fraction Fraction::addedTo(Fraction f2)
{
    int new_num = numerator*f2.get_den() + denominator*f2.get_num();
    int new_den = denominator*f2.get_den();
    return Fraction(new_num,new_den);
}






Fraction Fraction::subtract(Fraction f2)
{
    int new_num = numerator*f2.get_den() - denominator*f2.get_num();
    int new_den = denominator*f2.get_den();
    return Fraction(new_num,new_den);
}






Fraction Fraction::multipliedBy(Fraction f2)
{
    int new_num = numerator*f2.get_num();
    int new_den = denominator*f2.get_den();
    return Fraction(new_num,new_den);
}






Fraction Fraction::dividedBy(Fraction& f2)
{
    int new_num = (this->get_num())*f2.get_den();
    int new_den = (this->get_den())*f2.get_num();
    Fraction temp(new_num,new_den);
    return temp;
}






bool Fraction::isEqualTo(Fraction f2)
{
    return (numerator==f2.get_num() && denominator == f2.get_den());
}






void Fraction::print()
{
    cout << numerator << "/" << denominator;
}






int Fraction::get_num()
{
    return numerator;
}






int Fraction::get_den()
{
    return denominator;
}






void Fraction::set(int isNumerator, int isDenominator)
{
    numerator = isNumerator;
    denominator = isDenominator;
}
