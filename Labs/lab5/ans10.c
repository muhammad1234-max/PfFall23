#include <stdio.h>

main() {	
	int bin, bit, higher_nibble=0, lower_nibble,i=0,j,answer;

	printf("Input 8-bit binary number: ");
	scanf("%d", &bin);

	if (bin < 10) {
		printf("enter atleast 2 digits");
	}

	lower_nibble = bin / 10000;

	while(i < 4) {
		bit = bin % 10;
		bin = bin / 10;

	    j = i;
		while(j>0) {
			bit = bit * 10;
			j = j - 1;
		}

		higher_nibble = higher_nibble + bit;
		i=i+1;
	}

	higher_nibble = higher_nibble * 10000;
    answer = higher_nibble + lower_nibble;
	printf("%08d", answer);
} 
