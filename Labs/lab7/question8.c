
/*
name:Muhammad Abbas
ID: 23K-0068
description: populating an array and sorting it onto ascending order
date: 10/10/2023
*/

#include <stdio.h>

main() {
	//var declarations
	int n,temp,i,j;
	//size of the array in entered
	printf("enter the size of the array: ");
	scanf("%d",&n);
	
	int arr[n];
	//populating the array
	printf("enter values:\n");
	for( i=0;i<n;i++) {
		scanf("%d\n",&arr[i]);
	}
	
	
	printf("array in original form is:\n");
	for( i=0;i<n;i++) {
		printf("%d\n",arr[i]);
	}

    //sorting the array through a bubble sort
    for(j=0;j<n;j++) {
    	// n-j-1 is done for efficiency so a element that is already checked isnt checked again
    	for( i = 0;i<n-j-1;i++) {
        if (arr[i]>arr[i+1]) {
            temp=arr[i+1];
            arr[i+1]=arr[i];
            arr[i]=temp;
        }
    }
	}

    printf("this is the array sorted in ascending order:\n");
    for( i=0;i<n;i++) {
		printf("%d\n",arr[i]);
	}
}
