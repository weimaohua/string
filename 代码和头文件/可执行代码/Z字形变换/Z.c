#include <stdio.h>
#include <string.h>
#include <malloc.h>
#include "Z.h"
char* convert(char* str,int num) {
	if (num>=strlen(str)||num==1) 
	return str; 
	int i=0,j=0,k=0; //i��ʾ�У�j��ʾ��
	char b[100][100]={0};//����һ����Ԫ�صĶ�ά����
	char *c=(char *)malloc(sizeof(char)*100);//�����һά����
	while(str[k]){
		while (i<num&&str[k]) {
			b[i++][j]=str[k++];
			}
		i-=2; //�ڶ�ά�����б��������Ԫ��
		j++;
		while(i&&str[k]){ 
			b[i--][j++]=str[k++]; 
		}
	}
	int x=0;     //��Ҫ�����һά���鸳ֵ
	for(int m =0;m<num;m++) {
		for (int n=0;n<j;n++) {
			if (b[m][n]) {
				c[x++]=b[m][n];
			}
		}
	}
	return c;
}
