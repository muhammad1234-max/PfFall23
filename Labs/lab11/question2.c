/*
name:Muhammad Abbas
ID:23k-0068
description:this code will enter a database of engines and its properties and find out engines of certain serial numbers
date:21/11/23
*/

#include <stdio.h>
#include <string.h>

// Structure to store information about engine parts
struct EnginePart {
    char serialNumber[4]; 
    int yearOfManufacture;
    char material[20];
    int quantityManufactured;
};

int main() {
    // Restricting the number of engine parts to 360 as between AA0 to FF9 their are only 360 possible combinations
    struct EnginePart parts[360];
    int i;
    // Populate data for engine parts
    for ( i = 0; i < 360; ++i) {
    	//this will automatically allot serial numbers to all engines
        sprintf(parts[i].serialNumber, "%c%c%d"/*this is done as the serial num format is 2 characters and 1 integer*/,
		                            'A' + i / 60 /*this is done as at this point there are only 60 possible combinations*/,
									'A' + (i / 10) % 6 /*since there are 10 numbers in each alphabet and only 6 alphabets */,
									 i % 10 /*since there are only 10 possible numbers allowed*/);
	    printf("enter the year of manufacture for engine num %s:",parts[i].serialNumber);
        scanf("%d",&parts[i].yearOfManufacture); 
        printf("enter materials used:");
        scanf("%s",&parts[i].material);
        printf("enter the quantity of these engines made:");
        scanf("%d",&parts[i].quantityManufactured);
        printf("\n\n");
    }


    // Retrieve information on parts with serial numbers between "BB1" and "CC6"
    printf("Parts with serial numbers between BB1 and CC6:\n");
    //using strncmp() to compare serial numbers
    for ( i = 61; i < 360 && strncmp(parts[i].serialNumber, "CC7", 3) <= 0; ++i) {
        printf("Serial Number: %s\n", parts[i].serialNumber);
        printf("Year of Manufacture: %d\n", parts[i].yearOfManufacture);
        printf("Material: %s\n", parts[i].material);
        printf("Quantity Manufactured: %d\n", parts[i].quantityManufactured);
        printf("\n");
    }

    return 0;
}
