/*
 * Student: Rodrigo Nochez
 * Class: CIS 254
 * Date: 04-16-2025
 * Instructor: Dave Harden
 * main.cpp 
 * github: @LunaRod6 (Process of my code thru commits)
 * 
 * This program ask the user a year and the day the 1st of January to display a Calendar
 * 
 * The program has two similar functions with different parameters depending if they want a full calendar or just an specific month. The program has a function to calculate if it is a leap year, after that, it analyzes on which day of the month to start counting depending on the user's input. 
 * 
*/

#include<iostream>
#include<iomanip>
using namespace std;

const int DAYS_IN_WEEK = 7;
const int MONTHS_IN_YEAR = 12;

bool isLeap(int year);
<<<<<<< HEAD
=======
void thirtyDays(int i);
int isFebruary(int i, bool leapBool);
int thirtyOneDays(int i);
void beginningOfDay(int day, int& startingDay, int& isSaturday);
int printCalendar(int startingDay, int days, int isSaturday);
>>>>>>> alt-history
void printMonth(int year, int day);
void printMonth(int year, int month, int day);

int main() {
    int year;
    int day;

    cout << "What year do you want a calendar for? ";
    cin >> year;
    cout << "What day of the week does January 1 fall on?"<< endl;
    cout << "(Enter 0 for Sunday, 1 for Monday, 6 for Saturday, etc.): ";
    cin >> day;
    printMonth(year, day);

    return 0;
}

