#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <math.h>
#include <stdlib.h>

void cubeByReference(int *nPtr);

void main(void) 
{ 

	int num = 5;
	printf(" the original number is %d\n", num);
	cubeByReference( &num);

	printf("The new value of the number is %d\n", num);

}

void cubeByReference(int *nPtr)
{ 

	*nPtr = *nPtr * *nPtr * *nPtr; 

}



