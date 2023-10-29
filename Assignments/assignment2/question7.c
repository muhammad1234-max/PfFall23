/*
name: Muhammad Abbas
ID:23k-0068
description: A C program that hold the age and price data of a collection of shirts and sorts 
the list based on ascending order of age and descendingn order of price
date:29/10/23
*/

#include <stdio.h>

int main() {
    int shirts, i, j, temp1, temp2;
    
    //entering the row length for the 2-d array
    printf("Enter the number of shirts for which the system will hold the data: ");
    scanf("%d", &shirts);
    
    //initializing the array
    //the column length is fixed as column 0 will represent age and column 1 will represent price
    int shirtdata[shirts][2];
    
    //populating the array
    for (i = 0; i < shirts; i++) {
        printf("Enter data for shirt %d:\n", i + 1);
        printf("Enter age for shirt %d: ", i + 1);
        scanf("%d", &shirtdata[i][0]);
        printf("Enter price for shirt %d: ", i + 1);
        scanf("%d", &shirtdata[i][1]);
        printf("\n");
    }
    
    //printing orignal list
    printf("this is the original data list\n");
    for (i = 0; i < shirts; i++) {
        printf("(%d, %d)\n", shirtdata[i][0], shirtdata[i][1]);
    }
    
    // Bubble Sort based on age in ascending order
    for (i = 0; i < shirts - 1; i++) {
        for (j = 0; j < shirts - i - 1; j++) {
            if (shirtdata[j][0] > shirtdata[j + 1][0]) {
                temp1 = shirtdata[j][0];
                temp2 = shirtdata[j][1];
                shirtdata[j][0] = shirtdata[j + 1][0];
                shirtdata[j][1] = shirtdata[j + 1][1];
                shirtdata[j + 1][0] = temp1;
                shirtdata[j + 1][1] = temp2;
            }
        }
    }
    
    //printing list for first scenario
    printf("\nSorted list in ascending order with respect to Age:\n");
    for (i = 0; i < shirts; i++) {
        printf("(%d, %d)\n", shirtdata[i][0], shirtdata[i][1]);
    }

    // Bubble Sort based on price in ascending order
    for (i = 0; i < shirts - 1; i++) {
        for (j = 0; j < shirts - i - 1; j++) {
            if (shirtdata[j][1] < shirtdata[j + 1][1]) {
                temp1 = shirtdata[j][0];
                temp2 = shirtdata[j][1];
                shirtdata[j][0] = shirtdata[j + 1][0];
                shirtdata[j][1] = shirtdata[j + 1][1];
                shirtdata[j + 1][0] = temp1;
                shirtdata[j + 1][1] = temp2;
            }
        }
    }
    
    //printing list for second scenario
    printf("\nSorted list in descending order with respect to Price:\n");
    for (i = 0; i < shirts; i++) {
        printf("(%d, %d)\n", shirtdata[i][0], shirtdata[i][1]);
    }

    return 0;
}
