#include<iostream>
#include<iomanip>
using namespace std;

const int DAYS_IN_WEEK = 7;
const int MONTHS_IN_YEAR = 12;

void printMonth(int a, int c);
void printMonth(int a, int b, int c);

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

void printMonth(int a, int c) {
    
    bool leapBool = false;
    int startingDay;

    if ((a % 4 == 0 && a % 100 == 0) && a % 400 == 0) {

        leapBool = true;

    } else if (a % 4 == 0 && a % 100 == 0) {

        leapBool = false;

    } else if (a % 4 == 0) {

        leapBool = true;
        
    }


    cout << setw(11) << a << setw(11) << endl << endl;

    for (int i = 0; i < MONTHS_IN_YEAR; i++){

        int days = 30;
        int count = 0;

        if (i == 0) {

            cout << setw(13) << "January" << setw(13) << endl << endl;
            days = 31;

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

        } else if (i == 4) {

            cout << setw(13) << "May" << setw(13) << endl << endl;
            days = 31;

        } else if (i == 5) {

            cout << setw(13) << "June" << setw(13) << endl << endl;
            

        } else if (i == 6) {

            cout << setw(13) << "July" << setw(13) << endl << endl;
            days = 31;

        } else if (i == 7) {

            cout << setw(13) << "August" << setw(13) << endl << endl;
            days = 31;

        } else if (i == 8) {

            cout << setw(13) << "September" << setw(13) << endl << endl;

        } else if (i == 9) {

            cout << setw(13) << "October" << setw(13) << endl << endl;
            days = 31;

        } else if (i == 10) {

            cout << setw(13) << "November" << setw(13) << endl << endl;

        } else if (i == 11) {

            cout << setw(13) << "December" << setw(13) << endl << endl;
            days = 31;

        }

        //User choice and index S(0 = 2) M(1 = 5) T(2 = 8) W(3 = 11) T(4 = 14) F(5 = 17) S(6 = 20)
        cout << "  S  M  T  W  T  F  S" << endl << "---------------------" << endl;

        if (c == 0) {

            startingDay = 2;

        } else if (c == 1) {

            startingDay = 5;

        } else if (c == 2) {

            startingDay = 8;

        } else if (c == 3) {

            startingDay = 11;

        } else if (c == 4) {

            startingDay = 14;

        } else if (c == 5) {

            startingDay = 17;

        } else if (c == 6) {

            startingDay = 20;

        }

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

            
        }

        cout << endl << endl;

    }
}

void printMonth(int a, int b, int c) {
    
    bool leapBool = false;
    int startingDay;

    if ((a % 4 == 0 && a % 100 == 0) && a % 400 == 0) {

        leapBool = true;

    } else if (a % 4 == 0 && a % 100 == 0) {

        leapBool = false;

    } else if (a % 4 == 0) {

        leapBool = true;
        
    }


    for (int i = b - 1; i < b; i++){

        int days = 30;
        int count = 0;

        if (i == 0) {

            cout << setw(13) << "January" << setw(13) << endl << endl;
            days = 31;

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

        } else if (i == 4) {

            cout << setw(13) << "May" << setw(13) << endl << endl;
            days = 31;

        } else if (i == 5) {

            cout << setw(13) << "June" << setw(13) << endl << endl;
            

        } else if (i == 6) {

            cout << setw(13) << "July" << setw(13) << endl << endl;
            days = 31;

        } else if (i == 7) {

            cout << setw(13) << "August" << setw(13) << endl << endl;
            days = 31;

        } else if (i == 8) {

            cout << setw(13) << "September" << setw(13) << endl << endl;

        } else if (i == 9) {

            cout << setw(13) << "October" << setw(13) << endl << endl;
            days = 31;

        } else if (i == 10) {

            cout << setw(13) << "November" << setw(13) << endl << endl;

        } else if (i == 11) {

            cout << setw(13) << "December" << setw(13) << endl << endl;
            days = 31;

        }

        //User choice and index S(0 = 2) M(1 = 5) T(2 = 8) W(3 = 11) T(4 = 14) F(5 = 17) S(6 = 20)
        cout << "  S  M  T  W  T  F  S" << endl << "---------------------" << endl;

        if (c == 0) {

            startingDay = 2;

        } else if (c == 1) {

            startingDay = 5;

        } else if (c == 2) {

            startingDay = 8;

        } else if (c == 3) {

            startingDay = 11;

        } else if (c == 4) {

            startingDay = 14;

        } else if (c == 5) {

            startingDay = 17;

        } else if (c == 6) {

            startingDay = 20;

        }

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

            
        }

        cout << endl << endl;

    }
}