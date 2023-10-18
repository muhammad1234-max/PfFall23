#include <stdio.h>

//function to calculate the bi
int max(int a, int b) {
    if(a>b) {
    	return a;
	} else {
		return b;
	}
}

int main() {
    int n,i,j,x,y;
    
    //entering the order of the main matirx
    printf("Enter the size of the grid (n): ");
    scanf("%d", &n);

    int grid[n][n];
    int maxLocal[n-2][n-2]; // Result matrix of size (n-2) x (n-2)

    // Input the grid values
    printf("Enter the elements of the grid:\n\n");
    for (i = 0; i < n; i++) {
    	printf("enter values for row %d:\n",i+1);
        for ( j = 0; j < n; j++) {
        	printf("enter value of column %d:\n",j+1);
            scanf("%d", &grid[i][j]);
        }
        printf("\n");
    }

    // Calculate maxLocal
    for (i = 0; i < n - 2; i++) {
        for ( j = 0; j < n - 2; j++) {
            int maxVal = grid[i][j];
            for ( x = i; x < i + 3; x++) {
                for ( y = j; y < j + 3; y++) {
                    maxVal = max(maxVal, grid[x][y]);
                }
            }
            //when max value of one 3x3 sub-matrix found it is stored in the max local matrix
            maxLocal[i][j] = maxVal;
        }
    }

    // Display the maxLocal matrix
    printf("maxLocal matrix:\n");
    for ( i = 0; i < n - 2; i++) {
        for ( j = 0; j < n - 2; j++) {
            printf("%d ", maxLocal[i][j]);
        }
        printf("\n");
    }

    return 0;
}
