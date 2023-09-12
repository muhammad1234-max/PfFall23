#include<stdio.h>

int main() {
    int n, i, j;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    i = 1;
    while (i <= n) {
        j = 1;
        do {
            printf("*");
            j++;
        }
		while (j <= n);
        printf("\n");
        i++;
    }

}
