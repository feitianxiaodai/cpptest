#include "stdio.h"
#include "stdlib.h"
#include "string.h"

//多维数组做函数参数，一般情况下，只能表示到二维
//如果有超过3级指针，则不代表几维的内存。
//一般情况下，一级指针代表一维，二级指针代表二维
void printArray(int *array,int num)
{
	int i=0;
	for(i=0;i<num;i++)
	{
		printf("%d\n",array[i]);
	}
}

void main()
{
	int a[3][5];
	int i=0,j=0;
	int tmp=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<5;j++)
		{
			a[i][j]=tmp++;
		}
	}
	printArray((char *)a,15);
	system("pause");
}