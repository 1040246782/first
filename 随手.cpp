#include<stdio.h>
#include<string.h>

main(){
	char *s1,*s2; 
	s1="oK";
	s2="OK";
	if(strcmp(s1,s2)==0)
	printf("Á½×Ö·û´®ÏàÍ¬Ê±strcmpÊä³ö0");
	else if(strcmp(s1,s2)<0)
	printf("s1×Ö·û´®<s2×Ö·û´®");
	else
	printf("s1×Ö·û´®>s2×Ö·û´®");
	} 
