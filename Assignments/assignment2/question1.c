/*
name: Muhammad Abbas
ID: 23k-0068
Description: enter a scorecard in a 2-d array with the num of batsmen in the rows and score in each innings in the column and output for each batsmen:
1)total score across all innings
2) their highest score from all innings
3) their score average
4)num of centures and half centuries
date: 23/10/23
*/

#include <stdio.h>

main() {
	int batsman,innings,i,j,sum,highest,centuries,halfcenturies;
	int avg;
	
	//asking for the num of rows
	printf("enter the number of batsman:");
	scanf("%d",&batsman);
	
	//asking for the num of columns
	printf("enter the number of innings they have played:");
	scanf("%d",&innings);
	printf("\n");
	
	//initializing the 2-D array to hold the scorecard
	int scorecard[batsman][innings];
	
	//populating the array
	for(i=0;i<batsman;i++) {
		printf("enter the score for batsman %d:\n",i+1);
		for(j=0;j<innings;j++) {
			printf("enter the score of innings %d\n",j+1);
			scanf("%d",&scorecard[i][j]);
		}
		printf("\n");
	}
	
	//sifting throught the whole array to evaluate data
	for(i=0;i<batsman;i++) {
		centuries=0;
		halfcenturies=0;
		highest=scorecard[i][0];
		sum=0;
		
		for(j=0;j<innings;j++) {
			//calculating total runs of a player 
			sum=sum+scorecard[i][j];
			
			//calculatinng highest score amongst all innings
			if(j<innings-1 && highest<scorecard[i][j+1]) {
				highest = scorecard[i][j+1];
			}
			
			//calculating num of centuries
			if(scorecard[i][j]>=100) {
				centuries=centuries+1;
			}
			
			//calculating num of half-centuries
			if(scorecard[i][j]>=50 && scorecard[i][j]<=99) {
				halfcenturies=halfcenturies+1;
			}
		}
		avg=sum/innings;
		
		//displaying all the statistics
		printf("the total runs scored by batsman %d are %d\n",i+1,sum);
		printf("the score average of batsman %d is %d\n",i+1,avg);
		printf("the highest score of this batsman was %d in a single innings\n",highest);
		printf("the number of centuries of batsman %d are %d\n",i+1,centuries);
		printf("the number of half centuries scored by batsman %d are %d\n\n\n",i+1,halfcenturies);
	}
}
