/*
name:Muhammad Abbas
ID:23k-0068
Description: this code will be used to define a database of students and then find students based on roll num and year of admission
date:21/11/23 
*/


#include <stdio.h>

//data structure for individual students to hold all their data
struct student_data {
    int rollnum;
    char name[50];
    char department[50];
    char course[50];
    int admissionyr;
};

int main() { 
    
    //defining an array of the data type we defined above
    struct student_data database[450];

    int yearcheck;
    int id, i;

    // populating the whole database of students information
    for (i = 0; i < 450; ++i) {
        database[i].rollnum = 1001 + i; // Starting roll number
        
        printf("Enter the name of student %d: ", i);
        scanf("%s", database[i].name); 
        
        printf("Enter the department of student %d: ", i);
        scanf("%s", database[i].department);
        
        printf("Enter the course of student %d: ", i);
        scanf("%s", database[i].course);
        
        printf("Enter the admission year of student %d: ", i);
        scanf("%d", &database[i].admissionyr);
        printf("\n\n\n");
    }

    printf("Welcome to the student database\n\n");
    printf("To find out the names of students based on admission year, enter the year: ");
    scanf("%d", &yearcheck);
    
    
    //finding out names of students who took admission at this year and printing them
    printf("These are all the students who joined in the year %d\n", yearcheck);
    for (i = 0; i < 450; ++i) {
        if (database[i].admissionyr == yearcheck) {
            printf("%s\n", database[i].name);
        }
    }

    //finding out data of students from the roll number and printing all of their data
    printf("To find out the data, enter the student's roll number you want to find out: ");
    scanf("%d", &id);
    int found = 0; // Variable to check if the student is found
    for (i = 0; i < 450; i++) {
        if (database[i].rollnum == id) {
            found = 1; // Set the found flag
            printf("Student Information:\n");
            printf("Roll Number: %d\n", database[i].rollnum);
            printf("Name: %s\n", database[i].name);
            printf("Department: %s\n", database[i].department);
            printf("Course: %s\n", database[i].course);
            printf("Year of Joining: %d\n", database[i].admissionyr);
            break; // Exit the loop once the student is found
        }
    }

    if (!found) {
        printf("Student with the required roll number not found.\n");
    }

    return 0; // Indicate successful completion of the program
}
