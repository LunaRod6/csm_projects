#include <iostream>
#include "elevator.h"

using namespace std;

int main() {

    Elevator elevator1;

    cout << "Floor: " << elevator1.getFloor() << endl;
    cout << "Button: " << elevator1.getUp() << endl;

    return 0;

}