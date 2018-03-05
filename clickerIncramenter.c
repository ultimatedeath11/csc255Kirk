#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>

void clicker(void)
{
	static int count = 0;
	++count;
	printf("%d\t",count);

}


void main(void)
{
	int i;
	int g;
	for(i = 0;i < 10; i++)
	{
		for(g = 0; g < 10; g++)
			printf("%d%d\t",g , i);
		printf("\n");
	}
}
