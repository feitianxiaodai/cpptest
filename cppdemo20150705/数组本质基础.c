#include "stdio.h"
#include "stdlib.h"
#include "string.h"


void main11()
{
	//数组地址和数组首元素地址的不同
	int a[10]={1,2};
	printf("得到整个数组的地址:%d\n", &a);
	printf("得到数组首元素的地址:%d\n",a);
	system("pause");
}

void main12()
{
	int i=0;
	//定义一个数组类型
	typedef int MyArrayType[5]; 

	MyArrayType myArray; //==int myArray[5]

	for(i=0;i<5;i++)
	{
		myArray[i]=i+1;
	}

	for (i = 0; i < 5; i++)
	{
		printf("%d\n",myArray[i]);
	}

	system("pause");
}

void main14()
{
	int i=0;
	typedef int MyArrayType[5];
	int a[5]; 
	//定义数组类型的指针
	MyArrayType *pArray = NULL;

	pArray = &a;

	for(i=0;i<5;i++)
	{
		(*pArray)[i]=i+1;
	}

	for(i=0;i<5;i++)
	{
		printf("%d\n",(*pArray)[i]);
	}

	system("pause");
}

void main15()
{
	//定义数组类型指针
	int i=0;
	//定义一个类型 是一个数组类型
	typedef int MyArrayType[5];

	//定义一个类型，这个类型是数组 指针类型
	typedef int (*MyPArrType)[5];

	MyPArrType myPoint;
	int b[5];
	myPoint=&b;

	for(i=0;i<5;i++)
	{
		(*myPoint)[i]=i+1;
	}
	for(i=0;i<5;i++)
	{
		printf("%d\n",(*myPoint)[i]);
	}
	system("pause");
}

void main()
{

	int c[5];
	int i=0;
	int (*myArrayPoint)[5];//告诉编译器开辟4个字节内存
	myArrayPoint = &c;
	for(i=0;i<5;i++)
	{
		(*myArrayPoint)[i]=i+1;
	}
	for(i=0;i<5;i++)
	{
		printf("%d\n",(*myArrayPoint)[i]);
	}
	system("pause");
}