/*
name:Muhammad Abbas
ID:23k-0068
Description: merges records of same employes from 2 different info files into a new file
date:6/12/2023
*/


#include <stdio.h>
#include <stdlib.h>

//personal.txt and department.txt were made initially and data was added to them too which can be checked in the folder of the code

void mergeAndWriteToFile(int id) {
    // Open the already created Personal.txt file in read mode
    FILE *personalFile = fopen("Personal.txt", "r");
    //error handling
	if (personalFile == NULL) {
        printf("Error opening Personal.txt");
        exit(EXIT_FAILURE);
    }

    // Open the already created Department.txt file in read mode
    FILE *departmentFile = fopen("Department.txt", "r");
    //error handling
	if (departmentFile == NULL) {
        printf("Error opening Department.txt");
        fclose(personalFile); //closing the file
        exit(EXIT_FAILURE);
    }

    // Open and create if its not already created Combine.txt file in append mode as data will be added to the end of alredy mentioned records
    FILE *combineFile = fopen("Combine.txt", "a");
    //error handling
	if (combineFile == NULL) {
        printf("Error opening Combine.txt");
        //closing the files
		fclose(personalFile);
        fclose(departmentFile);
        exit(EXIT_FAILURE);
    }
    
    //variables to store data values
    int personalId, departmentId, salary;
    char name[50];//string to store the nae 

    // Search for the given ID in Personal.txt
    while (fscanf(personalFile, "%d,%s"/*this specifies the format in which the data will be read*/, &personalId, name) == 2)/*it is checking if its equal to 2 as it returns the num of arguments it printed and in this scenario it should be 2 according to the format*/ {
        //the above loop will end when the fscanf() function will return 0 which will mean end of file has been reached
		if (personalId == id) {
            // Match found, now search for the ID in Department.txt
            fseek(departmentFile/*file pointer*/, 0/*number of bytes to offset*/, SEEK_SET/*this argument of the function rewinds the file to the begginng*/);

            while (fscanf(departmentFile, "%d,%d"/*data format specified*/, &departmentId, &salary) == 2) {
                if (departmentId == id) {
                    // Match found in Department.txt, write to Combine.txt
                    fprintf(combineFile, "%d,%s,%d\n"/*specifying the format in the new file*/, id, name, salary);
                    printf("Record with ID %d merged and written to Combine.txt\n", id);
                    break;
                }
            }
            break; // Break out of the loop since we found the ID in Personal.txt
        }
    }

    // Closing the opened files
    fclose(personalFile);
    fclose(departmentFile);
    fclose(combineFile);
}

int main() {
    int id;
    
    printf("Muhammad Abbas\n23k-0068\n\n");
    printf("the data need to be entered in the files in the below format:\n");
    printf("personal.txt: ID,Name\n");
    printf("department.txt: ID,salary\n");
    printf("dont enter anny data in the combine.txt file as the program will do so\n\n");

    // Get the record ID as input
    printf("Enter the record ID: ");
    scanf("%d", &id);

    // Call the function to merge and write to Combine.txt
    mergeAndWriteToFile(id);

    return 0;
}
