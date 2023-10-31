/*
name:Muhammad Abbas
ID:23k0068
description:this code will reverse a string that is entered using pointers
date:31/10/23
*/
#include <stdio.h>

//function to reverse string
void reverse(int *arr, int size) {
	//storing start location
	int *start = arr;
	//storing end location
    int *end = arr + size - 1;
    
    while (start < end) {
        // Swapping elements using pointers
        int temp = *start;
        *start = *end;
        *end = temp;

        // Move pointers
        start=start+1;
        end=end-1;
    }
}

int main() {
	int i,n=10;
	int arr[n];
	
	//populating array
	for(i=0;i<10;i++) {
		printf("enter array value %d: ",i+1);
		scanf("%d",&arr[i]);
		printf("\n");
	}
	//calling function
	reverse(arr,n);
	
	printf("reversed string:\n");
	for(i=0;i<10;i++) {
		printf("array value %d:%d",i+1,arr[i]);
		printf("\n");
	}
	
}
