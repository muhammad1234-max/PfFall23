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

int main() {  
    char password[100];
    char correctpassword[] = "Secure123";

    printf("Enter the password: ");
    fgets(password, sizeof(password), stdin);

    // Remove the newline character from the input.
    size_t len = strlen(password);
    if (len > 0 && password[len - 1] == '\n') {
        password[len - 1] = '\0';
    }
    
    //strlen will check the length
    if (strlen(password) >= 8) {
    	//strcmp will check if both the password are equal
        if (strcmp(password, correctpassword) == 0) {
            printf("Login successful. Welcome!\n");
        } else {
            printf("Login failed. Incorrect password.\n");
        }
    } else {
        printf("Password length is incorrect. It should be at least 8 characters.\n");
    }

    return 0;
}
