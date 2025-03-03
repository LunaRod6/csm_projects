/*
 * Student: Rodrigo Nochez
 * Class: CIS 254
 * Date: 03-03-2025
 * Instructor: Dave Harden
 * main.cpp 
 * 
 * This program is intented to allow the user to select the quantity of number they want to input, and reply with the position of the first and last time that a number set by the programmer is provided. 
 * 
 * The program request the input of how many numbers the user wants to provide, then using loops the user provides the numbers until it reaches the limit set by himself, than the program searches for the desired number provided by the programmer and gives the user the first and last position of this number.
 * 
*/
#include <iostream>
using namespace std;

const int DESIRED_NUMBER = 7;

int main () {

    int value;
    int temp;
    bool aux;
    int firstPosition;
    int lastPosition;

    cout << "How many numbers will be entered? ";
    cin >> value;

    for (int i = 1; i < value; i++) {

        cout << "Enter num: ";
        cin >> temp;

        if (temp == DESIRED_NUMBER && aux == false) {

            firstPosition = i;
            aux = true;
            continue;

        } else if (temp == DESIRED_NUMBER) {

            lastPosition = i;
            continue;

        }

    }

    cout << "The first " << DESIRED_NUMBER << "was in position " << firstPosition << endl;
    cout << "The last " << DESIRED_NUMBER << "was in position " << lastPosition << endl;
    return 0;
}