bool isLeap (int year) {

<<<<<<< HEAD
=======




//evaluates if a year is leap
bool isLeap(int year) {

>>>>>>> alt-history
    bool leapBool;

    if ((year % 4 == 0 && year % 100 == 0) && year % 400 == 0) {

        leapBool = true;

    } else if (year % 4 == 0 && year % 100 == 0) {

        leapBool = false;

    } else if (year % 4 == 0) {

        leapBool = true;
        
    }

    return leapBool;
<<<<<<< HEAD


=======
}




//return if a month has 30 days
void thirtyDays(int i) {
    
    if (i == 3) {

        cout << setw(13) << "April" << setw(13) << endl << endl;

    } else if (i == 5) {

        cout << setw(13) << "June" << setw(13) << endl << endl;
        

    } else if (i == 8) {

        cout << setw(13) << "September" << setw(13) << endl << endl;

    } else if (i == 10) {

        cout << setw(13) << "November" << setw(13) << endl << endl;

    }

>>>>>>> alt-history
}





<<<<<<< HEAD
int dayOfMonth (int i, bool leapBool) {

    int days;

=======
//returns the days for february
int isFebruary(int i, bool leapBool) {
    
    int days;

    cout << setw(13) << "February" << setw(13) << endl << endl;
            if (leapBool == true) {

                days = 29;

            } else {

                days = 28;

            }

            return days;
}





//returns how many days a month has
int thirtyOneDays(int i) {

    int days = 30;

>>>>>>> alt-history
    if (i == 0) {

        cout << setw(13) << "January" << setw(13) << endl << endl;
        days = 31;

<<<<<<< HEAD
    } else if (i == 1) {

        cout << setw(13) << "February" << setw(13) << endl << endl;
        if (leapBool == true) {

            days = 29;

        } else {

            days = 28;

        }

    } else if (i == 2) {

        cout << setw(13) << "March" << setw(13) << endl << endl;
        days = 31;

    } else if (i == 3) {

        cout << setw(13) << "April" << setw(13) << endl << endl;
=======
    } else if (i == 2) {

            cout << setw(13) << "March" << setw(13) << endl << endl;
            days = 31;
>>>>>>> alt-history

    } else if (i == 4) {

        cout << setw(13) << "May" << setw(13) << endl << endl;
        days = 31;

<<<<<<< HEAD
    } else if (i == 5) {

        cout << setw(13) << "June" << setw(13) << endl << endl;
        

=======
>>>>>>> alt-history
    } else if (i == 6) {

        cout << setw(13) << "July" << setw(13) << endl << endl;
        days = 31;

    } else if (i == 7) {

        cout << setw(13) << "August" << setw(13) << endl << endl;
        days = 31;

<<<<<<< HEAD
    } else if (i == 8) {

        cout << setw(13) << "September" << setw(13) << endl << endl;

=======
>>>>>>> alt-history
    } else if (i == 9) {

        cout << setw(13) << "October" << setw(13) << endl << endl;
        days = 31;

<<<<<<< HEAD
    } else if (i == 10) {

        cout << setw(13) << "November" << setw(13) << endl << endl;

=======
>>>>>>> alt-history
    } else if (i == 11) {

        cout << setw(13) << "December" << setw(13) << endl << endl;
        days = 31;

<<<<<<< HEAD
    }

    return days;
=======
    } else {

        thirtyDays(i);

    }


    return days;

>>>>>>> alt-history
}





<<<<<<< HEAD
int startDay (int day) {

    int startingDay;
=======

//Indicates the first day of the month and evaluates the weeks in the month
void beginningOfDay(int day, int& startingDay, int& isSaturday) {
>>>>>>> alt-history

    if (day == 0) {

        startingDay = 2;
<<<<<<< HEAD
=======
        isSaturday = 7;
>>>>>>> alt-history

    } else if (day == 1) {

        startingDay = 5;
<<<<<<< HEAD
=======
        isSaturday = 6;
>>>>>>> alt-history

    } else if (day == 2) {

        startingDay = 8;
<<<<<<< HEAD

    } else if (day == 3) {

        startingDay = 11;

    } else if (day == 4) {

        startingDay = 14;

    } else if (day == 5) {

        startingDay = 17;

    } else if (day == 6) {

        startingDay = 20;

    }

    return startingDay;

}




int firstSaturday (int day) {

    int isSaturday;

    if (day == 0) {
        isSaturday = 7;

    } else if (day == 1) {
        isSaturday = 6;

    } else if (day == 2) {
=======
>>>>>>> alt-history
        isSaturday = 5;

    } else if (day == 3) {

<<<<<<< HEAD
=======
        startingDay = 11;
>>>>>>> alt-history
        isSaturday = 4;

    } else if (day == 4) {

<<<<<<< HEAD
=======
        startingDay = 14;
>>>>>>> alt-history
        isSaturday = 3;

    } else if (day == 5) {

<<<<<<< HEAD
=======
        startingDay = 17;
>>>>>>> alt-history
        isSaturday = 2;

    } else if (day == 6) {

<<<<<<< HEAD
=======
        startingDay = 20;
>>>>>>> alt-history
        isSaturday = 1;

    }

<<<<<<< HEAD
    return isSaturday;
}

//Prints a full calendar
=======
}





//Prints the numbers in the calendar
int printCalendar(int startingDay, int days, int isSaturday) {

    int count = 0;
    int weekCount = 0;

    for (int j = 0; j < startingDay + days; j++) {
            
        if (j == startingDay) {

            count++;
            cout << count;

        } else if (count == 0){

            cout << " ";

        } else if (count > 8) {

            count++;
            cout << " " << count;

        } else {

            count++;
            cout << "  " << count;

        }
        
        if (count == isSaturday){

            weekCount = 7;

        }

        if (weekCount == 7){
            
            cout << endl;
            weekCount = 1;

        } else if(weekCount > 0) {

            weekCount++;

        }
    }
        if (weekCount == 1){

            cout << endl;

        } else {

            cout << endl << endl;

        }


        return weekCount;

    }





//Displays a full calendar
>>>>>>> alt-history
void printMonth(int year, int day) {
    
    //leapBool evaluates if it is a leap year, startingDay stores on which day the calendar should start every month, weeekCount helps to know when to end a line.
    bool leapBool = false;
    int startingDay;
<<<<<<< HEAD
    int weekCount = 0;

    
=======

>>>>>>> alt-history
    leapBool = isLeap(year);

    cout << setw(11) << year << setw(11) << endl << endl;


    for (int i = 0; i < MONTHS_IN_YEAR; i++){

        //days helps to know how many days a month has, count helps on displaying the date number, isSaturday tells the program when the date is going to be Saturday so it can do the first end line.
        int days = 30;
        int isSaturday = 0;
        

<<<<<<< HEAD
       days = dayOfMonth(i,leapBool);
=======
        if (i == 1) {

            days = isFebruary(i, leapBool);

        } else {

            days = thirtyOneDays(i);
            
        }
>>>>>>> alt-history

        //User choice and index S(0 = 2) M(1 = 5) T(2 = 8) W(3 = 11) T(4 = 14) F(5 = 17) S(6 = 20)
        cout << "  S  M  T  W  T  F  S" << endl << "---------------------" << endl;

<<<<<<< HEAD
        startingDay = startDay(day);
        isSaturday = firstSaturday(day);

        for (int j = 0; j < startingDay + days; j++) {
            
            if (j == startingDay) {

                count++;
                cout << count;

            } else if (count == 0){

                cout << " ";

            } else if (count > 8) {

                count++;
                cout << " " << count;

            } else {

                count++;
                cout << "  " << count;

            }
            
            if (count == isSaturday){

                weekCount = 7;

            }

            if (weekCount == 7){
                
                cout << endl;
                weekCount = 1;

            } else if(weekCount > 0) {

                weekCount++;

            }


        }

        if (weekCount == 1){

            cout << endl;

        } else {

            cout << endl << endl;

        }

        day = weekCount - 1;
        weekCount = 0;
=======
        beginningOfDay(day, startingDay, isSaturday);
>>>>>>> alt-history

        day = printCalendar(startingDay, days, isSaturday) - 1;
        //weekCount = 0;
        
    }
}





//Displays only a month
void printMonth(int year, int month, int day) {

    month--;
    bool leapBool = false;
    int startingDay;

<<<<<<< HEAD
    isLeap(year);
=======
    leapBool = isLeap(year);
>>>>>>> alt-history

        int days = 30;
        int isSaturday = 0;
        

        if (month == 1) {

            days = isFebruary(month, leapBool);

        } else {

<<<<<<< HEAD
            cout << endl << endl;

        }

        day = weekCount - 1;
        weekCount = 0;

      

}




void days31 () {
=======
            days = thirtyOneDays(month);
            
        }

        //User choice and index S(0 = 2) M(1 = 5) T(2 = 8) W(3 = 11) T(4 = 14) F(5 = 17) S(6 = 20)
        cout << "  S  M  T  W  T  F  S" << endl << "---------------------" << endl;

        beginningOfDay(day, startingDay, isSaturday);

        day = printCalendar(startingDay, days, isSaturday) - 1;
>>>>>>> alt-history

}