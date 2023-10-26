/*name: Muhammad Abbas
ID:23k-0068
description:uses the function to swap them. It should perform the swap, and display the
updated values.
Date: 24/10/23
*/

#include<stdio.h>

//a function to swap two integers
void swapInteger(int num1, int num2) {
	int temp;
	temp=num1;
	num1=num2;
	num2=temp;
	printf("%d %d",num1,num2);
}

main() {
	int one,two;
	printf("enter two numbers:\n");
	scanf("%d %d",&one,&two);
	
	printf("the two numbers are %d and %d\n",one,two);
	printf("after applying swap function:\n");
	//calling the function
	swapInteger(one,two);
}
