#include "stdio.h"
#include "stdlib.h"
#include "string.h"

void getStr(const char *p1)
{
	//不能被修改指向的内容
	//p1[0]='a';
}

void test(char * const p1)
{
	//不能修改指针
	//p1=0x1;
}

void main(int argc, char const *argv[])
{
	const char *c; //const修饰c所执行的内存空间,c所指向的内存空间不能被修改
	char * const d; //d是一个常量指针
	
	printf("%s\n","hello");

	system("pause");
}