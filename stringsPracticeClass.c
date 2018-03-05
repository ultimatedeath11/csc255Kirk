#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//function with prototype below that prints the elements of the array 
void printArray(int Array[], int intsize)
{
	int i = 0;
	for(; i < intsize; i++ )
	{
		printf("%10d",Array[i]);
	}
}


void main(void)
{
	int myInt[10]; 			// creates an array 
	int myBigInt[1000];
	int i;
	for(i = 0; i< 1000; i++)
	{
		myBigInt[i]=1;
	}						//easy way to assign every balue to 1

	int myBigLittleInt[1000] = {0};

	int countingint[1000];
	for(i = 0; i< 1000; i++)
	{
		countingint[i] = i;
		
	}
	printArray(countingint,1000);



	getchar();
	getchar();
}
