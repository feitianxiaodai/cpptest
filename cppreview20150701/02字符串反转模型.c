#include "stdio.h"
#include "stdlib.h"
#include "string.h"

void main02()
{
	//在栈区开辟内存
	char p[10]="abcde";
	//但是如果换成指针，由于是在静态区开辟的内存，不能被随意的进行写操作，因此就会报错。
	//char p="abcdef";
	char *p1=p;
	char *p2=p+strlen(p)-1;
	char c;
	while(p1<p2)
	{
		c=*p1;
		*p1=*p2;
		*p2=c;
		++p1;
		--p2;
	}

	printf("str=%s",p);
	system("pause");
}