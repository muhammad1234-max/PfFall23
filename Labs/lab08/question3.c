/*
Name:Muhammad Abbas
ID: 23k-0068
Description:You are working on a text processing program. Create a C program that reads a
text input from the user and searches for a specific character (e.g., 'a')
within the text using the strchr function. Display the total count of
occurrences of the character in the input text.
Date: 24/10/23
*/

#include <stdio.h>
#include <string.h>

int main() {
	//an array to store string
    char text[100];
    char searchChar;
    int count = 0,i;
    
    //enter the string
    printf("Enter a string: ");
    fgets(text, sizeof(text), stdin);
    
    printf("Enter a character to search for: ");
    scanf(" %c", &searchChar); // Note the space before %c to consume any leading whitespace.
    
    //looping the whole string to find the character
    for (i = 0;/*increment to access next location*/ text[i] != '\0'; i++) {
        if (text[i] == searchChar) {
            count++;
        }
    }

    printf("Total occurrences of '%c' in the text: %d\n", searchChar, count);

    return 0;
}
