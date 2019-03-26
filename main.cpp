/*
 Alex Hughes
 CS 110B
 3/25/19
 Professor Dave
 Assignment 9.1

Assignment calls for a Fraction class whose objects will represent Fractions. I provided member functions for add,
subtracting, multiplying, and dividing fractions.
 */

#include <iostream>
#include "fraction.h"
using namespace std;






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






int main()
{
    Fraction f1(9,8);
    Fraction f2(2,3);
    Fraction result;

    cout << "The result starts off at ";
    result.print();
    cout << endl;

    cout << "The product of ";
    f1.print();
    cout << " and ";
    f2.print();
    cout << " is ";
    result = f1.multipliedBy(f2);
    result.print();
    cout << endl;

    cout << "The quotient of ";
    f1.print();
    cout << " and ";
    f2.print();
    cout << " is ";
    result = f1.dividedBy(f2);
    result.print();
    cout << endl;

    cout << "The sum of ";
    f1.print();
    cout << " and ";
    f2.print();
    cout << " is ";
    result = f1.addedTo(f2);
    result.print();
    cout << endl;

    cout << "The difference of ";
    f1.print();
    cout << " and ";
    f2.print();
    cout << " is ";
    result = f1.subtract(f2);
    result.print();
    cout << endl;

    if (f1.isEqualTo(f2)){
        cout << "The two Fractions are equal." << endl;
    } else {
        cout << "The two Fractions are not equal." << endl;
    }

    const Fraction f3(12, 8);
    const Fraction f4(202, 303);
    result = f3.multipliedBy(f4);
    cout << "The product of ";
    f3.print();
    cout << " and ";
    f4.print();
    cout << " is ";
    result.print();
    cout << endl;
}
