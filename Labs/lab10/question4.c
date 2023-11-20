/*
name:Muhammad Abbas
id:23k-0068
Description: code to reverse words in a string while keeping the order of the words using Dynamic memory allocation
date:21/11/23
*/

#include <stdio.h>
#include <stdlib.h> //library for DMA function
#include <string.h>

// Function to reverse a word using pointers
void reverseWord(char *start, char *end) {
    char temp;
    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;
        start=start+1;
        end=end-1;
    }
}

// Function to reverse each word in a sentence using DMA
void reverseSentenceWords(char *sentence) {
    
	//both start and end pointers are initialized to the first address of the sentence
	char *start = sentence;
    char *end = sentence;
    //calculating the length of the sentence
    int length = strlen(sentence);

    // Reverse the entire sentence
    reverseWord(start, start + length - 1);//start+length-1 will take to the last location in the sentence

    // Traverse the reversed sentence
    while (*end) {//loop will runn while ennd of the sentence is not reached
        // If a space or end of sentence is encountered
        if (*end == ' ' || *end == '\0') {
            // Reverse the word
            reverseWord(start, end - 1);
            // Move to the next word as the +1 will move forward from the space between words
            start = end + 1;
        }
        end=end+1;
    }
    
    //this function call is to reverse the first and last words as they dont confirm to the space condition
    reverseWord(sentence, sentence + length - 1);


}

int main() {
    // Maximum length of the sentence
    int maxLength = 1000;
    //malloc has allocated memory for the array sentence on the heap
    char *sentence = (char *)malloc(maxLength* sizeof(char));

    //error catching for the scenario if memory is not available
    if (sentence == NULL) {
        printf("Memory allocation failed.\n");
        return 1; // Return an error code
    }
    

    // Input the sentence
    printf("NOTE!!!!!!!!!!!!!!!!:\nKindly enter the sentence after giving one space\nto account for a exception in the code.\n\n");
    printf("Enter a sentence:");
    //the below function is used for input of the string
    fgets(sentence, maxLength, stdin);

    // Remove the newline character from the input
    sentence[strcspn(sentence, "\n")] = '\0';

    // Reverse each word in the sentence
    reverseSentenceWords(sentence);

    // Print the modified sentence
    printf("Modified sentence:%s\n", sentence);

    // Free dynamically allocated memory
    free(sentence);

    return 0;
}
