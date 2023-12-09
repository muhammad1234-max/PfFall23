#include <stdio.h>
#include <string.h>

// Structure to hold worker information
struct Worker {
    int workerId;
    char firstName[20];
    char lastName[20];
    int salary;
    char joiningDate[20];
    char department[20];
};

// Function to find and display details of workers with the highest salary in each department
void displayMaxSalaryWorkers(struct Worker workers[], int size) {
    char departments[10][20];
    int maxSalaries[10] = {0};
    int i,j;
    // Initialize arrays with empty strings and zero salaries
    for ( i = 0; i < 10; i++) {
        strcpy(departments[i], "");
    }

    // Find maximum salary for each department
    for ( i = 0; i < size; i++) {
        for ( j = 0; j < 10; j++) {
            if (strcmp(workers[i].department, departments[j]) == 0) {
                if (workers[i].salary > maxSalaries[j]) {
                    maxSalaries[j] = workers[i].salary;
                }
                break;
            } else if (strcmp(departments[j], "") == 0) {
                strcpy(departments[j], workers[i].department);
                maxSalaries[j] = workers[i].salary;
                break;
            }
        }
    }

    // Display details of workers with the highest salary for each department
    printf("Details of Workers with Maximum Salary for Each Department:\n");
    for (i = 0; i < 10; i++) {
        if (strcmp(departments[i], "") != 0) {
            for ( j = 0; j < size; j++) {
                if (strcmp(workers[j].department, departments[i]) == 0 && workers[j].salary == maxSalaries[i]) {
                    printf("Department: %s\n", workers[j].department);
                    printf("Worker ID: %d\n", workers[j].workerId);
                    printf("Name: %s %s\n", workers[j].firstName, workers[j].lastName);
                    printf("Salary: %d\n", maxSalaries[i]);
                    printf("Joining Date: %s\n", workers[j].joiningDate);
                    printf("-------------\n");
                    break;  // Break after finding the worker with the highest salary in the department
                }
            }
        }
    }
}

// Function to calculate and display total salaries paid by each department
void fetchTotalSalariesByDepartment(struct Worker workers[], int size) {
    char departments[10][20];
    int totalSalaries[10] = {0};
    int i,j;
    for ( i = 0; i < 10; i++) {
        strcpy(departments[i], "");
    }

    // Calculate total salary for each department
    for ( i = 0; i < size; i++) {
        for ( j = 0; j < 10; j++) {
            if (strcmp(workers[i].department, departments[j]) == 0) {
                totalSalaries[j] += workers[i].salary;
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
    // Worker data initialization
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

    // Calculate the number of elements in the workers array
    int size = sizeof(workers) / sizeof(workers[0]);

    // Display workers with the maximum salary in each department
    displayMaxSalaryWorkers(workers, size);

    // Display total salaries paid by each department
    fetchTotalSalariesByDepartment(workers, size);

    return 0;
}
