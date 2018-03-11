#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <time.h>
#include <math.h>

#define SIZE 10

void printchars(char [],int);
void randomCharacters(char [], int);
void isConsinant(char , int);
void isVowel(char, int);

void main(void)
{
	int size =10;	
	static char arr1[10];	
	srand(time(NULL));
	randomCharacters(arr1,SIZE);
	printchars(arr1,SIZE);
}

void printchars(char toPrint[],int size)
{ 
 
	int i;
	for(i = 0; i < size ;i++)
	{
		printf("%c\n",toPrint[i]);

	}

}


void randomCharacters(char hi[], int size)
{ 

	int i;
	for(i = 0; i < size ;i++)
	{ 

		hi[i] = 'a' + rand() % 26;
	
	}

}




