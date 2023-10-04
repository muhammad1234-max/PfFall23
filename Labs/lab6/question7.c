/**
 * Programmer: Muhammad Abbas
 * Desc: a program to populate a variable sized array and calculate sum of all items within
 * Date: 10/4/23
*/

#include <stdio.h>

main() {
	int limit,sum=0;
	
	printf("enter the num of elements you want to enter in the array: ");
	scanf("%d",&limit);
	
	//array declaration
	int array[limit];
	
	//filling up the array with user input
	for(int i = 0; i < limit; i++) {
		printf("enter %d array items: ",limit);
		scanf("%d",&array[i]);
	}
	
	//calculating the sum of all the items in the array
	for(int i = 0; i < limit; i++) {
		sum = sum + array[i];
	}
	
	printf("the sum of all the items in the array is:%d",sum);
}
