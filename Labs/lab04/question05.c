#include <stdio.h>

int main() {
    int d1, m1, y1; //age of first person*
    int d2, m2, y2; //age of second person*

    printf("Enter the day of birth of person 1: ");
    scanf("%d", &d1);
    printf("Enter the month of birth of person 1: ");
    scanf("%d", &m1);
    printf("Enter the year of birth of person 1: ");
    scanf("%d", &y1);

    printf("Enter the date of birth of person2: ");
    scanf("%d", &d2);
    printf("Enter the month of birth of person2: ");
    scanf("%d", &m2);
    printf("Enter the year of birth of person2: ");
    scanf("%d", &y2);

    
    while (y1 == y2) {
        while (m1 == m2) {
            while (d1 == d2) {
                printf("Both have the same age.\n");
            }
            if (d1 < d2) {
                printf("the first person is older.\n");
            } else {
                printf("the second person is older.\n");
            }
        }

        if (m1 < m2) {
            printf("the first person is older.\n");
        } else {
            printf("the second person is older.\n");
        }
    }

    if (y1 < y2) {
        printf("the first person is older\n");
    } else {
        printf("the second person is older\n");
    }
    
}
