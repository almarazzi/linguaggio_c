#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main() {
	int baseM=0,basem=0,altezza=0,area=0;
	printf("dammi la base maggiore, base minore e altezza-> ");
	scanf("%d %d %d",&baseM,&basem,&altezza);
	area=((baseM+basem)*altezza)/2;
	printf("l'area e' %d \n",area);
	system("pause");
	
}
