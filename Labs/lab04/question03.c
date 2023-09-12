#include<stdio.h>
#include<math.h>

int main() {
	int n,i,num;
	int sqnum = 0;
	int sum = 0;
	printf("enter n: ");
    scanf("%d",&n);
	while(i<n) {
		printf("enter number: ");
		scanf("%d",&num);
		sqnum = pow(num,2);
		sum = sum + sqnum;
		i++;
	}
	printf("the answer is: %d",sum);
}


