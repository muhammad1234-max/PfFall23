#include <stdio.h>

int main() {
    int num1, num2, LCM = 1, GCD = 1, f = 2; 
//f is intialized to 2 as its the smallest possible factor
    printf("Enter num1: ");
    scanf("%d", &num1);
    printf("Enter num2: ");
    scanf("%d", &num2);
    // Calculate GCD
    while (f <= num1 && f <= num2) {
        if (num1 % f == 0 && num2 % f == 0) {
            GCD = GCD * f;
            num1 = num1 / f;
            num2 = num2 / f;
        } else {
            f++;
        }
    }
    // Calculate LCM
    LCM = (num1 * num2 * GCD);

    printf("GCD: %d\n", GCD);
    printf("LCM: %d\n", LCM);

    return 0;
}
