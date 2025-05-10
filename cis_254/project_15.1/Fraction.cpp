#include <iostream>
#include <cassert>
#include "Fraction.h"
using namespace std;

Fraction::Fraction() {

    numerator = 0;
    denominator = 1;

}






Fraction::Fraction(int num, int den) {
    
    assert(den != 0);
    numerator = num; 
    denominator = den;

    simplify();
}






// Implementation of class member functions goes here.
Fraction Fraction::addedTo(Fraction second) const {
    Fraction temp;

    temp.numerator = numerator * second.denominator + denominator * second.numerator;
    temp.denominator = denominator * second.denominator;

    temp.simplify();
    return temp;
}







Fraction Fraction::subtract(Fraction second) const {
    Fraction temp;

    temp.numerator = numerator * second.denominator - denominator * second.numerator;
    temp.denominator = denominator * second.denominator;
    temp.simplify();
    return temp;
}






Fraction Fraction::multipliedBy(Fraction second) const {
    Fraction temp;
    
    temp.numerator = numerator * second.numerator;
    temp.denominator = denominator * second.denominator;
    temp.simplify();
    return temp;
}






Fraction Fraction::dividedBy(Fraction second) const {
    Fraction temp;
    
    temp.numerator = numerator * second.denominator;
    temp.denominator = denominator * second.numerator;
    temp.simplify();
    return temp;
}






bool Fraction::isEqualTo(Fraction second) const {

    if (numerator * second.denominator == denominator * second.numerator) {

        return true;

    } else {

        return false;

    }
}






void Fraction::print() const {
    
    cout << numerator << "/" << denominator;
}






//Simplifies fractions while both the numerator and denominator are divisible by the same number. 
void Fraction::simplify(){

    int limit = denominator;

    if(numerator > denominator) {
        limit = numerator;
    }

    for(int i = 2; i < limit; i++) {

        while(numerator % i == 0 && denominator % i == 0) {

            if(numerator % i == 0 && denominator % i == 0) {

                numerator = numerator / i;
                denominator = denominator / i;
            }
        }
    }
}