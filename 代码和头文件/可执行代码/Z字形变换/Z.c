#include <stdio.h>
#include <string.h>
#include <malloc.h>
#include "Z.h"
char* convert(char* str,int num) {
	if (num>=strlen(str)||num==1) 
	return str; 
	int i=0,j=0,k=0; //i表示行，j表示列
	char b[100][100]={0};//定义一个放元素的二维数组
	char *c=(char *)malloc(sizeof(char)*100);//输出的一维数组
	while(str[k]){
		while (i<num&&str[k]) {
			b[i++][j]=str[k++];
			}
		i-=2; //在二维数组的斜方向输入元素
		j++;
		while(i&&str[k]){ 
			b[i--][j++]=str[k++]; 
		}
	}
	int x=0;     //对要输出的一维数组赋值
	for(int m =0;m<num;m++) {
		for (int n=0;n<j;n++) {
			if (b[m][n]) {
				c[x++]=b[m][n];
			}
		}
	}
	return c;
}
