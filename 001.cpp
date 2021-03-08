#include<stdio.h>
#include<string.h>
void fun(char *s){
char*p1=s;
char*p2=s+strlen(s)-1;
char temp; 
while(p1<p2){temp=*p2;*p2=*p1;*p1=temp;p2--;p1++;
} 
} 
main(){
	char a[]="abcdefg";
fun(a);
printf("\nThe result is %s\n",a);
}
