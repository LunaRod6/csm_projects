/*
 * Student: Rodrigo Nochez
 * Class: CIS 254
 * Date: 03-16-2025
 * Instructor: Dave Harden
 * main.cpp 
 * github: @LunaRod6 (Process of my code thru commits)
 * 
 * This program ask the user to answer a series of arithmetic problems and reports how the user performs.
 * 
 * The program is divided in 6 phases this code includes phase 1 thru 3, which includes the output of 5 different operations, the input of the user for the answer of these operations and lastly the program will provide 3 different sets of different arithmetic operation, just by changing the parameter of the function.
 * 
*/
#include<iostream>
#include<iomanip>
#include<cstdlib>

using namespace std;

void generateOperands(int& a , int& b);
void calculateCorrectAnswer(int a , int b , int& c , char operand );
void checkAnswer(int total , int user);
void doOneProblem(char operand ,int a , int b , int& d);
void doOneSet(char operand);


int main(){

    srand(static_cast<unsigned>(time(nullptr)));
    doOneSet('+');
    doOneSet('-');
    doOneSet('*');

    return 0;
}

void generateOperands(int& a , int& b){

     a = rand() % 100;
     b = rand() % 100;

}

void calculateCorrectAnswer(int a , int b , int& c , char operand){
    if (operand == '+'){
        c = a + b;
    } else if (operand == '-'){
        c = a - b;
    } else if (operand == '*'){
        c = a * b;
    }
}

void checkAnswer(int total , int user){

    if (total == user) {

        cout << "correct" << endl;

    } else {

        cout << "incorrect" << endl;

    }

}

void doOneProblem(char operand, int a , int b , int& d){
    

    cout << a << " " << operand << " " << b << " = ";

    cin >> d;

    
}

void doOneSet(char operand){
    
    for(int i = 0 ; i < 5 ; i++){
        int a = 0;
        int b = 0;
        int c;
        int d;

        generateOperands(a , b);
        doOneProblem(operand , a , b , d);
        calculateCorrectAnswer(a , b , c , operand);
        checkAnswer(c , d);

    }
    
}

