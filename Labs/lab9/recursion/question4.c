/*
name: Muhammad abbas
ID:23K0068
Description: calculating gcd with eucledian algortihm using recursion
date:31/10/23
*/

#include <stdio.h>

// Function to find GCD using recursion (Euclidean algorithm)
int gcd(int a, int b) {
    if (b == 0) {
    	//base case
        return a;
    }
    //recursive case
    return gcd(b, a % b);
}

int main() {
    int num1, num2;
    printf("Enter two numbers to find their GCD: ");
    scanf("%d %d", &num1, &num2);
    
    //calling function
    int result = gcd(num1, num2);
    printf("GCD using recursion for %d and %d is %d\n", num1, num2, result);

    return 0;
}

