#include "stdio.h"
#include "stdlib.h"
#include "string.h"

//结构体定义  定义一个类型，没有分配内存
typedef struct _Teacher
{
	char name[64];
	int age;
	
} Teacher;

typedef struct _Teacher2
{
	char name[64];
	int age;
	
}t2,t3; //第二种方法

struct 
{
	char name[64];
	int age;
	
}t4; //第三种方法

void main123()
{
	//第一种方法
	Teacher t1; //临时区分配内存
	Teacher *p = (Teacher *)malloc(sizeof( Teacher));
	system("pause");
}

void copyStruct(Teacher *to,Teacher *from)
{
	*to=*from;
}

void copyStruct2(Teacher to,Teacher from)
{
	to=from;
}

void main()
{
	Teacher *p;
	Teacher t1; //临时区分配内存
	Teacher t2;
	t1.age=10;//通过.来操作结构体的成员域
	p=&t1;
	strcpy(t1.name,"name");
	p->age=10; //本质是寻址，并不是操作内存。每一个成员相对于大变量的内存偏移
	p->age;//没有问题

	t2=t1;  //
	printf("t2.age=%d\n",t2.age);

	{
		Teacher t3;
		copyStruct2(t3,t1);
		printf("t3.age=%d\n",t3.age);
	}

	system("pause");
}