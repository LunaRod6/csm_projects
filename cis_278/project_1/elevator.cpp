#include <iostream>
#include <string>
#include "elevator.h"

using namespace std;


Elevator::Elevator() {

    floor = 1;
    doorStatus = "open";
    up = false;
    down = false;
    open = false;
    close = false;

}

int Elevator::getFloor() const {

    return floor;

}

bool Elevator::getUp() const {

    return up;
    
}