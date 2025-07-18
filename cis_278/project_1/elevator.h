//elevator.h
#ifndef ELEVATOR_H
#define ELEVATOR_H

class Elevator {

    public:

        Elevator();
        int getFloor() const;
        bool getUp() const;


    private:
        int floor;
        std::string doorStatus;
        bool up , down , open , close;


};


#endif