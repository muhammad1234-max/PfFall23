/*
name:Muhammad Abbas
ID:7/12/2023
Description: a program that calculates highest salary paid to workers in each department annd the detail of those worker
             and the totol salaries paid by each department
date:7/12/23
*/

#include <stdio.h>
#include <string.h>

//a structure to hold all the data about workers
struct Worker {
    int workerId;
    char firstName[20];
    char lastName[20];
    int salary;
    char joiningDate[20];
    char department[20];
};

//function to find out the workers for each deprartment with the most salary
void displayMaxSalaryWorkers(struct Worker workers[]/*a array of structures passed as a argument*/, int size) {
    char departments[10][20];  // Array to store unique department names for comparison of wokers with same department
    int maxSalaries[10] = {0}; // Array to store maximum salary for each department. it is initialized to zero as it will be used in max calculation
    int i;
    // Initialize arrays with empty strings to make sure they are empty
    for ( i = 0; i < 10; i++) {
        strcpy(departments[i], "");
    }

    // Find maximum salary for each department
    for ( i = 0; i < size; i++) {
        if (workers[i].salary > maxSalaries[i]) {
            maxSalaries[i] = workers[i].salary;
            strcpy(departments[i], workers[i].department);//string function to copy one string from another
        }
    }

    // Display details of workers with maximum salary for each department
    printf("Details of Workers with Maximum Salary for Each Department:\n");
    for ( i = 0; i < 10; i++) {
        if (strcmp(departments[i], "") != 0) { //checks if the string space is empty or not using strcmp()
            //printinf all the details of the worker with the highest salary in each department
			printf("Department: %s\n", departments[i]);
            printf("Worker ID: %d\n", workers[i].workerId);
            printf("Name: %s %s\n", workers[i].firstName, workers[i].lastName);
            printf("Salary: %d\n", maxSalaries[i]);
            printf("Joining Date: %s\n", workers[i].joiningDate);
            printf("-------------\n");
        }
    }
}

//function to findout total salaries paid by each department
void fetchTotalSalariesByDepartment(struct Worker workers[], int size) {
    char departments[10][20]; // Array to store unique dept names
    int totalSalaries[10] = {0}; // Array to store total salary for each department
    int i,j;
    
    for ( i = 0; i < 10; i++) {
        strcpy(departments[i], "");
    }

    // Calculate total salary for each department
    for ( i = 0; i < size; i++) {
        for ( j = 0; j < 10; j++) {
            if (strcmp(workers[i].department, departments[j]) == 0) {
                totalSalaries[j] += workers[i].salary; //summing all the salaries of all the workers in the department
                break;
            } else if (strcmp(departments[j], "") == 0) {
                strcpy(departments[j], workers[i].department);
                totalSalaries[j] += workers[i].salary;
                break;
            }
        }
    }

    // Display departments along with total salaries
    printf("\nDepartments and Total Salaries:\n");
    for ( i = 0; i < 10; i++) {
        if (strcmp(departments[i], "") != 0) {
            printf("%s - %d\n", departments[i], totalSalaries[i]);
        }
    }
}

int main() {
	
	printf("Muhammad Abbas\n23k-0068\n\n");
    
	//initializing an array of structures for the workers data
	struct Worker workers[] = {
        {1, "Monika", "Arora", 100000, "2014-02-20 09:00:00", "HR"},
        {2, "Niharika", "Verma", 80000, "2014-06-11 09:00:00", "Admin"},
        {3, "Vishal", "Singhal", 300000, "2014-02-20 09:00:00", "HR"},
        {4, "Amitabh", "Singh", 500000, "2014-02-20 09:00:00", "Admin"},
        {5, "Vivek", "Bhati", 500000, "2014-06-11 09:00:00", "Admin"},
        {6, "Vipul", "Diwan", 200000, "2014-06-11 09:00:00", "Account"},
        {7, "Satish", "Kumar", 75000, "2014-01-20 09:00:00", "Account"},
        {8, "Geetika", "Chauhan", 90000, "2014-04-11 09:00:00", "Admin"},
    };

    // Calculate the num of elements in the workers array to be used as a argument in the function
    int size = sizeof(workers) /*size of whole worker array*// sizeof(workers[0])/*size of one element of the array*/;

  
    displayMaxSalaryWorkers(workers, size);

 
    fetchTotalSalariesByDepartment(workers, size);

    return 0;
}
