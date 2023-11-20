/*
name:muhammad abbas
ID:23k-0068
description: this codes swaps 2 variables using bitwise XOR operator for different data types
date:19/11/23
*/


#include <stdio.h>

// Generic function to swap values of two variables using XOR bitwise operator
void swap(void *ptr1, void *ptr2, size_t size) {//void pointers as arguments allow pointers to any datatype
	
	//these are pointer to the pointers passed as arguments in the function
	//unsigned char data type is used due to only taking 1 byte so manipulation at byte level will be possible
    unsigned char *bytePtr1 = (unsigned char *)ptr1; //typecasting done as they were void pointers
    unsigned char *bytePtr2 = (unsigned char *)ptr2;
    
    //this decremental condition keeps reducing the value of size till it reaches zero and then the loop stops
    while (size--) {
    	//xor operator is swapping the values
    	
        *bytePtr1 = *bytePtr1 ^ *bytePtr2;//this gets a temp value for the swap
        *bytePtr2 = *bytePtr1 ^ *bytePtr2;//sets value at byteptr2 to original value of byteptr1
        *bytePtr1 = *bytePtr1 ^ *bytePtr2;//sets value at byteptr1 to original value of byteptr2
        
        //this takes the pointers to the next byte 
        bytePtr1++;
        bytePtr2++;
    }
}

int main() {
    // Example usage for integers
    int a, b;

    printf("Enter the first integer: ");
    scanf("%d", &a);
    printf("Enter the second integer: ");
    scanf("%d", &b);

    printf("Before swapping: a = %d, b = %d\n", a, b);
    swap(&a, &b, sizeof(int));
    printf("After swapping: a = %d, b = %d\n", a, b);


    // Example usage for doubles
    double x, y;

    printf("Enter the first double: ");
    scanf("%lf", &x);
    printf("Enter the second double: ");
    scanf("%lf", &y);

    printf("Before swapping: x = %.2f, y = %.2f\n", x, y);
    swap(&x, &y, sizeof(double));
    printf("After swapping: x = %.2f, y = %.2f\n", x, y);


    // Example usage for characters
    char c1, c2;

    printf("Enter the first character: ");
    scanf(" %c", &c1); // Note the space before %c to consume the newline character
    printf("Enter the second character: ");
    scanf(" %c", &c2); // Note the space before %c to consume the newline character

    printf("Before swapping: c1 = %c, c2 = %c\n", c1, c2);
    swap(&c1, &c2, sizeof(char));
    printf("After swapping: c1 = %c, c2 = %c\n", c1, c2);

    return 0;
}
