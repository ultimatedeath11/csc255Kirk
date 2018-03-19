#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <math.h>
#include <stdlib.h>

int cubeByValue (int n);

void main(void)
{ 

	int number = 5; //initalize a number

	printf("The original value of number is %d", number);
	
	number = cubeByValue(number);

	printf("\nThe New Level of number is %d\n", number);
	

}

int cubeByValue(int n)
{ 

	return n * n * n;

}

