/*
Name:Muhammad Abbas
ID: 23k-0068
Description:C program with a user-defined function calculate to perform basic arithmetic
operations such as addition, subtraction, multiplication, and division. The
program should take two numbers and an operation choice as input, and then use
the function to perform the operation.
Date: 24/10/23
*/

#include<stdio.h>

//a calculator function
void calculator(float num1, float num2, char s) {
	switch(s) {
		case '+':
			printf("%f",num1+num2);
			break;
			
		case '-':
			printf("%f",num1-num2);
			break;
			
		case '*':
			printf("%f",num1*num2);
			break;
			
		case '/':
			if(num2==0) {
				printf("zero error");
			} else {
			    printf("%f",num1/num2);	
			}
			break;
			
		default:
			printf("invalid inputs");
	}
}

int main(void) {
	float op1,op2;
	char op;
	printf("enter operand 1:");
	scanf("%f",&op1);
	printf("\n");
	printf("enter operand 2:");
	scanf("%f",&op2);
	//clearing input buffer
	fflush(stdin);
	printf("enter operator:");
	scanf("%c",&op);
	//calling function
	calculator(op1,op2,op);
	
	return 0;
}
