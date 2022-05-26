// game guess the number
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int number,guess,nguess=1;
	srand(time(0));
	number = rand()%1000+1;  //generates random number between 1-100
	printf("The number is: %d\n",number);
	// loop keeps running until the correct number is gussed by the player
	do{
		printf("Guess the number between 1 to 100:\n");
		scanf("%d",&guess);
		
		if(guess>number)
		{
			printf("Lower number please!\n");
		}
		else if(guess<number)
		{
			printf("Higher number please!\n");
		}
		else
		{
			printf("You guessed it in %d attempts!\n",nguess);
		}
		nguess++;
	}while(guess!=number);
	return 0;
}
