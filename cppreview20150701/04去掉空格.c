#include "stdio.h"
#include "stdlib.h"
#include "string.h"

//去掉字符串中的前边空格和后边的空格  使用两头堵模型
void trimspan(char *p,char *res)
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
	strncpy(res,p+i,count);
}

void main122()
{
	char *str="   abcdedf   ";
	char res[100]={0};
	trimspan(str,res);
	printf("result=%s",res);
	system("pause");
}