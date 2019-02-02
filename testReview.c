#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <math.h>
#include <stdlib.h>
/*
void main(void)
{ 

	char str1[] = "100.1";
	char str2[] = "2121";

	printf("%s + %s = %d\n", str1, str2, atof(str1) + atoi(str2));

}

*/

int findMax(int arr[], int size)
{ 
	int max = -10000000;
	int arrOdd[size] = {0};
	for(i = 0; i < size ;i++)
	{
		if(arr[i] % 2 == 1)
			arrOdd[i] = arr[i]
	}
	for(i = 0; i < size;i++)
	{
		if(max > arrOdd[i])
			max = arrOdd[i];
	}

}

//returns the size of odd indexes in array
int findMaxOddArr(int arr[], int size)
{

	int max = 0;
	if (size % 2 == 0)
		size = size - 1;
	for(i = 1; i < size ;i = i + 2)
	{
		if(max <= arr[i])
			max = arr[i]; 
	}

}

void main(int argc, char * argv[])
{ 

	int i;
	float sum = 0;
	for(i = 1; i < argc;i++)
	{

		sum += atof(argv[i]);

	}
	printf("The sum is %.2f.\n",sum);

}




