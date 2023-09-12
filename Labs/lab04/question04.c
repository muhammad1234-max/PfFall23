#include<stdio.h>
#include<math.h>

main () {
	int a,b,c,inner;
	float discriminant,root1,root2;
	printf("enter co-efficent of x^2: ");
	scanf("%d",&a);
	printf("enter co-efficent of x: ");
	scanf("%d",&b);
	printf("enter constant: ");
	scanf("%d",&c);
	inner = (b*b)-(4*a*c);  
	discriminant = sqrt(inner);
	root1 = (-b+discriminant)/(2*a);
	root2 = (-b-discriminant)/(2*a);
	printf("solution1 is: %f",root1);
	printf("\n");
	printf("solution 2 is: %f",root2);
	
	
}
