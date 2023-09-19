#include<stdio.h>
main() {
	int num;
	printf("enter 8-bit binary number: ");
	scanf("%d",&num);
	if ((num/1000)%10==1 && (num/1000000)%10==1){
	printf("%d",num-1001000);
	} else
	if ((num/1000)%10==1)  
	printf("%d",num-1000);
	else  
	printf("%d",num-1000000);
	
}
