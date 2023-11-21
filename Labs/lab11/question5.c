/*
name:Muhammad Abbas
ID:23k-0068
Description: This code will use nested structures and give values to specific parts and print them
date:21/11/23
*/

#include<stdio.h>
#include<string.h>

//struct to hold employee data
struct employee {
	int emp_ID;
	char name[30];
	int salary;
};

//structure to hold data on organization
struct organization {
	char orgName[40];
	char orgNum[42];
	struct employee database;//nested structure
};

main() {
	//initialization of a array pf structures
	struct organization org[123];
	
	int i=0;
	
	//giving specific values to the nested structures
	org[i].database.emp_ID=127;
	sprintf(org[i].database.name,"Linus Sebastian");
	org[i].database.salary=400000;
	sprintf(org[i].orgName,"NU-Fast");
	sprintf(org[i].orgNum,"NUFAST123ABC");
	
	
	printf("The size of structure organisation: %lu\n", sizeof(struct organization));//calculating the size in bytes of the structure
    printf("Organisation Name: %s\n", org[i].orgName);
    printf("Organisation Number: %s\n", org[i].orgNum);
    printf("Employee id: %d\n", org[i].database.emp_ID);
    printf("Employee name: %s\n", org[i].database.name);
    printf("Employee Salary: %d\n", org[i].database.salary);
	
}
