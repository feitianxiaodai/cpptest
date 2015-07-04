#include "stdio.h"
#include "string.h"
#include "stdlib.h"


int printArray(char **pArray,int num)
{
	int i=0;
	if(pArray==NULL)
	{
		return -1;
	}
	for(i=0;i<num;i++)
	{
		printf("%s\n",pArray[i]);
	}
}

int sortArray(char **pArray,int num)
{
	int i=0, j = 0;
	char *tmp=NULL;
	for(i=0;i<num;i++)
	{
		for(j=i+1;j<num;j++)
		{
			if(strcmp(pArray[i],pArray[j])>0)
			{
				tmp=pArray[i];
				pArray[i]=pArray[j];
				pArray[j]=tmp;
			}
		}
	}

}

void main()
{
	int i=0;
	int j=0;
	char *tmp=NULL;
	char **pArray = (char **)malloc(100*sizeof(char *));
	pArray[0]=(char *)malloc(200*sizeof(char));
	pArray[1]=(char *)malloc(200*sizeof(char));
	pArray[2]=(char *)malloc(200*sizeof(char));
	pArray[3]=(char *)malloc(200*sizeof(char));

	strcpy(pArray[0],"bbbb");
	strcpy(pArray[1],"aaaa");
	strcpy(pArray[2],"dddd");
	strcpy(pArray[3],"1111");

	printArray(pArray,4);
	/*
	for(i=0;i<4;i++)
	{
		printf("%s\n", pArray[i]);
	}

	for(i=0;i<4;i++)
	{
		for(j=i+1;j<4;j++)
		{
			if(strcmp(pArray[i],pArray[j])>0)
			{
				tmp=pArray[i];
				pArray[i]=pArray[j];
				pArray[j]=tmp;
			}
		}
	}

	printf("排序之后\n");
	for(i=0;i<4;i++)
	{
		printf("%s\n", pArray[i]);
	}*/

	sortArray(pArray,4);

	printf("排序之后结果为:\n");
	printArray(pArray,4);

	for(i=0;i<4;i++)
	{
		if(pArray[i]!=NULL)
		{
			free(pArray[i]);
		}
	}

	if(pArray!=NULL)
	{
		free(pArray);
	}

	system("pause");
}