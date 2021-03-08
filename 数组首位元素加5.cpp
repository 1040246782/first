#include<stdio.h>
void f(int *q)
{
int i=0;
for(;i<5;i++)
(*q)++; 
}
main(){
int a[5]={1,2,3,4,5},i;
f(a);
for(i=0; i<5; i++)
printf("%d,",a[i]);
}
//本程序将数组名放入函数进行传递，然后对首元素进行加1操作，循环5次，由1变为6

