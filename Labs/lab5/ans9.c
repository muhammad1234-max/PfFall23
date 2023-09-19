#include<stdio.h>
#include<math.h>

main() {
	int a,b,c;
	float discriminant,root1,root2;
	printf("enter value of coefficient a: ");
	scanf("%d",&a);
	printf("enter value of coefficient b: ");
	scanf("%d",&b);
	printf("enter value of coefficient c: ");
	scanf("%d",&c);
	discriminant=(b*b)-(4*a*c);
	if (discriminant > 0) {
		root1=(-b + sqrt(discriminant))/(2*a);
		root2=(-b - sqrt(discriminant))/(2*a);
		printf("root1 is: %.2lf\n",root1);
		printf("root2 is: %.2lf\n",root2);
	} else if (discriminant == 0) {
		root1=(-b + sqrt(discriminant))/(2*a);
		printf("root1 is: %.2lf\n",root1);
	} else {
		printf("roots dont exist");
	}
}
