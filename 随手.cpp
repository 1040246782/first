#include<stdio.h>
#include<string.h>

main(){
	char *s1,*s2; 
	s1="oK";
	s2="OK";
	if(strcmp(s1,s2)==0)
	printf("���ַ�����ͬʱstrcmp���0");
	else if(strcmp(s1,s2)<0)
	printf("s1�ַ���<s2�ַ���");
	else
	printf("s1�ַ���>s2�ַ���");
	} 
