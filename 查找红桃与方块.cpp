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
	CARD cds[15]={"����",10,"����",6,"����",13,"÷��",2,"÷��",1,"����",7,"����",3,"����",8,"����",5};
	disp(cds+3,6,"����");
	disp(cds+2,6,"����");
	printf("\n");
	}
	

