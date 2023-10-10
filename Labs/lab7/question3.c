/*
name:Muhammad Abbas
date: 10/10/2023
purpose: sum of all the digits in a number
*/

#include <stdio.h>

main() {
	int num,sum=0,digit=1,dig,temp;
	printf("enter the digit: ");
	scanf("%d",&num);
	//store the number in a temporary variable so it can be manipulated
	temp=num;
	//count the number of digits in the number
	while(temp/10!=0) {
		temp=temp/10;
		digit=digit+1;
	}
	
	//reset temp to num for new calculations
	temp=num;
	
	//calculate sum of all the digits
	for(int j = 0;j<digit;j++) {
		dig=temp % 10;
		temp=temp/10;
		sum = sum+dig;
	}
	//print the sum
