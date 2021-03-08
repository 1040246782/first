#include<stdio.h>

int f(int n){
int t=0,a=5;

if(n/2) 
{int a=6;t+=a++;/*此处a为局部变量a=6 */}
else{int a=7;t+=a++;}
return t+a++;/*此处a为局部变量，f(0)中a=5，f(1)中将a重置为5 */
}
main()
{
int s=0,i=0;
for(;i<2;i++)s+=f(i);
printf("%d\n",s); 
}
