/*
name:Muhammad Abbas
ID: 23K-0068
description: Junaid wants to keep track of all mobile phone bills in his X company branches. Let Y be the number
of company mobile phones in each branch. Create a 2D array for bill amount, where keep track of
branch ID in row subscript, mobile phone IDs in column subscript. Ask users to enter a bill for all mobile
phones in all branches. Your program should print the following:
- Total bill for all branches
- Total bill for each branch
- Branch ID where maximum bill arrived
- Branch and Mobile Phone IDs where bill is highest of all mobile phones.
date: 10/10/2023
*/

#include <stdio.h>

int main() {
	//initializing all variables
    int r, c, i, j, sum = 0, total = 0, maxbranch = 0, maxphone = 0, maxbill = 0;

    //entering num of branches and num of phones each branch will have
    printf("Enter the number of branches: ");
    scanf("%d", &r);
    printf("Enter the number of mobile phones in each branch: ");
    scanf("%d", &c);

    int rec[r][c];
    int branchtotal[r];

    //populating the 2-d array
    for (i = 0; i < r; i++) {
        branchtotal[i] = 0;
        printf("Enter bills for branch number %d\n", i + 1);
        for (j = 0; j < c; j++) {
            printf("Enter bill for mobile phone number %d: ", j + 1);
            scanf("%d", &rec[i][j]);
            branchtotal[i] += rec[i][j];
            //calculating max values
            if (rec[i][j] > maxbill) {
                maxbill = rec[i][j];
                maxbranch = i;
                maxphone = j;
            }
        }
    }

    printf("\n\n\n");
    // Display the bills for each branch
    for (i = 0; i < r; i++) {
        printf("Bills for Branch %d:\n", i + 1);
        for (j = 0; j < c; j++) {
            printf("Mobile Phone %d: %d\n", j + 1, rec[i][j]);
            sum += rec[i][j];
        }
        printf("The total bill for branch %d is: %d\n", i + 1, branchtotal[i]);
        total += branchtotal[i];
    }

    printf("The total bill for all branches is %d\n", total);
    printf("The branch with the highest bill is Branch %d\n", maxbranch + 1);
    printf("The branch and mobile phone with the highest bill is Branch %d, Mobile Phone %d\n", maxbranch + 1, maxphone + 1);

    return 0;
}

