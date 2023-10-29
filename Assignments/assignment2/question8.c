/*
name: Muhammad Abbas
ID:23k=0068
Description: a program that calculates the persistence number of an integer and keeps doing that until EOF is entered by user to exit the program
date:
*/

#include <stdio.h>
#include <string.h>

// Function to calculate the persistence of an integer
int calculatePersistence(int n) {
    int persistence = 0;
    
    //this outer while loop is run the differenet products till the product is less then 10 or only one digit
    while (n >= 10) {
        int product = 1;
        //this inner loop runs to calculate the product of each digit of a number
        while (n > 0) {
            product *= n % 10;
            n /= 10;
        }
        n = product;
        persistence++;
    }

    return persistence;
}

int main() {
    int num;
    int result;
    char input[100];  // Assuming a maximum input length of 99 characters

    while (1) {
        printf("Enter an integer or type 'EOF' to exit: ");
        
        if (fgets(input, sizeof(input), stdin) != NULL) {
            // Remove the newline character, if present
            //the data type size_t is an unsigned integer type used to represent the size of objects in bytes
            size_t len = strlen(input);
            if (input[len - 1] == '\n') {
                input[len - 1] = '\0';
            }
            
            //strcmp compares input string to EOF to check if they both are equal
            if (strcmp(input, "EOF") == 0) {
                printf("Exiting the program.\n");
                break; // Exit the loop when 'EOF' is entered
            }

            result = sscanf(input, "%d", &num);

            if (result != 1) {
                printf("Invalid input. Please enter a valid integer.\n");
                continue; // Continue to the next iteration of the loop
            }
            
            //calling the function to get the persistence for the input
            int persistence = calculatePersistence(num);
            printf("Persistence of %d is: %d\n", num, persistence);
        } else {
            printf("Error reading input.\n");
            break;
        }
    }

    return 0;
}
