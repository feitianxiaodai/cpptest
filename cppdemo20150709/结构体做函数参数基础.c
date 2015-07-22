#include "stdio.h"
#include "stdlib.h"
#include "string.h"

typedef struct _Teacher
{
	char name[64];
	char c;
	int age;
}Teacher;

void printTArray(Teacher *array,int num)
{
	int i=0;
	for(i=0;i<num;i++)
	{
		printf("%d\n",array[i].age);
	}
}

void sortTArray(Teacher *array,int num)
{
	int i=0, j=0;
	Teacher tmp;
	for(i=0;i<num;i++)
	{
		for(j=i+1;j<num;j++)
		{
			if(array[i].age>array[j].age)
			{
				tmp = array[i];
				array[i] = array[j];
				array[j] = tmp;
			}
		}
	}
}

//分配结构体数组内存块
void createTArray(Teacher *tArray,int num)
{
	tArray = (Teacher *)malloc(num*sizeof(Teacher));
}


void main()
{	
	int i=0;

	Teacher *pArray = NULL;
	createTArray2(pArray,3);

	for(i=0;i<3;i++)
	{
		printf("请键入第%d个老师的年龄:",(i+1));
		scanf("%d", &(pArray[i].age));
	}

	printTArray(tArray,3);

	sortTArray(tArray,3);

	printTArray(tArray,3);

	system("pause");
}



void main01()
{	
	int i=0;

	//定义一个结构体数组，给结构体数组赋值，并排序
	Teacher tArray[3];

	Teacher *pArray = NULL;
	createTArray(pArray,3);

	for(i=0;i<3;i++)
	{
		printf("请键入第%d个老师的年龄:",(i+1));
		scanf("%d",&tArray[i].age);
	}

	printTArray(tArray,3);

	sortTArray(tArray,3);

	printTArray(tArray,3);

	system("pause");
}