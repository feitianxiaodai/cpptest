#include "stdio.h"
#include "stdlib.h"
#include "string.h"

void splitString(const char *buf1,char c,char buf[10][30],int *num)
{
	//1.初始化条件
	char *p=buf1;
	char *pTmp=buf1;
	int ncount=0;
	char myBuf[1024]={0};
	do
	{
		p=strchr(p,c);
		if(p==NULL)
		{
			break;
		}
		else
		{
			memset(myBuf,0,sizeof(myBuf));
			
			//步骤2
			strncpy(myBuf,pTmp,p-pTmp);
			myBuf[p-pTmp] = '\0';
			strcpy(buf[ncount],myBuf);
			//步骤3
			pTmp=p=p+1;
			ncount++;

		}
	} while (*p!='\0');
	*num=ncount;
}

void splitString02(const char *buf1,char c,char buf[10][30],int *num)
{
	//1.初始化条件
	char *p=buf1;
	char *pTmp=buf1;
	int ncount=0;
	do
	{
		p=strchr(p,c);
		if(p==NULL)
		{
			break;
		}
		else
		{
			
			//步骤2
			
			strncpy(buf[ncount],pTmp,p-pTmp);
			buf[ncount][p-pTmp]='\0';
			//步骤3
			pTmp=p=p+1;
			ncount++;

		}
	} while (*p!='\0');
	*num=ncount;
}

void main()
{
	int i=0;
	const char *buf1="abcdef,acccd,eeee,aaaa,e3eeeee,sssss,";
	char c=',';
	char buf[10][30];
	int num=0;
	splitString02(buf1,c,buf,&num);

	for(i=0;i<num;i++)
	{
		printf("%s\n", buf[i]);
	}

	system("pause");
}