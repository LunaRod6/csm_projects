/*
 * Student: Rodrigo Nochez
 * Class: CIS 254
 * Date: 03-31-2025
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

void getProbsPerSet(int& a);
void generateOperands(int& a , int& b, int mNum);
void calculateCorrectAnswer(int a , int b , int& c , char symbol );
void checkAnswer(int total , int user, int& g);
void doOneProblem(char symbol ,int a , int b , int& d);
void printHeader(char c);
void getMaxNum(int& m);
void doOneSet(char symbol, double n, double& g);
void printReport(double g1, double g2, double g3, double mN);


int main(){

    double n;
    double good1;
    double good2;
    double good3;
    
    getProbsPerSet(n);
    //srand(static_cast<unsigned>(time(nullptr)));
    doOneSet('+', n, good1);
    doOneSet('-', n, good2);
    doOneSet('*', n, good3);

    return 0;
}

//Ask the user how many sets they want to operate.
void getProbsPerSet(double& a){

    cout << "Enter problems per set: ";
    cin >> a;

}

void generateOperands(int& a , int& b, int mNum){

    //Generates a number between 0 and the mNum chosen by the user inclusive
     a = rand() % (mNum + 1);
     b = rand() % (mNum + 1);

}

//Uses symbol to identify which operation to use and references the answer.
void calculateCorrectAnswer(int a , int b , int& c , char symbol){

    if (symbol == '+'){

        c = a + b;

    } else if (symbol == '-'){

        c = a - b;

    } else if (symbol == '*'){

        c = a * b;

    }
}

//Evaluates the user's answer with the computer's.
void checkAnswer(int total , int user, int& g){

    if (total == user) {

        cout << "correct" << endl;
        g++;

    } else {

        cout << "incorrect" << endl;

    }

}

//Prints the prompt and request the input which is going to be used in the checkAnswer() function.
void doOneProblem(char symbol, int a , int b , int& d){
    

    cout << a << " " << symbol << " " << b << " = ";

    cin >> d;

    
}

//Prints what number of set is going to be done.
void printHeader(char c){

    if (c == '+'){

        cout << "Set #1" << endl;
        cout << "----------" << endl;

    } else if (c == '-'){

        cout << "Set #2" << endl;
        cout << "----------" << endl;

    } else {     

        cout << "Set #3" << endl;
        cout << "----------" << endl;

    }

}


void getMaxNum(int& m){

    cout << "What is the maximum number for this set? ";
    cin >> m;

}

//Does the the amount of set that the user choose to use
void doOneSet(char symbol, double n, double& g){

    int maxNum;

    cout << endl;

    printHeader(symbol);

    getMaxNum(maxNum);
    
    //Create exercises using the variable set from the user 
    for(int i = 0 ; i < n ; i++){
        int a = 0;
        int b = 0;
        int c;
        int d;

        generateOperands(a , b, maxNum);
        doOneProblem(symbol , a , b , d);
        calculateCorrectAnswer(a , b , c , symbol);
        checkAnswer(c , d, g);

    }
    
}

//Print Report of the results of the user
void printReport(double g1, double g2, double g3, double mN){

    cout << "Set#1: You got " << g1 << " correct out of "<< mN << " for " <<  fixed << setprecision(1) << (g1 * 100) / mN << "%" << endl;
    cout << "Set#2: You got " << g2 << " correct out of "<< mN << " for " <<  fixed << setprecision(1) << (g2 * 100) / mN << "%" << endl;
    cout << "Set#1: You got " << g1 << " correct out of "<< mN << " for " <<  fixed << setprecision(1) << (g3 * 100) / mN << "%" << endl;
    cout << "Overall you got "<< g1 + g2 + g3 << " correct out of " << mN * 3 << " for " << fixed << setprecision(1) << (mN * 3 * 100) / mN << "%" << endl;

}

