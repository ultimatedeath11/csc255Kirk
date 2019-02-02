#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define RANGELOW 1		// lowest allowable random number
#define RANGEHIGH 100	// highest allowable random number
#define SIZELOW 5		// lowest allowable number of rows or cols
#define SIZEHIGH 20		// highest allowable number of rows or cols
#define RANDNUM (rand() % (RANGEHIGH - RANGELOW + 1) + RANGELOW)

int menu(void);
// Each of these 2 functions creates a 1D array of random size and fills it with random ints.
int* makeArray1a(int size);		// returns starting address of new array
void makeArray1b(int** array, int size);

// Each of these 2 functions creates 1 2D array of random size and fills it with random ints.
int** makeArray2a(int rows, int cols);		// returns starting address of new array
void makeArray2b(int*** array, int rows, int cols);

void printArray1D(int *, int size);
void printArray2D(int **, int rows, int cols);


void main(void)
{
	int choice;
	int rows, cols;
	int *arr1D;
	int **arr2D;
	srand((unsigned int)time(NULL));
	while ((choice = menu()) != 5)
	{
		rows = rand() % (SIZEHIGH - SIZELOW + 1) + SIZELOW;	// Set a random size for array.
		cols = rand() % (SIZEHIGH - SIZELOW + 1) + SIZELOW;	// If 1D array is chosen, cols is ignored.
		switch (choice) {
		case 1:
			arr1D = makeArray1a(rows);
			printArray1D(arr1D, rows);
			break;
		case 2:
			makeArray1b(&arr1D, rows);
			printArray1D(arr1D, rows);
			break;
		case 3:
			arr2D = makeArray2a(rows, cols);
			printArray2D(arr2D, rows, cols);
			break;
		case 4:
			makeArray2b(&arr2D, rows, cols);
			printArray2D(arr2D, rows, cols);
			break;
		}
	}
	printf("\nGood bye!\n");
}

int menu(void)
{
	int choice;
	printf("\n1. Allocate 1D array in function makeArray1a, which returns starting address to main.\n");
	printf("2. Allocate 1D array in function makeArray1b, which accepts the address of the\n");
	printf("       starting address as an argument\n");
	printf("3. Allocate 2D array in function makeArray2a, which returns starting address to main.\n");
	printf("4. Allocate 2D array in function makeArray2b, which accepts the address of the\n");
	printf("       starting address as an argument\n");
	printf("5. Quit\n");
	printf("=======================================================================\n");
	do {
		printf("Your choice (1 - 5) ? ");
		scanf("%d", &choice);
	} while (choice < 1 || choice > 5);
	return choice;
}

int* makeArray1a(int size)
{
	int i;
	int *arr = (int *)malloc(size * sizeof(int));
	for(i = 0; i < size ;i++)
	{
 		arr[i] = RANDNUM;
	}
}

void makeArray1b(int** array, int size)
{
	// ???
}

int** makeArray2a(int rows, int cols)
{
	// ???
}


void makeArray2b(int ***arr, int rows, int cols)
{
	// ???
}


void printArray1D(int *arr, int size)
{
	int i;
	printf("\n");
	for (i = 0; i < size; i++)
		printf("%4d", arr[i]);
	printf("\n");
}
void printArray2D(int **arr, int rows, int cols)
{
	int i, j;
	printf("\n");
	// ???
}
