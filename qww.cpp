#include<stdio.h>
#include<string.h>
main(){
	void fun(char*s);//main函数写在前面时需要申明用到的fun函数
char a[]="asdfbba";
fun(a);
printf("%s",a);
}
void fun(char*s){
	char* p1=s;
	char*p2=s+strlen(s)-1;
	char temp;
	while(p1<p2){temp=*p1;*p1=*p2;*p2=temp;p1++;p2--; 
}
} 
 
