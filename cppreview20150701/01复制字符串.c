#include "stdio.h"
#include "stdlib.h"
#include "string.h"

//�ַ�����������01
void copystr(char *from,char *to)
{
	for(;*from!='\0';from++,to++)
	{
		*to=*from;
	}
	*to='\0';
}

//�ַ�����������02
void copystr1(char *from,char *to)
{
	while(*from!='\0')
	{
		*to=*from;
		from++;
		to++;
	}
	*to='\0';
}

void copystr2(char *from,char *to)
{
	while(*from!='\0')
	{
		*to++=*from++;
	}
	*to='\0';
}

//���汾
void copystr3(char *from,char *to)
{
	while(*to++=*from++)
	{
		;
	}
}

void main1()
{

	char *from="abcdef";
	char to[100];
	//copystr(from,to);
	//copystr2(from,to);
	copystr3(from,to);
	printf("copy str:%s",to);

	system("pause");
}
