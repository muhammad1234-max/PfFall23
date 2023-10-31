/*
name:Muhammad Abbas
ID:23k0068
Description:A program to traverse a 5x5 maze and return coordinates for the path from start to end
date:31/10/23
*/

#include<stdio.h>
#include<stdlib.h>

main() {
	int N=5,K=5,i,j;
    
	//intializing a 2-d array to store the maze	
	char maze[5][5]={
	{'S','O','O','W','W'},
	{'O','W','O','W','W'},
	{'W','O','O','W','O'},
	{'W','W','O','W','O'},
	{'W','W','O','E','W'},
	};
	
	//printing the maze
	printf("this is the maze:\n");
	for(i=0;i<5;i++) {
		for(j=0;j<5;j++) {
			printf("%c,",maze[i][j]);
		}
		printf("\n");
	}
	//path and path2 arrays will story the row and column indexes respectively
	int path[25],path2[25],count=0;
	//nested loop will traverse through the whole maze
	for(i=0;i<5;i++) {
		for(j=0;j<5;j++) {
			
			//if its the starting position the index values of that position will be stored
			if(maze[i][j]=='S') {
				path[0]=i;
				path2[0]=j;
			}
			
			//all valid moves are being checked 
			if(maze[i][j]=='O'&& (maze[i+1][j]=='O'||maze[i][j+1]=='O'|| maze[i+1][j]=='E'||maze[i][j+1]=='E')&&
			(maze[i-1][j]=='O'||maze[i][j-1]=='O'||maze[i-1][j]=='S'||maze[i][j-1]=='S') ){
				count=count+1;
				//the index values for each valid move made are being stored
				path[count]=i;
				path2[count]=j;
				
			}
			
			//this is cheecking for the scenario if exit has been reached
			if(maze[i][j]=='E') {
				count=count+1;
				path[count]=i;
				path2[count]=j;
			}
		}
	
	}
	printf("path to exit coorsinates:");
	//printing the coordinates
	for(i=0;i<=count;i++) {
		printf("(%d,%d)",path[i],path2[i]);
	}
}
