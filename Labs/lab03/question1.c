#include <stdio.h>

int main() {
    int a;
    int b;
    char oper;
    int answer;

    printf("Enter first num: ");
    scanf("%d", &a);

    printf("Enter second num: ");
    scanf("%d", &b);

   
    printf("Enter desired operation: ");
    scanf(" %c", &oper);  

    if (oper == '+')
        answer = a + b;
    else if (oper == '-')
        answer = a - b;
    else if (oper == '*')
        answer = a * b;
    else if (oper == '/')
        answer = a / b;
    else
        printf("Invalid operation\n");

    if (oper == '+' || oper == '-' || oper == '*' || oper == '/')
        printf("Result: %d\n", answer);

    return 0;
}
