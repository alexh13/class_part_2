//
// Created by Alex Hughes on 2019-03-25.
//
/*Alex Hughes
CS 110B
3/25/19
Professor Dave
Assignment 9.1

Assignment calls for a Fraction class whose objects will represent Fractions. The Fraction class can be used with two
integers. With client provided integers, I provided member functions for adding, subtracting, multiplying, and
dividing fractions. Functions also provided are a function to cout results, simplify, and determine if fractions are
equal to each other.
*/

#ifndef A9_1_FRACTION_H
#define A9_1_FRACTION_H

#include <cassert>

class Fraction
{
private:
    int numerator, denominator;

    void simplify();

public:

    Fraction();
    // Default constructor



    Fraction(int a,int b);
    // Constructor with two parameters


    Fraction addedTo(Fraction f2) const;
    //post: The sum of the calling object is returned



    Fraction subtract(Fraction f2) const;
    //Post: The subtraction of the calling object is returned



    Fraction multipliedBy(Fraction f2) const;
    //Post: The multiplied calling object is returned


    Fraction dividedBy(Fraction& f2) const;
    //Post: The divided calling object is returned



    int get_num() const;
    //Post: returns numerator



    int get_den() const;
    //Post: returns denominator



    bool isEqualTo(Fraction f2);
    //Post: returns true is called object is equal, otherwise false



    void print() const;
    //Post: Output called object in a numerator/denominator style


};

#endif //A9_1_FRACTION_H

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