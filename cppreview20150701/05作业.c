#include "stdio.h"
#include "stdlib.h"
#include "string.h"

void trimspan1( char * p, char * value ) 
{
	int count=0;
	int i=0;
	int j= strlen(p)-1;

	while(isspace(p[i])&&p[i]!='\0')
	{
		i++;
	}
	while(isspace(p[j])&&j>0)
	{
		j--;
	}

	count=j-i+1;
	strncpy(value,p+i,count);
}


//在字符串中根据key找到相应的value的值
void getValue(char *keyvalue,char *key,char *value)
{
	char *p=keyvalue;
	p=strstr(p,key);
	if(p==NULL)
	{
		return;
	}
	p=p+strlen(key);
	p=strstr(p,"=");
	if(p==NULL)
	{
		return;
	}
	p=p+1;
	trimspan1(p,value);
}


void main()
{
	char *keyvaluestr=" key=   value12344  ";
	char *key="key";
	char value[1024]={0};

	getValue(keyvaluestr,key,value);
	printf("value=%s",value);
	system("pause");
}