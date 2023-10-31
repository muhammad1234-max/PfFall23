/*
name: Muhammad abbas
ID:23K0068
Description: printing fibbonaci sequence with recursion
date:31/10/23
*/
#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1) {
    	//base case
        return n;
    } else {
    	//recurive case
        return (fibonacci(n - 1) + fibonacci(n - 2));
    }
}

int main() {
    int n, i;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");
    for (i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }

    return 0;
}
