#include<stdio.h>
main()
{
int a[4][4]={{1,4,3,2},
{8,6,5,7},
{3,7,2,5},
{4,8,6,1}};
int i,j,k,t;
for(i=0;i<4;i++)
for(j=0;j<3;j++)
for(k=j+1;k<4;k++)
if(a[j][i]>a[k][i])
{
t=a[j][i];a[j][i]=a[k][i];a[k][i]=t;
}/*按列排序*/
for(i=0;i<4;i++)
printf("%d,",a[i][i]);/*排序后输出对角线元素*/
}
