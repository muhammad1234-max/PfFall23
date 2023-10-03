/**
 * Programmer: Muhammad Abbas
 * Desc: question1
 * Date: 10/3/23
*/

#include <stdio.h>

int main() {
    int num, sum = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Checking if the entered number is positive

        for (int i = 1; i <= num / 2; i++) {
            if (num % i == 0) {
                sum += i;
            }
        }
        // Check if the number is a perfect number
        if (sum == num) {
            printf("%d is a perfect number.", num);
        } else {
            printf("%d is not a perfect number.", num);
        }
    
}
