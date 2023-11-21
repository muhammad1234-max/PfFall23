/*
name:Muhammad Abbas
ID:23k-0068
Description: this has nested structs in it and is being populated 
date:21/11/23
*/

#include <stdio.h>

// Declare the Register struct
struct Register {
    int CourseId;
    char CourseName[50];
};

// Declare the Student struct and inherit from Register
struct Student {
    int StudentId;
    char FirstName[50];
    char LastName[50];
    char cellno[15];
    char email[50];
    struct Register studentRegister; // Student struct holds the variable of Register struct
};

int main() {
	int i;
    struct Student std[5];

    // populating the student array 
    for ( i = 0; i < 5; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Student Id: ");
        scanf("%d", &std[i].StudentId);

        printf("First Name: ");
        scanf("%s", std[i].FirstName);

        printf("Last Name: ");
        scanf("%s", std[i].LastName);

        printf("Cell Number: ");
        scanf("%s", std[i].cellno);

        printf("Email: ");
        scanf("%s", std[i].email);

        // Input details for the student's registration
        printf("Course Id: ");
        scanf("%d", &std[i].studentRegister.CourseId);

        printf("Course Name: ");
        scanf("%s", std[i].studentRegister.CourseName);

        printf("\n");
    }

    // Print information for all 5 students
    printf("Details of all students:\n");
    for ( i = 0; i < 5; i++) {
        printf("Student %d:\n", i + 1);
        printf("Student Id: %d\n", std[i].StudentId);
        printf("First Name: %s\n", std[i].FirstName);
        printf("Last Name: %s\n", std[i].LastName);
        printf("Cell Number: %s\n", std[i].cellno);
        printf("Email: %s\n", std[i].email);
        printf("Course Id: %d\n", std[i].studentRegister.CourseId);
        printf("Course Name: %s\n", std[i].studentRegister.CourseName);

        printf("\n");
    }

    return 0;
}
