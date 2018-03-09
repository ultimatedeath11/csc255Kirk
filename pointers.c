#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <time.h>
#include <math.h>

#define SIZE 10

void printchars(char [],int);
void randomCharacters(char [], int);

void main(void)
{
	int size =10;	
	static char arr1[10];	
	srand(time(NULL));
	randomCharacters(arr1,size);
	printchars(arr1,size);
}

void printchars(char toPrint[],size)
{ 
 
	int i;
	for(i = 0; i < i ;i++)
	{
		printf("%c\n",toPrint[i]);

	}

}


void randomCharacters(char hi[], int size)
{ 

	int i;
	for(i = 0; i < SIZE ;i++)
	{ 

	hi[i] = 'a' + rand() % 26;
	
	}

}




