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

void doOneSet();

int main(){

    srand(static_cast<unsigned>(time(nullptr)));
    doOneSet();



    return 0;
}

void doOneSet(){
    
    for (int i = 0 ; i < 5 ; i++){
    int a = rand() % 100;
    int b = rand() % 100;

    cout << a << " + " << b << " = " << a + b << endl;

    }
}

