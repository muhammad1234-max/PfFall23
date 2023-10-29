/*
name:Muhammad Abbas
ID:23k-0068
Description: Write a ‘C’ program to find all different number pairs in the array that have sum equal to t.
date:29/10/23
*/

#include <stdio.h>

int main() {
    int n, i, targetsum, j;
    //inputs the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    //declares the array
    int arr[n];
    
    //populates the array
    for (i = 0; i < n; i++) {
        printf("Enter array value number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Enter the integer sum you want to check for: ");
    scanf("%d", &targetsum);

    int found = 0; // Keep track of whether any pairs were found
    
    //checks the array for the values using nested loops for checking each value with each value
    for (i = 0; i < n; i++) {
    	//j is started with none value after i so that value is not repeated
        for (j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == targetsum) {
                if (found > 0) {
                    printf(", ");
                }
                printf("(%d, %d)", arr[i], arr[j]);
                found++;
            }
        }
    }
    
    //in case no values correspond to the sum
    if (found == 0) {
        printf("No pairs found with sum %d\n", targetsum);
    } else {
        printf("\n");
    }

    return 0;
}
