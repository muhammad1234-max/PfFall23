/*
name: Muhammad abbas
ID:23K0068
Description:function to calculate factorial with recursion
date:31/10/23
*/
#include<stdio.h>

int factorial(int n) {
	if(n==0||n==1) {
		//base case
		return 1;
	} else {
		//recursive case
		return n * factorial(n-1);
	}
}

main() {
	int N;
	printf("this program will calculate factorial of any number u want\n");
	printf("enter the number: ");
	scanf("%d",&N);
	
	if (N < 0) {
		//checking for error
        printf("Factorial of a negative number is undefined.\n");
    } else {
    	//calling the function
        unsigned long long fact = factorial(N);
        printf("Factorial of %d is %llu\n", N, fact);
    }
}
