/*name: Muhammad Abbas
ID= 23k-0068
description: A program for a airport system to check for flight availabilty and ticket prices with 4 main functionalities
date: 26/10/23
*/

#include <stdio.h>

int main() {
	//hardcoding the morning flight availability and ticket prices
    int morning[5][2] = {
        {1, 300},
        {1, 320},
        {0, 0},
        {1, 380},
        {1, 375}
    };
    
    //hardcoding the evening flight availability and ticket prices
    int evening[5][2] = {
        {0, 0},
        {1, 310},
        {1, 280},
        {0, 0},
        {1, 400}
    };

    int option, min, day,i,daynum;
    int availableDaysMorning = 0;
    int availableDaysEvening = 0;
    char time1[] = "morning";
    char time2[] = "evening";

    printf("Flight Availability and Booking Options:\n");
    printf("1. Find the most convenient day and time slot\n");
    printf("2. Find the best morning flight options\n");
    printf("3. Find the best evening flight options\n");
    printf("4. Check availability and price for a specific day\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &option);

    switch (option) {
        case 1:

            for (i = 0; i < 5; i++) {
            	//check the availabilty of flights
                if (morning[i][0] == 1) {
                    availableDaysMorning++;
                }
                if (evening[i][0] == 1) {
                    availableDaysEvening++;
                }
            }
            
            //will check for both evening and morning times depending on the values
            if (availableDaysMorning > availableDaysEvening) {
            	//checks which day has the lowest ticket price and finds the day
                min = morning[0][1];
                day = 1;
                for ( i = 1; i < 5; i++) {
                    if (morning[i][1] < min && morning[i][0] == 1) {
                        min = morning[i][1];
                        day = i + 1;
                    }
                }
                printf("The preferred day is day %d and the preferred time is %s\n", day, time1);
            } else {
                min = evening[0][1];
                day = 1;
                for ( i = 1; i < 5; i++) {
                    if (evening[i][1] < min && evening[i][0] == 1) {
                        min = evening[i][1];
                        day = i + 1;
                    }
                }
                printf("The preferred day is day%d and the preferred time is %s\n", day, time2);
            }
            break;

        case 2://checks availability of flights in the morning
            printf("The days on which the flight is available in the morning are: ");
            min = morning[0][1];
            day = 1;
            for ( i = 0; i < 5; i++) {
                if (morning[i][0] == 1) {
                    printf("day %d, ", i + 1);
                    //will check which day has the lowest ticket price
                    if (morning[i][1] < min) {
                        min = morning[i][1];
                        day = i + 1;
                    }
                }
            }
            printf("\nOut of these days, the preferred one based on price will be day%d\n", day);
            break;

        case 3://checks flight availability for evening
            printf("The days on which the flight is available in the evening are: ");
            min = evening[0][1];
            day = 1;
            for ( i = 0; i < 5; i++) {
                if (evening[i][0] == 1) {
                    printf("day %d, ", i + 1);
                    //finds out the day with the lowest price
                    if (evening[i][1] < min) {
                        min = evening[i][1];
                        day = i + 1;
                    }
                }
            }
            printf("\nOut of these days, the preferred one based on price will be day %d\n", day);
            break;

        case 4://finds out flight availability for any day selected and checks for both morning and evening and returns the ticket price seperately
            printf("The days are represented by 1-5, which represent Monday to Friday, respectively.\n");
            printf("Enter the day number that you want to check for flight availability: ");
            scanf("%d", &daynum);

            if (morning[daynum - 1][0] == 1) {
                printf("The morning flight is available for today, and the ticket price is %d\n", morning[daynum - 1][1]);
            } else {
                printf("The morning flight is NOT available for today\n");
            }

            if (evening[daynum - 1][0] == 1) {
                printf("The evening flight is available for today, and the ticket price is %d\n", evening[daynum - 1][1]);
            } else {
                printf("The evening flight is NOT available for today\n");
            }
            break;

        default://incase invalid option was choosen
            printf("Invalid option input\n");
    }

    return 0;
}
