#include <stdio.h>

int main() {
    int n, x, y;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    x = 1;
    while (x <= n) {
        y = 1;
        while (y <= x) {
            printf("*");
            y++;
        }
        printf("\n");
        x++;
    }

}
