#include <stdio.h>
#include <string.h>
#include "huiwen.h"
char *odd(char *a,char *b,int *x)//��������ַ���Ϊ����ʱӦ�ô˺��� �� 
{
	int i,j=0,k=0;
	int len=strlen(a);
    for(i=0;i<len;i++)
    {
        j=i-1;//�����Ļ����ַ�����С����Ϊ3 �� 
        k=i+1;
        while(j>=0&&k<len&&a[j]==a[k])
        {
            int m;
            m=k-j+1;
            if(m>*x)
            {
                *x=m;//��m��ֵ��x���Ѻ���õ���m��x�Ƚϣ��������ҵ������������Ĵ� �� 
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
        j=i;//��Ϊ��ż���ַ�����������С����Ϊ2 �� 
        k=i+1; 
        while(j>=0&&k<len&&a[j]==a[k])
        {
            int m;
            m=k-j+1;
            if(m>*y)
            {
                *y=m;//ͬ�ϣ����Եõ����ż�������ַ��� �� 
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
    printf("û�л����ַ�����\n");
    else if(*x>=*y&&*x!=0)//�������������Ļ����ַ�����ż�������Ƚϣ��ó���Ļ����ַ����� 
    printf("%s",b);
    else 
    printf("%s",c);
}

