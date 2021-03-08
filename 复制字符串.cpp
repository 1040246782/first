#include<stdio.h>
void fun(char *a,char *b)
{
	while(*a=='*')a++;
	while(*b=*a){a++;b++; 
	}
} 
main(){
	char *s="*****a*b****",t[80];
	fun(s,t);
	puts(t);
}
