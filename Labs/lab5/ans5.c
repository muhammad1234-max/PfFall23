#include<stdio.h>
main() {
	char input;
	printf("enter the character: ");
	scanf("%c",&input);
	 if (input >= 'a' && input <= 'z') {
        printf("it is a lowercase alphabet.");
    } else if (input >= 'A' && input <= 'Z') {
        printf("It is a uppercase alphabet.");
    } else if (input >= '0' && input <= '9') {
        printf("It is a digit.");
    } else {
        printf("It is a special character.");
    }
}
