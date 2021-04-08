#include <stdio.h>
#include <string.h>
#include "huiwen.h"
int main()
{
    char *a,*b,*c,str1[100],str2[100],str3[100];
    a=str1;
    b=str2;
    c=str3;
    printf("ÇëÊäÈë×Ö·û´®£º\n");
    scanf("%s",a);
    int x=0,y=0;
    b=odd(a,b,&x);
    c=even(a,c,&y);
    print(b,c,&x,&y);
    return 0;
}

