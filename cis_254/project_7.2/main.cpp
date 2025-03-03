/*
 * Student: Rodrigo Nochez
 * Class: CIS 254
 * Date: 03-03-2025
 * Instructor: Dave Harden
 * main.cpp 
 * 
 * This program ask the user for a number and replies with the sum of all the square powers from 1 to the number provided by the user.
 * 
 * The program request the input of an integer, then enters a while loop that can only be exited by a number smaller or equal to 0. while in the loop it uses a for loop to create the square powers and adds them to the sum variable that it will display the total.
 * 
*/

#include <iostream>
#include <math.h>
using namespace std;

int main () {

    int value;
    int sum = 0;

    cout << "Enter an integer larger than 0 (0 or less to quit): ";
    cin >> value;

    while (value > 0) {

        for (int i = 1; i <= value; i++) {
            sum += pow(i,i);
        }

        if (sum > 0) {

            cout << "The sum of the squares from 1 to " << value << " is " << sum << endl;
        
        }

    cout << "Enter an integer larger than 0 (0 or less to quit): ";
    cin >> value;

    }
    
}