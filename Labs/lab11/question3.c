/*
name:Muhammad Abbas
id:23k-0068
description: this code will compare and find out the equality of 2 dates
date: 21/11/23
*/


#include <stdio.h>
#include <stdbool.h>

//a structure to whole the components of the date
struct date {
    int year;
    int month;
    int day;
};

//a boolean function to check the equality of the dates
bool compareDates(struct date date1, struct date date2) {
    if (date1.year == date2.year && date1.month == date2.month && date1.day == date2.day) {
        return true; // Dates are equal
    } else {
        return false; // Dates are not equal
    }
}

int main() {
	
	//intializing 2 date variables with the structure data type
    struct date date1;
    struct date date2;
    bool correct = true;

    //validation
    do {
        printf("Enter the first date's day: ");
        scanf("%d", &date1.day);

        if (date1.day < 1 || date1.day > 31) {
            correct = false;
            printf("Invalid input. Enter again.\n");
        } else {
            correct = true;
        }
    } while (!correct);

    // Validate month input for date1
    do {
        printf("Enter the first date's month: ");
        scanf("%d", &date1.month);

        if (date1.month < 1 || date1.month > 12) {
            correct = false;
            printf("Invalid input. Enter again.\n");
        } else {
            correct = true;
        }
    } while (!correct);
    
    
    printf("Enter the first date's year: ");
    scanf("%d", &date1.year);
    
    printf("\n\n\n");

    // validate
    do {
        printf("Enter the second date's day: ");
        scanf("%d", &date2.day);

        if (date2.day < 1 || date2.day > 31) {
            correct = false;
            printf("Invalid input. Enter again.\n");
        } else {
            correct = true;
        }
    } while (!correct);
    
    //validate month
    do {
        printf("Enter the first date's month: ");
        scanf("%d", &date2.month);

        if (date2.month < 1 || date2.month > 12) {
            correct = false;
            printf("Invalid input. Enter again.\n");
        } else {
            correct = true;
        }
    } while (!correct);
    
    printf("Enter the second date's year: ");
    scanf("%d", &date2.year);
    
    //calling function to check date equality
    if (compareDates(date1, date2)==true) {
        printf("Dates are equal\n");
    } else {
        printf("Dates are not equal\n");
    }

    return 0;
}
