#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>

float distance(float arr1[], float arr2[])
{
	int i = 0;
	float result;
	for(i= 0; i< 3; i++)
	{
		result = sqrt(arr1[i]- arr2[i] *arr1[i] - arr2[i] );
	}

}


void sum(int arr1[], int arr2[])
{
	int i = 0;
	for(i= 0; i < 10; i++)
	{
		printf("%d\n",arr1[i] + arr2[i]);
	}
}


void main(void)
{
	int arr1[10];
	int arr2[10];
	int i =0;

	srand(time(NULL));
	
	for (i =0; i< 10; i++)
	{
		arr1[i] = rand() %10 +1;
	}

	for (i = 0; i< 10; i++)
		arr2[i] = rand() %10 +1;


	sum(arr1,arr2);
}
