/*
 * Student: Rodrigo Nochez
 * Class: CIS 254
 * Date: 03-10-2025
 * Instructor: Dave Harden
 * main.cpp 
 * github: @LunaRod6 (Process of my code thru commits)
 * 
 * This program draws a Rocket based on the input of the user.
 * 
 * The program ask the user for measurements, and based on that information it draws a Rocket using loops. if statements and functions.
 * 
*/
#include <iostream>
using namespace std;

void drawHorizontalLine(int numXs);
void drawOneRow(int numSpaces);
void draw2VerticalLines(int numSpaces, int numRows);
void drawCone(int width);
void drawBox(int width, int height);
void getDimensions(int& a, int& b, int& c);
void drawRocket(int a, int b, int c);

int main() {
    int a;
    int b;
    int c;

    getDimensions(a, b, c);
    drawRocket(a, b, c);


    return 0;
}

void getDimensions(int& a, int& b, int& c) {
    cout << "enter width: ";
    cin >> a;
    cout << "enter height of each stage: ";
    cin >> b;
    cout << "enter number of stages: ";
    cin >> c;
}

void drawHorizontalLine(int numXs) {
    for (int count = 0; count < numXs; count++){    
        cout << "X";
    }
    cout << endl;
}

void drawOneRow(int numSpaces) {
    cout << "X";
    for (int spaceCount = 0; spaceCount < numSpaces; spaceCount++){    
        cout << " ";
    }
    cout << "X" << endl;
}

void draw2VerticalLines(int numSpaces, int numRows) {
    for (int rowCount = 0; rowCount < numRows; rowCount++){    
        drawOneRow(numSpaces);
    }
}

void drawCone(int width) {

    int temp;
    int temp2;
    int numRow;
    
    //Confirms if the width is even or odd to evaluate how many "X" the program needs to write.

    if (width % 2 == 0){
        
        temp = (width / 2) - 1;
        temp2 = (width / 2);
        numRow = (width / 2);

    } else {

        temp = (width - 1) / 2;
        temp2 = temp;
        numRow = ((width - 1) / 2) + 1;

    }

    for (int j = 0; j < numRow; j++){

        for (int i = 0; i < width; i++){

            if (i == temp){
    
                cout << "X";
    
            } else if (i == temp2){
    
                cout << "X";
    
            } else {
    
                cout << " ";
            }
    
        }
        //Decreases the index in where the "X" is going to be drawn
        if (width % 2 == 0){

            temp--;
            temp2++;

        } else {
            temp--;
            temp2++;

        }

        cout << endl;
    }


}

void drawBox(int width, int height) {
    drawHorizontalLine(width);
    draw2VerticalLines(width-2, height-2);    
    drawHorizontalLine(width);
}

void drawRocket(int a, int b, int c) {

    drawCone(a);

    for(int i = 0; i < c; i++){
        drawBox(a, b);
    }

    drawCone(a);
}