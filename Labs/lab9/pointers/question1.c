#include <stdio.h>

//originally the code was not working because in the swap function the va;lue of b will be assigned the value of a vuia the tmp variable as it has the orignal a value
//the return type fo function was void which is wrong
void swap(int a, int b) {
	int tmp=a;
	a=b;
	b=tmp;
	printf("j=%d, k=%d\n",a,b);
}

int main() {
	int j=2,k=5;
	printf("original values\n");
	printf("j=%d, k=%d\n",j,k);
	printf("new values\n");
  //calling function
	swap(j,k);
	return 0;
	
}
