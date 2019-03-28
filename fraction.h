//
// Created by Alex Hughes on 2019-03-25.
//

#ifndef A9_1_FRACTION_H
#define A9_1_FRACTION_H

#endif //A9_1_FRACTION_H
#include <cassert>

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

    bool isEqualTo(Fraction f2);

    void print() const;

};


/*

Output:
The result starts off at 0/1
The product of 9/8 and 2/3 is 3/4
The quotient of 9/8 and 2/3 is 27/16
The sum of 9/8 and 2/3 is 43/24
The difference of 9/8 and 2/3 is 11/24
The two Fractions are not equal.
The product of 3/2 and 2/3 is 1/1

 */