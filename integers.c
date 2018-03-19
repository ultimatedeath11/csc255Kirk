#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <math.h>
#include <stdlib.h>
#define SIZE 100

int compareFloats(void *a, void *b);

void main(void) 
{ 
	//going to enter number of floats to enter 
	//dynamic arrays
	int count;
	float *myArray;
	int i;
	printf("Enter the number of floats to enter: \n");
	scanf(" %d", &count);
	myArray = malloc(count * sizeof(float));// allocates this many size of array 	it returns the starting address of the array
	/* for numbers from the keyboard
	for(i = 0; i < count;i++)
	{
 		printf("Float #%d? ", i+1);
		scanf(" %f", &myArray[i]);
	}
	*/
	srand(time(NULL));
	for(i = 0; i < count ;i++)
	{
		myArray[i] = rand() % 100 + 1.0 ;
		srand(rand());
	}
	for(i = 0; i < count;i++)
	{
		if(i % 5 == 0)
			printf("\n");
 		printf("Float #%d = %.2f\t", i+1, myArray[i]);
	}
	printf("\n");
	// add to it to be what the difference between any integrrs  	
	//this is a function that sorts the array	
	qsort(myArray, count, sizeof(float),compareFloats); 
		for(i = 0; i < count;i++)
	{
		if(i % 5 == 0)
			printf("\n");
 		printf("Float #%d = %.2f\t", i+1, myArray[i]);
	}
	printf("\n");
}
int compareFloats(void *a, void *b)
{ 

	float *aa = (float *)a;
	float *bb = (float *)b;

	if(*aa > *bb)
		return 1;
	else if (*aa < *bb)
		return -1;
	else 
		return 0;
	

}


