#include "stdio.h"
#include "stdlib.h"
#include "string.h"

void printArray(char *p)

void main()
{
	int a[3][5];
	int b[10]; //b代表数组首元素的地址，&b代表这个数组的地址,*b+1相当于指针后移4*10个单位
	{
		int i=0, j = 0,tmp=0;
		for(i=0;i<3;i++)
		{
			for(j=0;j<5;j++)
			{
				a[i][j]=++tmp;
			}
		}
	}
	//a是一个数组指针,指向低维数组的指针
	printf("a:%d,a+1:%d\n",a,a+1);
	//a的本质是一个数组指针，每次往后跳一维的维数
	{
		int i=0, j = 0;
		//定义了一个数组指针变量
		int (*myArrayPoint)[5];
		myArrayPoint = a;
		for(i=0;i<3;i++)
		{
			for(j=0;j<5;j++)
			{
				printf("%d\n",myArrayPoint[i][j] );
			}
		}
	}
	system("pause");
}