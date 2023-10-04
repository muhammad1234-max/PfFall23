/**
 * Programmer: Muhammad Abbas
 * Desc: program to populate a array and find out the biggest value annd smallest value in the array
 * Date: 10/4/23
*/

#include <stdio.h>

main() {
	int limit,sum=0,max,min;
	
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
	
	//initializing the values to the first value in the array
	max=min=array[0];
	
	//loop to check the whole array
	for(int i = 0;i<limit;i++) {
		//condition to check max values
		if(array[i]>max) {
			max=array[i];
		}
		//condition to check min values
		if(array[i]<min) {
			min=array[i];
		}
	}
	
	printf("the smallest value in the array is: %d\n",min);
	printf("the largest value in the array is: %d\n",max);
}
