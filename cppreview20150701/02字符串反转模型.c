#include "stdio.h"
#include "stdlib.h"
#include "string.h"

void main02()
{
	//��ջ�������ڴ�
	char p[10]="abcde";
	//�����������ָ�룬�������ھ�̬�����ٵ��ڴ棬���ܱ�����Ľ���д��������˾ͻᱨ��
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