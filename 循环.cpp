#include<stdio.h>
main()
{ 
int i,j,x=0;
for(i=0;i<2;i++)
{
x++;
for(j=0;j<=3;j++)
{
if(j%2)continue;
x++;
}
x++;}/* ע�����ŵ�λ��*/
printf("x=%d\n",x);
} 
