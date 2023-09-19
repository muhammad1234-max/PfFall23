#include<stdio.h>
main() {
	int date;
	printf("enter time in 24 hour format: ");
	scanf("%d",&date);
	if(date>=5 && date<=11)
			printf("Good Morning");
	else if(date>=12 && date<=18)
			printf("Good evening");
	else if(date>=18 && date<=24)
			printf("Good night");
	else
			printf("why are you up go to sleep?");
}
