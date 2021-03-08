#include <stdio.h>
void f(int b[], int n, int flag){
int i,j,t;
for(i=0;i<n-1;i++)
for (j=i+1; j<n; j++)
if (flag? b[i]>b[j]: b[i]<b[j])
/*flag=0时从大到小排列，flag=1时从小到大排列*/
{
t=b[i]; b[i]=b[j]; b[j]=t;
}
}
main(){
int a[10]={5,4,3,2,1,6,7,8,9,10},i;
f(&a[2],5,0);/*该语句传址，对元素3,2,1,6,7排序，结果为5,4,7,6,3,2,1,8,9,10*/
f(a,5,1);/*该语句传值，对元素5,4,7,6,3排序，结果为3,4,5,6,7,2,1,8,9,10*/
for(i=0;i<10;i++)
printf( "%d,", a[i]);
}

