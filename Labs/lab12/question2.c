/*
name: Muhammad Abbas
ID:23k-0068
description: Creates 2 files and open them in binary and check if they are equal or not
date:28/11/23
*/

#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 1024

//function prototyping for a function for comparing files
int compareFiles(const char *file1, const char *file2);

int main() {
	
	//intializing 2 files
    const char *file1 = "file1.docx";
    const char *file2 = "file2.docx";

    // Compare the contents of the files
    if (compareFiles(file1, file2)) {
        printf("Files are equal.\n");
    } else {
        printf("Files are not equal.\n");
    }

    return 0;
}

int compareFiles(const char *file1, const char *file2) {
    //opening file in binary reading mode
	FILE *f1 = fopen(file1, "rb");
    FILE *f2 = fopen(file2, "rb");
    
    //checking if files are empty or not
    if (f1 == NULL || f2 == NULL) {
        perror("Error opening files for comparison");
        exit(EXIT_FAILURE);
    }
    
    //initialzing buffer memory for readin binary
    unsigned char buffer1[BUFFER_SIZE];
    unsigned char buffer2[BUFFER_SIZE];
    //variables for storing size
	size_t bytesRead1, bytesRead2;

    do {
    	//checks how many bytes are there in the buffer
        bytesRead1 = fread(buffer1, 1, sizeof(buffer1), f1);
        bytesRead2 = fread(buffer2, 1, sizeof(buffer2), f2);
        
        //checking if all the bytes are equal
        if (bytesRead1 != bytesRead2 || /*function to check the memory*/memcmp(buffer1, buffer2, bytesRead1) != 0) {
            fclose(f1);
            fclose(f2);
            return 0; // Files are not equal
        }
    } while (bytesRead1 > 0);//will run till num of bytes are available

    fclose(f1);
    fclose(f2);

    return 1; // Files are equal
}
