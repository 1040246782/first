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
//���������������뺯�����д��ݣ�Ȼ�����Ԫ�ؽ��м�1������ѭ��5�Σ���1��Ϊ6

