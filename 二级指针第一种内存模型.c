#include "stdio.h"
#include "stdlib.h"
#include "string.h"

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

void main(int argc, char const *argv[])
{
	//二级指针的第一种内存模型
	//首先是一个数组，指针数组 ---》 只不过每一个元素都是指针而已
	
	char* myArr[] = {"bbbb","aaaa","cccc","11111"};
	{
		int a[10];
		printf("sizeof(a[10]):%d\n",sizeof(a));  
		printf("&a=%d\n",sizeof(&a));  //代表整个数组元素
	}
	{
		printf("1:%d\n", sizeof(myArr));
		printf("2:%d\n", sizeof(*myArr));
	}

	printf("排序之前结果为:\n");

	printArray(myArr,4);
	
	sortArray(myArr,4);
	
	printf("排序之后的结果为:\n");

	printArray(myArr,4);

	system("pause");
}