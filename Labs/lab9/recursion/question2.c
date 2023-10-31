/*
name: Muhammad abbas
ID:23K0068
Description:this program multiplies 2 numbers with recursion
date:31/10/23
*/
#include<stdio.h> 

int multiply(int a, int b) {
	if(b==0) {
		//base case
	    return 0;
	} else if(b>0) {
		//recursive case
        return a+multiply(a,b-1);
	} else {
		//dealing with neg numbers
	    return -multiply(a, -b);
	}
}

main() {
	int a,b,product;
	printf("enter num 1:");
	scanf("%d",&a);
	printf("enter num 2:");
	scanf("%d",&b);
	
	//calling the function
	product = multiply(a,b);
	
	printf("the product is:%d",product);
	
}
