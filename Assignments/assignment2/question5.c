/*
name:Muhammad Abbas
ID:23k-0068
Description:this program prints ramunajan hardy numbers less then the cube of the users input
date:1/11/23
*/

#include<stdio.h>
#include<math.h> 
#include <stdlib.h>

int main(){
int val, temp=0,i,j,k,l; 
printf("Enter a number to print all Ramanujan numbers less than the cube of that number: ");
scanf("%d", &val);
while(1){
for( i=1; i<val; i++){
	for( j=1; j<val; j++){
		for( k=1; k<val ; k++){
			for( l=1;l<val; l++){
				//this condition ensures that none of the numbers are being repeated 
				if(i!=j && i!=k && i!=l && j!=k && j!=l && k!=l){
					int left = pow(i,3)+pow(j,3);
					int right = pow(k,3)+pow(l,3);
					//this condition checks if the sum of the cubes on both left and right hand sides are equal and that the ans is not equal to the prev found ramunajan hardy number
					if(right == left && left!=temp){
					//if the current ramunajan number is greater then the previous one then the value of temp is updates
					//current ramunajan number can be accessed from both the right and left sides
					if(temp<left){ 
						temp=left;
						//this checks that if the current RH num is larger then the cube of the input then the loop terminates.
						if(temp>pow(val,3)){
							exit(0); 
						}
						printf("%d = %d^3 + %d^3 = %d^3 + %d^3\n", left,i,j,k,l);
					}
				}
				}
			}
		}
	}
}
}
}
