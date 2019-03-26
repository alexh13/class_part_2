//
// Created by Alex Hughes on 2019-03-25.
//

#ifndef A9_1_FRACTION_H
#define A9_1_FRACTION_H

#endif //A9_1_FRACTION_H


class Fraction
{
private:
    int numerator;
    int denominator;

public:
    Fraction();
    Fraction(int a,int b);
    Fraction addedTo(Fraction f2);
    Fraction subtract(Fraction f2);
    Fraction multipliedBy(Fraction f2);
    Fraction dividedBy(Fraction& f2);
    int get_num();
    int get_den();
    bool isEqualTo(Fraction f2);
    void print();
    void set(int isNumerator, int isDenominator);
};