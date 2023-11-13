//Programmer: Muhammad Abbas
//ID:23k-0068
//Description: code to print 2 array with clockwise and anticlockwise spiral of values upto user input n*n
//Date: 1/11/23

#include<stdio.h>
#include<math.h>	
#include <stdlib.h>
int main(){
	int n;
	int val=1;//value that will increment and populate the arrays
	int i,j;
	
	printf("Enter the order of the matrix: ");
	scanf("%d", &n);
	int arr[n][n];
	
	//populate the array with value of zero for each data item
	int top=0, bottom = n-1, left=0, right = n-1;
	for( i=0; i<n; i++){
		for( j=0; j<n; j++){
			arr[i][j]=0;
		}
	}
	
	//condition to check if spiralling is possible 
	while(top<=bottom && left<=right){
	
	//loop to enter values in the upper row from left to right
	for( j=left; j<=right; j++){
		arr[top][j] = val++;
	}
	top++;
	
	//loop to enter values in rightmost column from top to bottom
	for( j=top; j<=bottom; j++){
		arr[j][right] = val++;
	}
	right--;
	
	//loop to enter values in bottomest row from right to left
	for( j=right; j>=left; j--){
		arr[bottom][j]=val++;
	}
	bottom--;
	
	//loop to enter values in first column from bottom to top
	for( j=bottom; j>=top; j--){
		arr[j][left]=val++;
	}
	left++;
}

    //printing the array
	for( i=0; i<n; i++){
		for( j=0; j<n; j++){
			printf("%2d,  ", arr[i][j]);
		}
		printf("\n");
	}
	printf("\n\n");
	
	
	//code for anti clockwise spiral
	//re-initializing values of the variables for the next array
	top=0, bottom = n-1, left=0, right = n-1;
	val=n*n;//to calculate the max value that will be in the array and decrement from there
	
	//spiral possibility checking condition
	while(top<=bottom && left<=right){ 
	
	//loop for printing right to left decrementally
	for( j=right; j>=left; j--){
		arr[top][j] = val--;
	}
	top++; //Entire top row incremented
	
	//loop to print top to bottom
	for( j=top; j<=bottom; j++){
		arr[j][left] = val--;
	}
	left++; //Entire left column incremented
	
	//loop to print left to right
	for( j=left; j<=right; j++){
		arr[bottom][j]=val--;
	}
	bottom--; //Entire bottom row decremented
	
	//loop to print bottom to top
	for( j=bottom; j>=top; j--){
		arr[j][right]=val--;
	}
	right--; //Entire right column decremented
}
    
    //printing the next array
	for( i=0; i<n; i++){
		for( j=0; j<n; j++){
			printf("%2d, ", arr[i][j]);
		}
		printf("\n");
	}
}
