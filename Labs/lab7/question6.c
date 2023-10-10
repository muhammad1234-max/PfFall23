/*
name:Muhammad Abbas
ID: 23K-0068
description: populating an array and calulating how many times each array element is repeated
date: 10/10/2023
*/

#include <stdio.h>

int main() {
    int n,i,j,count=1;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid input. Please enter a valid size of the array.\n");
        return 1;
    }

    int arr[n];

    printf("Enter the elements of the array:\n");
    for ( i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Frequency of elements:\n");
    //outer iteration for sifting through the whole array
    for ( i = 0; i < n; i++) {
        if (arr[i] == -1) {
            continue; // If already counted, skip this element
        }
        
        //iteration to check for reptition of a single number  
        for ( j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count=count+1;
                arr[j] = -1; // Mark this element as counted
            }
        }
        //printing the number of iterations of each element in the array
        
        printf("Frequency of %d = %d\n", arr[i], count);
    }

    return 0;
}
