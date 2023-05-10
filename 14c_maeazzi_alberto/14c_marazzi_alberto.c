#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main() {
	int num=0,i=0,multipo=0;
	printf("dammi il numero-> ");
	scanf("%d",&num);
	for(i=0;i<12;i++)
	{
		multipo=num*i;
		printf("il numero %d e multipo di %d\n",multipo,num);
	}
}