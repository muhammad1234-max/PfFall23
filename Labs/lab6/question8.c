/**
 * Programmer: Muhammad Abbas
 * Desc: a program to populate a array and display its contents in reverse order
 * Date: 10/4/23
*/

#include <stdio.h>

main() {
	int limit,sum=0;
	
	printf("enter the num of elements you want to enter in the array: ");
	scanf("%d",&limit);
	
	if(limit<0) {
		printf("the array limit has to be a positive number");
	}
	
	//array declaration
	int array[limit];
	
	
	//filling up the array with user input
	for(int i = 0; i < limit; i++) {
		printf("enter %d array items: ",limit);
		scanf("%d",&array[i]);
	}
	
	//reversing all data items within the array and printing them
	for(int i = limit-1;i>=0;i--) {
		printf("%d\n",array[i]);
	
	}
}
