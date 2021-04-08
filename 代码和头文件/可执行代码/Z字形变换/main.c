#include <stdio.h>
#include <string.h>
#include <malloc.h>
#include "Z.h"
int main()
{
    char *a,str1[100];
    a=str1;
	int len,num;
	printf("请输入字符串：\n");
    scanf("%s",a);
	printf("请输入行数：\n");
	fflush(stdin);
    scanf("%d",&num);
    len=strlen(a);
    a=convert(a,num);
	printf("%s",a);
    return 0;
}
