#include<stdio.h>
int a=4; 
int f(int n){
int t=0;
static int a=5;
if(n%2) 
{int a=6;t+=a++;/*�˴�aΪ�ֲ�����a=6 */}
else{int a=7;t+=a++;}
return t+a++;/*�˴�aΪstatic a,f(0)��a=5��f(1)��a=6 */
}
main()
{
int s=a,i=0;
for(;i<2;i++)s+=f(i);
printf("%d\n",s); 
}
/* 1. s=4+t+a++=4+7+5=16
   2. s=16+t+a++=16+6+6=28  
