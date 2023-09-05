#include <stdio.h>
#include <math.h>
main() {
    int a;
    int b;
    float hypotenuse;
    printf("enter value of side A: ");
    scanf("%d",&a);
    printf("enter value of side B: ");
    scanf("%d",&b);
    hypotenuse = sqrt((a*a)+(b*b));
    printf("the hypotenuse is: ");
    printf("%f",hypotenuse);
}
