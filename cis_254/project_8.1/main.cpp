#include <iostream>
using namespace std;

void drawHorizontalLine(int numXs);
void drawOneRow(int numSpaces);
void draw2VerticalLines(int numSpaces, int numRows);
void drawCone();
void drawBox(int width, int height);

int main() {

    drawCone();
    drawBox();
    drawBox();
    drawCone();


    return 0;
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
    
    //Confirms if the width is even or odd to evaluate how many "X" the program needs to write.
    if (width % 2 == 0){
        
        temp = (width / 2) - 1;
        temp2 = (width / 2);

    } else {

        temp = ((width - 1) / 2);

    }

    for (int i = 0; i <= width; i++){

        if (i == temp){

            cout << "X";

        } else {

            cout << " ";
        }

    }


}

void drawBox(int width, int height) {
    drawHorizontalLine(width);
    draw2VerticalLines(width-2, height-2);    
    drawHorizontalLine(width);
}