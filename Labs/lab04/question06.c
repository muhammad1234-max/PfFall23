#include <stdio.h>

int main()
{

int n, a = 1, b;
        printf("Enter number of rows: ");
        scanf("%d", &n);
        if(n%2 == 0){
            n=n-1;
          }
while (a <= n) {
b = n;

while (b > a) {
printf(" ");
b--;
}

printf("*");
b = 1;
while (b < (a - 1) * 2) {
printf(" ");
b++;
}
if (a == 1) {
printf("\n");
}
else {
printf("*\n");
}
a++;
}

a = n - 1;
while (a >= 1) {
b = n;

while (b > a) {
printf(" ");
b--;
}

printf("*");
b = 1;
while (b < (a - 1) * 2) {
printf(" ");
b++;
}
if (a == 1) {
printf("\n");
}
else {
printf("*\n");
}
a--;
}
return 0;
}

