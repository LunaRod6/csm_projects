#include <iostream>
#include <cassert>
using namespace std;

// Class declaration goes here.
class Fraction {

    public:

      void setNumAndDen(int num, int den);
      Fraction addedTo(Fraction second);
      Fraction subtract(Fraction second);
      Fraction multipliedBy(Fraction second);
      Fraction dividedBy(Fraction second);
      bool isEqualTo(Fraction second) const;
      void print() const;

    private:

      int numerator;
      int denominator;
      void simplify();

};
Fraction::Fraction() {

    numerator = 0;
    denominator = 1;

}

void Fraction::setNumAndDen(int num, int den) {
    Fraction temp;

    assert(den != 0);
    numerator = num; 
    denominator = den;
    temp.simplify();

}

// Implementation of class member functions goes here.
Fraction Fraction::addedTo(Fraction second) {
    Fraction temp;
    temp.numerator = numerator * second.denominator + denominator * second.numerator;
    temp.denominator = denominator * second.denominator;

    return temp;
}

Fraction Fraction::subtract(Fraction second) {
    Fraction temp;
    temp.numerator = numerator * second.denominator - denominator * second.numerator;
    temp.denominator = denominator * second.denominator;

    return temp;
}

Fraction Fraction::multipliedBy(Fraction second){
    Fraction temp;
    temp.numerator = numerator * second.numerator;
    temp.denominator = denominator * second.denominator;

    return temp;
}

Fraction Fraction::dividedBy(Fraction second){
    Fraction temp;
    temp.numerator = numerator * second.denominator;
    temp.denominator = denominator * second.numerator;

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

    unsigned int i;

    for(i = 2; i < 9; i++) {

        while(numerator % i == 0 && denominator % i == 0) {

            if(numerator % i == 0 && denominator % i == 0) {

                numerator = numerator / i;
                denominator = denominator / i;
            }
        }
    }
}

int main()
{
    Fraction f1;
    Fraction f2;
    Fraction result;

    f1.setNumAndDen(9, 8);
    f2.setNumAndDen(2, 3);

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
}