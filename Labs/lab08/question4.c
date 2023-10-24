/*
Name:Muhammad Abbas
ID: 23k-0068
Description:Your task is to create a C program that performs password length
validation and user authentication based on the given requirements below:
a) Prompts the user to enter a password.
b) Validates the entered password by checking if it is
at least 8 characters long.
c)If the password meets the length requirement, the
program should compare it to a stored password "Secure123."
d)If the entered password matches the stored password, display "Login successful.
Welcome!" Otherwise, display "Login failed. Incorrect password."
Date: 24/10/23
*/

#include <stdio.h>
#include <string.h>

main() {
	//an array to store password
    char password[100];
    //array to store correct password
    char correctpassword[]="Secure123";
    
    //enter the password
    printf("Enter the password: ");
    fgets(password, sizeof(password), stdin);
    
    
    if(/*this is used to compare the length*/strlen(password)>=8) {
    	if(/*this function will check if both the strings lexigraphically*/strcmp(password,correctpassword)==1) {
    		printf("correct password login successfully");
		} else {
			printf("incorrect password login failed");
		}
	} else {
		printf("the length is incorrect");
	}
    
}
