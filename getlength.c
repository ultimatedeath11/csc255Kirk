
#define _CRT_SECURE_NO_WARNIGNS
#include <stdio.h>

int getLength(char str[])
{
	int i = 1;
	toReturn =0;
	while( i != 0)
	{
		i = str[i];
		toReturn++;
	}
	return toReturn;
}

void main(void)
{
	char arr[100];
	int len;
	printf("Enter a string: ");
	scanf("%s\n",%str);
	len = getLength(str);
	printf("%d\n", len);
	
}
