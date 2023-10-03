/**
 * Programmer: Muhammad Abbas
 * Desc: question2
 * Date: 10/3/23
*/

#include <stdio.h>

int main() {
    int num1 = 1, num2 = 1, nextTerm;
    int sum = 0;


    printf("Fibonacci series up to 10000:\n");
    printf("%d %d ", num1, num2);
// printing the series
    for (nextTerm = num1 + num2; nextTerm <= 10000;) {
        printf("%d ", nextTerm);
        num1 = num2;
        num2 = nextTerm;
        nextTerm = num1 + num2;
    }

// calculating the sum of the numbers
    num1 = 1;
    num2 = 1;
    nextTerm = num1 + num2;

    for (; nextTerm <= 10000;) {
        if (nextTerm % 3 == 0 || nextTerm % 5 == 0 || nextTerm % 7 == 0) {
            sum = sum+ nextTerm;
        }
        num1 = num2;
        num2 = nextTerm;
        nextTerm = num1 + num2;
    }

    printf("\nSum of Fibonacci numbers divisible by 3, 5, or 7: %d\n", sum);

    return 0;
}
