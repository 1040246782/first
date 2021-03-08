#include <stdio.h>
int add1 (char *d)
{
	int cy;
	char c;
	if(*d=='\0') cy=1;
	else
{
	c=*d;
	c=c-'0'+add1(d+1);
	if(c>=10) cy=1;
	else cy=0;
	*d=c%10+'0';
}
	return cy;
}
main(){
	char d[]="09";
	int i;
	i=add1(d);
	printf("%d,%s\n",i,d);
}


