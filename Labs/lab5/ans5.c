#include<stdio.h>
main() {
	char oper;
	float operand1,operand2,divans;
	printf("enter number1: ");
	scanf("%d",&operand1);
	printf("enter number2: ");
	scanf("%d",&operand2);
	printf("enter the operation to perform: ");
	scanf(" %c",&oper);
	switch (oper) {
		case '+':
			printf("%d",operand1+operand2);
			break;
		case '-':
			printf("%d",operand1-operand2);
			break;
		case '*':
			printf("%d",operand1*operand2);
			break;
		case '/':
			divans=operand1/operand2;
		    if (operand2 != 0) {
                printf("%f",divans);
            } else {
                printf("Division by zero is not allowed.");
            }
		    break;
	    default:
		    printf("invalid input");	
	}
}
