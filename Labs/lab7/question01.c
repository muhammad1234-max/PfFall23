/*
name:Muhammad Abbas
date: 10/10/2023
purpose: division without using the dividing operator
*/

#include<stdio.h>

main() {
	int divisor,dividend,quotient=0;
	printf("enter dividend: ");
	scanf("%d",&dividend);
	printf("enter divisor: ");
	scanf("%d",&divisor);
	
	if(divisor==0) { //check if denominator is zero
		printf("error division by zero");
	} else {
	    if(dividend<divisor) { //checks if numerator i bigger then denominator 
		printf("%d",quotient);
		printf("the remainder is:%d",dividend);
	    } else { 
		     while(dividend>=divisor) {
		 	 dividend=dividend-divisor; //keeps subtracting till numerator smaller then denominator
			 quotient=quotient+1; //the num of subtractions is given as quotient
		}
	}
	printf("the quotient is:%d\n",quotient);
	printf("the remainder is:%d",dividend); //the leftover dividend is the remainder
	}

	
}
