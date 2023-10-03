#include <stdio.h>
int main() {

  int i=2, n=0,z=0;
  int a,b;
  printf("enter number 1");
  scanf("%d",&a);
   printf("enter number 2");
  scanf("%d",&b);
 while(a<=b){
 
  while(a<=9)
  {
  switch(a)
  {
  case 1:
  printf("one");
  break;
  case 2:
  printf("two");
  break;
        case 3:
  printf("three");
  break;
        case 4:
  printf("four");
  break;
        case 5:
  printf("five");
  break;
        case 6:
  printf("six");
  break;
        case 7:
  printf("seven");
  break;
        case 8:
  printf("eight");
  break;
         case 9:
  printf("nine");
  break;
 }
a++;}
 if(a%2==0)
 {
  printf("even");
 }
 else
 printf("odd");
  a++;
 } }

