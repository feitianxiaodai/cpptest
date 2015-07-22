#include "stdio.h"
#include "stdlib.h"
#include "string.h"

typedef struct _AdvTeacher
{
	char name[64];
	char *title;
	char **pStuArray;
	int age;
}Teacher;

Teacher *createTArray2(int num)
{
	int i=0;
	int j=0;
	Teacher *tArray = NULL;
	tArray = (Teacher*)malloc(num * sizeof(Teacher));
	if(tArray==NULL)
	{
		return NULL;
	}
	for (i = 0; i < num; i++)
	{
		tArray[i].title=(char*)malloc(100);
	}

	for (i = 0; i < num; i++)
	{
		
		char **ptmp = (char **)malloc(3*sizeof(char *));
		for(j=0;j<3;j++)
		{
			ptmp[i] = (char *)malloc(120);
		}
		tArray[i].pStuArray = ptmp;
	}
}

void printTArray(Teacher *array,int num)
{
	int i=0;
	int j=0;
	for(i=0;i<num;i++)
	{
		printf("%d\n",array[i].age);
		printf("学生信息为:\n");
		for(j=0;j<3;j++)
		{
			printf("%s\n", array[i].pStuArray[j]);
		}
	}
}

void sortTArray(Teacher *array,int num)
{
	int i=0, j=0;
	Teacher tmp;
	for(i=0;i<num;i++)
	{
		for(j=i+1;j<num;j++)
		{
			if(array[i].age>array[j].age)
			{
				tmp = array[i];
				array[i] = array[j];
				array[j] = tmp;
			}
		}
	}
}


void main()
{
	int i = 0, j = 0;
	int ret = 0;
	Teacher *pArray = NULL;

	pArray = createTArray2(3);
	if (pArray == NULL)
	{
		return ;
	}

	for (i=0; i<3; i++)
	{
		printf("请键入第%d个老师的年龄：", i+1);
		scanf("%d", &pArray[i].age);
		printf("请键入第%d个老师的姓名：", i+1);
		scanf("%s", pArray[i].name);

		printf("请键入第%d个老师的职称：", i+1);
		scanf("%s", pArray[i].title);

		printf("请键入学生信息\n");
		for (j=0; j<3; j++)
		{
			printf("请键入第%d个学生的名字: ", j+1);
			scanf("%s", pArray[i].pStuArray[j]);
		}
	}

	printf("排序之前。。。。\n");
	printTArray(pArray, 3);
	sortTArray(pArray, 3);
	printf("排序之后。。。。\n");
	printTArray(pArray, 3);

	system("pause");
}