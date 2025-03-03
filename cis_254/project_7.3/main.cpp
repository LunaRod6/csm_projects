/*
 * Student: Rodrigo Nochez
 * Class: CIS 254
 * Date: 03-03-2025
 * Instructor: Dave Harden
 * main.cpp 
 * 
 * This program counts the number of words inside a .txt file.
 * 
 * The program reads the words inside a txt file and separates them for every space. It outputs the total amount of words counted.
 * 
*/

#include <iostream>
#include <fstream>
using namespace std;

ifstream infile;
string fileName;
string fileString;
int words;

int main () {

    do {

    cout << "Enter the filename: ";
    cin >> fileName;

    infile.open(fileName);

    if (fileName == "quit") {
        
        break;
    
    } else if (!infile) {

        cout << "Couldn't open file." << endl;

    } else {
        
        words = 0;
        infile >> fileString;

        while (infile) {

            words++;
            infile >> fileString;
        }

        cout << "The file has " << words << " words." << endl;
        infile.close();

    }

    } while (fileName != "quit");


    return 0;

}
