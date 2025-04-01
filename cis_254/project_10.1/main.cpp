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
 * The program is divided in 6 phases this project is divided in different functions, from printing messages that helps the user to get inputs and also displaying the results and giving report of how well the user performed.
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
void doOneSet(char symbol, int n, int& g);
void printReport(int g1, int g2, int g3, int n);


int main(){

    int n;
    int good1 = 0;
    int good2 = 0;
    int good3 = 0;
    
    
    getProbsPerSet(n);
    //srand(static_cast<unsigned>(time(nullptr)));
    doOneSet('+', n, good1);
    doOneSet('-', n, good2);
    doOneSet('*', n, good3);
    printReport(good1, good2, good3, n);

    return 0;
}

//Ask the user how many sets they want to operate.
void getProbsPerSet(int& a){

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
void doOneSet(char symbol, int n, int& g){

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
void printReport(int g1, int g2, int g3, int n){

    int total = n * 3;
    double sTotal = n * 3;
    double percentage = n;
    int gTotal = g1 + g2 + g3;

    cout << endl;
    cout << "Set#1:  You got " << g1 << " correct out of "<< n << " for " <<  fixed << setprecision(1) << (g1 * 100) / percentage << "%" << endl;
    cout << "Set#2:  You got " << g2 << " correct out of "<< n << " for " <<  fixed << setprecision(1) << (g2 * 100) / percentage << "%" << endl;
    cout << "Set#3:  You got " << g3 << " correct out of "<< n << " for " <<  fixed << setprecision(1) << (g3 * 100) / percentage << "%" << endl;
    cout << "Overall you got "<< gTotal << " correct out of " << total << " for " << fixed << setprecision(1) << gTotal * 100 / sTotal << "%" << endl;

}

