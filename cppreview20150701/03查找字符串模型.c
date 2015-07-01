#include "stdio.h"
#include "stdlib.h"
#include "string.h"


//查找重复的字符串的个数
void getCount(char *pstr,char *substr,int *count)
{
	int ncount=0;
	char *p=pstr;
	do 
	{
		p=strstr(p,substr);
		if(p==NULL)
		{
			break;
		}
		else
		{
			ncount++;
			p=p+strlen(substr);
		}
	} while (*p!='\0');

	*count=ncount;
}


void main3()
{
	char *p="chinainternational";
	char *substr="tion";
	int count=0;
	getCount(p,substr,&count);

	printf("count=%d",count);

	
	system("pause");
}