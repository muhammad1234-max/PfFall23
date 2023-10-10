/*
name:Muhammad Abbas
ID: 23K-0068
description: printing a humanoid with functions and loops
date: 10/10/2023
*/

#include<stdio.h>

main() {
	
	//function for the hat
	char hat() {
		int i,j,k,z;
		for(z = 0;z<3;z++) {
			for(j = 0;j<4;j++) {
			   printf(" ");
		    }
		    for(i = 0;i<5;i++) {
			   printf("*");
		    }
		    printf("\n");
		}
		printf(" ");
		for(k = 0;k<11;k++) {
			printf("*");
		}
		printf("\n");
	}
	
	//function for the face
	char face() {
		int i;
		for(i = 0;i<4;i++) {
			printf(" ");
		}
		printf("*");
		for(i = 0;i<3;i++) {
			printf(" ");
		}
		printf("*\n");
		
		for(i=0;i<6;i++) {
			printf(" ");
		}
		printf("|\n");
		
		for(i = 0;i<5;i++) {
			printf(" ");
		}
		printf("\\"); //double slash cancels out the escape sequence
		printf("_");
		printf("/\n");
		
		printf("\n");
		
		for(i = 0;i<5;i++) {
			printf(" ");
		}
		printf("|");
		printf(" ");
		printf("|\n");
		
	}
	
	//function for the torso
	char body() {
		int i,y;
		for(i=0;i<13;i++) {
			printf("*");
		}
		printf("\n");
		//hear instead of loops used multiple characters as a single character
		for(i=0;i<4;i++) {
			printf("**");
			printf("  ");
			printf("*****");
			printf("  ");
			printf("**\n");
		}
		
		printf("    ");
		printf("*****\n");
		
		for(i=0;i<5;i++) {
			printf("    ");
			printf("**");
			printf(" ");
			printf("**\n");
		}
		
		printf(" ");
		printf("*****");
		printf(" ");
		printf("*****");
	}
	
	//calling all the functions in the correct order
	hat();
	face();
	body();
	
}
