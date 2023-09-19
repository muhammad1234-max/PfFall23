#include<stdio.h>

main() {
	int value;
	printf("input brightness sensor values: ");
	scanf("%d",&value);
	if (value < 0 || value>1000) {
		printf("invalid input error!");
    } else {
    	if (value > 0 && value <100) {
    		printf("low brightness");
		} else if (value>100 && value<=500) {
			printf("medium brightness");
		} else {
			printf("maximum brightness");
		}
	}
}
