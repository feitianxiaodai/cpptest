#include "stdio.h"
#include "stdlib.h"
#include "string.h"

char *getMem(int count)
{
	char *tmp=NULL;
	tmp=(char *)malloc(100*sizeof(char));
	return tmp;
}

int FreeMem(char *p)
{
	if(p==NULL)
	{
		return -1;
	}
	if(p!=NULL)
	{
		free(p);
		p=NULL;  //无法修改实参 //p是直接从实参复制一份
	}
	return 0;
}

void main()
{
	char *myp=NULL;
	myp = getMem(100);
	//做业务操作
	FreeMem(myp);

	FreeMem(myp);
	system("pause");
}


void main123()
{
	//野指针产生
	//指针变量和它所指内存空间变量是两个不同的变量

	//解决野指针方法 1.0定义指针时把指针变量赋值为null.
	//2.释放内存时，先判断指针变量是否为null.
	//3.释放内存时，free之后把指针变量重新赋值成null.

	char *p=NULL;
	p= (char *)malloc(100);
	strcpy(p,"abcded");

	if(p!=NULL)
	{
		free(p);
		//p=NULL;
	}
	if(p!=NULL)
	{
		free(p);
	}

	system("pause");
}