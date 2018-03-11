#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <time.h>
#include <math.h>
#define SIZE 10

void printCharacter(char n[], int size)
{ 

	int i; 
	for(i = 0; i < size ;i++)
	{ 

		printf(" %c\t", n[i]);	

	}
	printf("\n");
}

char[] assignCharacter(char n[], int size)
{ 

	int i;
	for(i = 0; i < size;i++){
		n[i] = 'a' * rand() % 26;

		if(n[i] != "w" || n[i] != 'b' || n[i] != 'r')
		{ 

			i= i - 1; 

		 }

	}

 }

void main(void)
{ 

	int i;
	char static neck[SIZE];
	printCharacter(assignCharacter(neck,SIZE), SIZE);
	getchar();
	getchar();

}
