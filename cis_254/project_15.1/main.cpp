/* Student: Rodrigo Nochez
 * Class: CIS 254
 * Date: 05-09-2025
 * Instructor: Dave Harden
 * main.cpp 
 * fraction.h
 * fraction.cpp
 * github: @LunaRod6 (Process of my code thru commits)
 * 
 * This program ask the user for fractions, it simplifies it and then runs arithmetic operations.
 * 
 * The program treats fractions as objects, including a default constructor and a constructor with parameters, the functions uses arithmetic operations with the fractions that the user input from console. 
*/
#include <iostream>
#include "Fraction.h"
using namespace std;

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