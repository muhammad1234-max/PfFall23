/*
name:Muhammad Abbas
date: 10/10/2023
purpose: division without using the dividing operator
*/

#include<stdio.h>

main() {
  //initializing all matrics
	int arr1[2][2],arr2[2][2],ans[2][2];
	//input first matrix
	printf("enter elements of the first matrix:\n ");
	 for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%d", &arr1[i][j]);
        }
    }

  
  //input second matrix 
    printf("enter elements of the second matrix:\n ");
	 for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%d", &arr2[i][j]);
        }
    }

  //multiplying matrix
     for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            ans[i][j] = 0;
            for (int k = 0; k < 2; k++) {
                ans[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }

  //displaying answer
    printf("Resultant matrix after multiplication:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", ans[i][j]);
        }
        printf("\n");
    }
}
