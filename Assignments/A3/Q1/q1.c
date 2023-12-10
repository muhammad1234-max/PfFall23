/*
Name:Muhammad Abbas
ID:23k-0068
Description: A program that runs using command line arguments and calculates a matrix of max values from 2x2 submatrices of the input matrix
Date:9/12/23
*/

#include <stdio.h>

// Function prototype to count the number of lines in the file
int lines_Count(FILE *file);

int main(int argc/*holds num of arguments*/, /*holds an array of character strings with all args*/char *argv[])/*used command line arguments*/ {
    // Print the name of the input file
    printf("Muhamad Abbas\n23k-0068\n\n");
	printf("any file can be passed in this code.");
	printf("%s\n", argv[1]);

    // Open the file for reading
    FILE *file;
    file = fopen(argv[1]/*the first argument is always the file name*/, "r");

    // error handling
    if (file != NULL) {
        printf("File opened successfully\n");
    }

    // Count the number of lines in the file
    int n = lines_Count(file);

    // Declare a 2D array to store the elements from the file
    int arr[n][n];/*the matrix should always have an order that is equal and even number*/

    // Declare a 2-d array to store resultant matrix
    int result_arr[n / 2][n / 2];

    // Initialize the arr array with zeros
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            arr[i][j] = 0;
        }
    }

    // Read elements from the file into the "arr" array
    while (!feof(file)) {
        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
                fscanf(file, " %d,\n", &arr[i][j]);
            }
        }
    }

    // Print the elements in the "arr" array
    printf("Elements in the array:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }

    // Process the elements in "arr" array to get the result_arr array
    int a, b = 0;
    int max = 0;

    for (i = 0; i < n; i += 2) {
        for (j = 0; j < n; j += 2) {
            // Find the maximum element in each 2x2 subarray
            max = arr[i][j];

            if (arr[i][j] > max) {
                max = arr[i][j];
            }

            if (arr[i][j + 1] > max) {
                max = arr[i][j + 1];
            }

            if (arr[i + 1][j] > max) {
                max = arr[i + 1][j];
            }

            if (arr[i + 1][j + 1] > max) {
                max = arr[i + 1][j + 1];
            }

            // Print the maximum element for each subarray
            printf("max%d\n", max);

            // Store the maximum element in the result_arr array
            result_arr[i / 2][j / 2] = max;
        }
        printf("\n");
    }

    // Print the elements in the result_arr array
    printf("Result array:\n");
    for (i = 0; i < n / 2; i++) {
        for (j = 0; j < n / 2; j++) {
            printf("%d\t", result_arr[i][j]);
        }
        printf("\n");
    }

    // Close the file
    fclose(file);
    return 0;
}

// Function to count the number of lines in the file
int lines_Count(FILE *file) {
    int line = 1;
    
    // Count lines in the file
    while (!feof(file)) {
        if (fgetc(file) == '\n')/*if new line character is found that means line has ended*/ {
            line++;
        }
    }

    // Reset the file pointer to the beginning of the file
    rewind(file);
    return line;
}

