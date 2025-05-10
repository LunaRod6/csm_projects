/* Student: Rodrigo Nochez
 * Class: CIS 254
 * Date: 05-09-2025
 * Instructor: Dave Harden
 * main.cpp 
 * fraction.h
 * fraction.cpp
 * github: @LunaRod6 (Process of my code thru commits)
 * 
 * Class Fraction
 * Members:
 *  Data members:
 *      numerator stores the numerator from the user
 *      denominator stores the denominator from the user
 *  
 *  Functions:
 *      Constructors a default constructor and one with parameter
 *      Operations functions for sum, substraction, multiplication and division.
 *      Simplify to simplify the fractions.
 *      Print to display the results in console.
*/
#ifndef FRACTION_H
#define FRACTION_h

// Class declaration goes here.
class Fraction {

    public:
      Fraction();
      Fraction(int num, int den);
      Fraction addedTo(Fraction second) const;
      Fraction subtract(Fraction second) const;
      Fraction multipliedBy(Fraction second) const;
      Fraction dividedBy(Fraction second) const;
      bool isEqualTo(Fraction second) const;
      void print() const;

    private:

      int numerator;
      int denominator;
      void simplify();
      
};
#endif