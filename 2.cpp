#include<stdio.h>
#include<stdlib.h>
int main(){
	void writestr(char *fn,char *str);
	writestr("t1.txt","start");
	writestr("t1.txt","end");
	return 0;
} 
void writestr(char *fn,char *str){
	FILE *fp;
	fp=fopen(fn,"a");
	fputs(str,fp);
	fclose(fp);
	
}
