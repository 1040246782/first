#include <stdio.h>
#include <string.h>
typedef struct card
{
	char color[7];
	int value;
}CARD;
void disp(CARD*d, int n, char* cl)
{
	int i;
	printf("%s:",cl);
	for(i=0; i<n; i++)
		if(0==strcmp(cl, d[i].color))
		printf("%d ", d[i].value);
		}
main(){
	CARD cds[15]={"ºÚÌÒ",10,"ºìÌÒ",6,"·½¿é",13,"Ã·»¨",2,"Ã·»¨",1,"ºìÌÒ",7,"ºÚÌÒ",3,"·½¿é",8,"ºìÌÒ",5};
	disp(cds+3,6,"ºìÌÒ");
	disp(cds+2,6,"·½¿é");
	printf("\n");
	}
	

