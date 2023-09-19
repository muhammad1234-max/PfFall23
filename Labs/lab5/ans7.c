#include<stdio.h>

main() {
	int original,discount,newprice;
	discount=0,newprice=0;
	printf("enter final cost of items: ");
	scanf("%d",&original);
	if (original>=2000 && original<=4000) {
		discount = original*0.2;
	} else if  (original >=4001 && original<=6000) {
		discount = original*0.3;
	} else if (original>6000) {
		discount = original*0.5;
	} else {
		newprice = original;
	}
	newprice = original - discount;
	printf("Original amount is: %d\n",original);
	printf("discount is: %d\n",discount);
	printf("new amount is: %d\n",newprice);
}
