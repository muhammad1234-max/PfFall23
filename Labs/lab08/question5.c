/*
Name:Muhammad Abbas
ID: 23k-0068
Description:In this C program, you are tasked with creating a function
called decideCarUsage that helps users decide whether they should use their car
on a particular day of the week. Users provide the numeric part of their car's
number and the day of the week (1 to 7). The program applies a simple rule:
even-numbered cars should be used on even days, and odd-numbered cars on odd
days. The function returns 1 if the car should be used and 0 if it should not.
Date: 24/10/23
*/

#include <stdio.h>

//defining the function
int decideCarUsage(int carNumber, int dayOfWeek) {
	if(dayOfWeek%2==0) {
		if(carNumber%2==0) {
			return 1;
		}else {
			return 0;
	    }
	} else {
		if(carNumber%2==1) {
			return 1;
		}else {
			return 0;
		}
	}
}

int main() {
    int carNumber, dayOfWeek;
    
    printf("Enter the numeric part of your car's number: ");
    scanf("%d", &carNumber);
    
    printf("Enter the day of the week (1 to 7): ");
    scanf("%d", &dayOfWeek);
    
    //conditions to check valid input
    if (carNumber >= 0 && dayOfWeek >= 1 && dayOfWeek <= 7) {
        int shouldUseCar = decideCarUsage(carNumber, dayOfWeek);
        if (shouldUseCar==1) {
            printf("You should use your car today.\n");
        } else {
            printf("You should not use your car today.\n");
        }
    } else {
        printf("Invalid input. Please enter a valid car number and day of the week.\n");
    }

    return 0;
}
