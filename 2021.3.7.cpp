#include<stdio.h>

int f(int n){
int t=0,a=5;

if(n/2) 
{int a=6;t+=a++;/*�˴�aΪ�ֲ�����a=6 */}
else{int a=7;t+=a++;}
return t+a++;/*�˴�aΪ�ֲ�������f(0)��a=5��f(1)�н�a����Ϊ5 */
}
main()
{
int s=0,i=0;
for(;i<2;i++)s+=f(i);
printf("%d\n",s); 
}
