/*
name: Muhammad Abbas
id:23k-0068
description: this code will use a database of employee data and increase salary based on hours worked
*/

#include <stdio.h>

//structure holding data of employees
struct employee {
    char name[10];
    int salary;
    int hrsperday;
};

//function to increase the salary based on hourse worked per day
void increaseSalary(struct employee database[]) {
    int i;
    for (i = 0; i < 10; i++) {
        if (database[i].hrsperday >= 12) {
            database[i].salary = database[i].salary + 150;
        } else if (database[i].hrsperday >= 10) {
            database[i].salary = database[i].salary + 100;
        } else if (database[i].hrsperday >= 8) {
            database[i].salary = database[i].salary + 50;
        }
    }
}

int main() {
	//initializing a array of structures
    struct employee database[10];
    int i;
    
    //populating the array
    for (i = 0; i < 10; ++i) {
        printf("Enter name of employee %d: ", i + 1);
        scanf("%s", database[i].name);
        printf("Enter salary of employee %d: ", i + 1);
        scanf("%d", &database[i].salary);
        printf("Enter hours of work per day for employee %d: ", i + 1);
        scanf("%d", &database[i].hrsperday);

        printf("\n");
    }

    // Increase salary based on hours worked
    increaseSalary(database);
    
    //printing the new increased salary
    printf("Employee Details:\n");
    for (i = 0; i < 10; ++i) {
        printf("Name: %s\n", database[i].name);
        printf("Final Salary: $%d\n", database[i].salary);
        printf("\n");
    }

    return 0;
}
