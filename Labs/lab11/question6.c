/*
name:Muhammad Abbas
ID:23k-0068
Description: this code will get system time from the PC and add 45 days in it and return the new date
date:21/11/23
*/

#include <stdio.h>
#include <Windows.h>

// Structure to represent a date
struct Date {
    int day;
    int month;
    int year;
};

// Function to check if a given year is a leap year
int isLeapYear(int year) {
    return (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)); //conditions to check for leapyear
}

// Function to get the number of days in a month
int daysInMonth(int month, int year) {
    const int days[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (month == 2 && isLeapYear(year)) {
        return 29; // February in a leap year
    } else {
        return days[month];
    }
}

// this is a function that returns structures and this functions adds some days in a date
struct Date addDays(struct Date date, int numDays) {
    while (numDays > 0) {
        int daysInCurrentMonth = daysInMonth(date.month, date.year);//callinf function to get num of days in a month

        if (numDays > daysInCurrentMonth - date.day + 1) {//checks if days left are greater then the num of days to add as then calculation will extend to next month
            // Movingto the next months
            numDays -= daysInCurrentMonth - date.day + 1;
            date.day = 1;

            if (date.month == 12) { //if month are 12 then itll be counted as a whole year
                date.month = 1;
                date.year++;
            } else {
                date.month++;
            }
        } else {
            // Stay in the current month
            date.day += numDays;
            numDays = 0;
        }
    }

    return date;
}

int main() {
    // Get the current system time
    //this is a built in windows structure to store system time
    SYSTEMTIME systemTime;
    //this is a built in windows function that gets time from your system
    GetLocalTime(&systemTime);

    // Store the current date in the structure
    struct Date currentDate = {
        .day = systemTime.wDay,
        .month = systemTime.wMonth,
        .year = systemTime.wYear
    };

    // Add 45 days to the current date
    currentDate = addDays(currentDate, 45);

    // Display the final date
    printf("Current Date: %02d/%02d/%04d\n", systemTime.wDay, systemTime.wMonth, systemTime.wYear);
    printf("Final Date after adding 45 days: %02d/%02d/%04d\n", currentDate.day, currentDate.month, currentDate.year);

    return 0;
}
