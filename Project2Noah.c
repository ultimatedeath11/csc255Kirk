#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/*
int game(int text, int games)
{
	float fliped = 0;
	int numHeads = 0;
	if(games < 0)
	{
		fliped = rand() * 10 % 2;
		if(fliped == 1)
		{
			game(text, games - 1);
		}
		else
		{
			numHeads++;
		}
	}
	else if (text == 1)
	{
		for(numHeads = numHeads; numHeads > 0; numHeads --)
		{
			printf("heads");
		}
	}
}

*/

int game(int text, int currentgames,int total, int totalGames)
{
	int choice = 2;
	float flip = 0;
	
	printf("==================Game Number %d==================\n",currentgames);

	while(currentgames > 0 )
	{
		flip = rand() * 10 % 2;
		if(flip == 1)
		{
			printf("heads\n");
			total = total + 2;
		}
		else if(flip == 0)
		{
			printf("Thanks for playing the game, you have won a total of $%d.00",total);
			game(text, currentgames - 1, total, totalGames);
			currentgames = 0;
			return total;
		}
	}
}

void flipcoin(void)
{
	float fliping = 0;
	
	fliping = rand() % 2; 
	printf(" %f\n", fliping);
}

void main(void)
{
	int choice = 3 , flip, num, total = 0;
	int i;
	printf("How many times do you want to play the game?");
	scanf(" %d", &num);
/*	while(choice != 0 && choice != 1)
	{
		printf("Do you want to see the games worked out?(1 for yes, 0 for no)");
		scanf(" %d", &choice);
	}
*/	
	//total = printf(" %d",game(choice, num, total, total));
	
	//printf("your adverage winnings are %d",total / num); 

	for(i = 0; i < num; i++)
		flipcoin();

	printf("Thanks for choosing %d\n",choice);

}


