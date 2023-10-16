/*
name:Muhammad Abbas
ID: 23K-0068
description: Given an unsorted array A of size N that contains only non-negative integers, find a continuous sub-
array which adds to a given number S. In case of multiple subarrays, return the subarray which comes
first on moving from left to right.
date: 16/10/2023
*/

#include <stdio.h>

main() {
	
	//initializing variables
	int S,n,sum=0,start=1,end=0,found=0,i;
	
	//entering the size of the array
	printf("enter size of the array:");
	scanf("%d",&n);
	
	int arr[n];
	
	//populatinng the array
	printf("populate the array: ");
	for(i=0;i<n;i++) {
		scanf("%d",&arr[i]);
	}
	
	printf("enter the target sum:");
	scanf("%d",&S);
	
	//this loop will run till the whole array isnt checked
	while(end<n) {
		if(sum==S) {
			found=1;
			break;
		} else if(sum<S) {
			end = end +1;
			if(end<n) {
				sum = sum + arr[end];
			}
		} else {
			sum = sum - arr[start];
			start = start + 1;
		}
	}
	
	//prints a msg telling which the start and end position of the sub-array and the array itself
	if (found==1) {
		printf("the elements from index %d to %d when summed result in %d\n",start,end,S);
		for(i = start;i<=end;i++) {
			printf("%d\n",arr[i]);
		}
	} else {
		printf("no subarray within the array resulted in the sum %d",S);
	}
		
}
