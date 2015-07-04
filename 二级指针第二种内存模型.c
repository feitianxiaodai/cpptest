#include "stdio.h"
#include "stdlib.h"
#include "string.h"

void main()
{
	int i=0, j=0;
	char tmpBuf[30];
	char buf[10][30] = {"cccc","aaaa","bbbb","1111"};
	printf("排序之前:\n");

	for(i=0;i<4;i++)
	{
		printf("%s\n", buf[i]);
	}

	for(i=0;i<4;i++)
	{
		for(j=i+1;j<4;j++)
		{
			if(strcmp(buf[i],buf[j])>0)
			{
				strcpy(tmpBuf,buf[i]);
				strcpy(buf[i],buf[j]);
				strcpy(buf[j],tmpBuf);
			}
		}
	}

	printf("排序之后:\n");

	for(i=0;i<4;i++)
	{
		printf("%s\n", buf[i]);
	}


	system("pause");
}