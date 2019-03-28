//
// Created by Alex Hughes on 2019-03-25.
//

#ifndef A9_1_FRACTION_H
#define A9_1_FRACTION_H

#endif //A9_1_FRACTION_H


class Fraction
{
private:
    int numerator, denominator;

    void simplify();

public:
    // Default constructor
    Fraction();

    // Constructor with two parameters
    Fraction(int a,int b);

    Fraction addedTo(Fraction f2) const;

    Fraction subtract(Fraction f2) const;

    Fraction multipliedBy(Fraction f2) const;

    Fraction dividedBy(Fraction& f2) const;

    int get_num() const;

    int get_den() const;

    bool isEqualTo(Fraction f2) const;

    void print() const;

};
