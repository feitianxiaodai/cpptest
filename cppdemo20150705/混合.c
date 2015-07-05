#include "stdio.h"
#include "stdlib.h"
#include "string.h"

void printArray11(char **p1)
{
	int i=0;
	for(i=0;i<3;i++)
	{
		printf("%d\n", *(p1+i));
	}

	for(i=0;i<3;i++)
	{
		printf("%s\n", *(p1+i));
	}

}


void main()
{
	char *p1[]={"1232","4562","7892"};
	char p2[3][4]={"123","456","789"};
	printArray11(p1);

	system("pause");
}