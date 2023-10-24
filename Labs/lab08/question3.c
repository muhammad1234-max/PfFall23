/*
Name:Muhammad Abbas
ID: 23k-0068
Description:You are working on a text processing program. Create a C program that reads a
text input from the user and searches for a specific character (e.g., 'a')
within the text using the strchr function. Display the total count of
occurrences of the character in the input text.
Date: 24/10/23
*/

#include<stdio.h>
#include<string.h>


main() {
	int string[100];
	char c;
	int count=0;
	
	//entering a string in a array of characters
	printf("enter the string you want to check:\n");
	fgets(string,sizeof(string),stdin);
	
	printf("enter the character you want to find:");
	scanf("%c",&c);
	
	//definfing a pointer variable
	char *foundchar = strchr(string,c);
	//if char not found the function return a null character
	while(foundchar!=NULL) {
		count = count+1;
		foundchar = strchr(/*this will make the loop check the  next address location*/foundchar + 1,c);
	}
	
	printf("Total occurrences of '%c' in the text: %d\n", c, count);
	
	
}
