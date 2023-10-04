/**
 * Programmer: Muhammad Abbas
 * Desc: question6
 * Date: 10/4/23
*/

#include <stdio.h>

main() {
	int matchsticks=21;
	int userpick,computerpick;
	
	printf("Welcome to the Matchstick Game!\n");
    printf("Rules:\n");
    printf("1. There are 21 matchsticks.\n");
    printf("2. You and the computer take turns picking 1, 2, 3, or 4 matchsticks.\n");
    printf("3. The player who is forced to pick up the last matchstick loses.\n");
    
	while(matchsticks>1) {
		printf("remaining matchsticks %d \n",matchsticks);
		printf("Your turn. Pick 1, 2, 3, or 4 matchsticks: ");
        scanf("%d", &userpick);
        
        //checks for correct input 
        if (userpick<1||userpick>4||userpick>matchsticks) {
        	printf("Invalid input. Please pick between 1 and %d matchsticks.\n", matchsticks);
        	continue;
		}
		
		matchsticks = matchsticks - userpick;
		
		if (matchsticks==1) {
			printf("you have picked the last matchstick.\n");
			printf("you lost");
			break;
		}
		// this line of code ensures that the computer will always win by making the moves on multiples of 5
		computerpick = 5-userpick;
		printf("computer picks %d matchsticks.\n",computerpick);
		matchsticks = matchsticks - computerpick;
		
		//checks who won for formality
		if (matchsticks==1) {
			printf("the player picked the last matchstick, the computer won.");
			break;
		}
	}
}
