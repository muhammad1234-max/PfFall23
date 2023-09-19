#include<stdio.h>
main() {
	char ans;
	printf("are you sure you want to delete this?[Y/y] / [N/n]: ");
	scanf("%c",&ans);
	switch (ans) {
		case 'y':
		case 'Y':
			printf("Deleted successfully");
			break;
		case 'n':
		case 'N':
		    printf("Delete cancelled");
		    break;
	    default:
		    printf("invalid input");	
	}
}
