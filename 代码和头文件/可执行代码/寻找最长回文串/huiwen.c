#include <stdio.h>
#include <string.h>
#include "huiwen.h"
char *odd(char *a,char *b,int *x)//当输出的字符串为奇数时应用此函数 。 
{
	int i,j=0,k=0;
	int len=strlen(a);
    for(i=0;i<len;i++)
    {
        j=i-1;//奇数的回文字符串最小长度为3 。 
        k=i+1;
        while(j>=0&&k<len&&a[j]==a[k])
        {
            int m;
            m=k-j+1;
            if(m>*x)
            {
                *x=m;//把m的值给x，把后面得到的m与x比较，有助于找到最大的奇数回文串 。 
                int n=j,i;
                for(i=0;i<m&&n<=k;i++,n++)
                {
                    b[i]=a[n];
                }
            }
            j--;
            k++;
        }
    }
    return b;
}

char *even(char *a,char *c,int *y)
{
	int i,j=0,k=0;
	int len=strlen(a);
	for(i=0;i<len;i++)
    {
        j=i;//因为是偶数字符串，所以最小长度为2 。 
        k=i+1; 
        while(j>=0&&k<len&&a[j]==a[k])
        {
            int m;
            m=k-j+1;
            if(m>*y)
            {
                *y=m;//同上，可以得到最长的偶数回文字符串 。 
                int n=j,i;
                for(i=0;i<m&&n<=k;i++,n++)
                {
                    c[i]=a[n];
                }
            }
            j--;
            k++;
        }
    }
    return c;
}
void print(char *b,char *c,int *x,int *y)
{
	if(*x==*y&&*y==0)
    printf("没有回文字符串！\n");
    else if(*x>=*y&&*x!=0)//把奇数长度最大的回文字符串与偶数的作比较，得出最长的回文字符串。 
    printf("%s",b);
    else 
    printf("%s",c);
}

