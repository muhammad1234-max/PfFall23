/*
name:Muhammad Abbas
ID:23k0068
description: this program asks fro a inpout of a 2-d binary matrix and finds the biggest square submatrix of 1s
date:2/11/23
*/

#include <stdio.h>

//a function to fiund out the smallest number among 3 input numbers
int min(int a, int b, int c) {

    int min;
	if(a<b){
    	min=a;
	}else {
		min=b;
	}

    if(min<c) {
    	return min;
	} else{
		return c;
	}
}

//function to calculate largets square matrix of ones in a binary matrix
void findLargestSquareSubmatrix(int matrix[100][100], int rows, int cols) {
    int maxSize = 0;
    //maxI and maxJ hold values of the current cells row and column
	int maxI = 0;
    int maxJ = 0;
	int i,j;
 
    int dp[100][100];  // Create a 2D array to store the size of the largest square ending at (i, j)
    
    //nested loop to traverse throught the whole array
    for ( i = 0; i < rows; i++) {
        for ( j = 0; j < cols; j++) {
        	//dynamic programming is used here
        	//if its the first row or first column we will store the value in the binary matrix that was input in the dp matrix
            if (i == 0 || j == 0) {
                dp[i][j] = matrix[i][j];
            } //if there is a 1 then the value at the left of the current cell,the top of the current cell and the diagnol left of the current cell
              //is checked by min function on who is the smallest and 1 is added so 1 cell is added around all sides
			else if (matrix[i][j] == 1) {
                dp[i][j] = 1 + min(dp[i - 1][j], dp[i][j - 1], dp[i - 1][j - 1]);
            }//if its neither of the scenarios the dp matrix just stores the value zero 
			else {
                dp[i][j] = 0;
            }
            
            //if the size of the largest square matrix is the bigger then the current max size then the max size is updated and its row and column from top left is stored
            if (dp[i][j] > maxSize) {
                maxSize = dp[i][j];
                maxI = i;
                maxJ = j;
            }
        }
    }
    
    //if max size is zero so there were no square submatrix of 1s there
    if (maxSize == 0) {
        printf("No square submatrix of 1s found.\n");
    } else {
    	//this prints the order of the biggest submatrix of 1s
        printf("The largest square submatrix of 1s has dimensions %dx%d:\n", maxSize, maxSize);
        //maxI and maxJ are used as initial values as they hold the row and column vallues at top left of the cell so at the start
        //maxI-maxsize+1 is used to end the loop at the rightmost or the bottom most proper part where it should
        for ( i = maxI; i > maxI - maxSize; i--) {
            for ( j = maxJ; j > maxJ - maxSize; j--) {
                printf("%d ", matrix[i][j]);
            }
            printf("\n");
        }
    }
}

int main() {
	//binary matrix is innitialized
    int matrix[100][100];
    int rows, cols,i,j
	;
    
    //the order of the matrix is asked for
    printf("Enter the number of rows:");
    scanf("%d", &rows);
    printf("\n enter the number of columns:");
    scanf("%d",&cols);
    
    //the matrix is populated
    printf("Enter the binary matrix elements (0s and 1s):\n");
    for ( i = 0; i < rows; i++) {
    	printf("enter values for row%d\n",i+1);
        for ( j = 0; j < cols; j++) {
        	printf("enter values for column%d:",j+1);
            scanf("%d", &matrix[i][j]);
        }
        printf("\n");
    }
    
    for(i=0;i<rows;i++) {
    	for(j=0;j<cols;j++) {
    		printf("%d ",matrix[i][j]);
		}
		printf("\n");
	}
    
    printf("\n");
    //function is called
    findLargestSquareSubmatrix(matrix, rows, cols);

    return 0;
}
