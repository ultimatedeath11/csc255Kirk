#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <math.h>
#include <stdlib.h>
#define SIZE 100

void main(void) 
{ 
	//going to enter number of floats to enter 
	//dynamic arrays
	int count;
	int *myArray;
	int i;
	printf("ENter the number of floats to enter: \n");
	scanf(" %d", &count);
	myArray = malloc(count * sizeof(float));// allocates this many size of array 	it returns the starting address of the array
	for(i = 0; i < count;i++)
	{
 		printf("Float #%d? ", i+1);
		scanf(" %f", &myArray[i]);
	}
	for(i = 0; i < count;i++)
	{
 		printf("Float #%d = %.2f\n", i+1, myArray[i]);
	}

}
