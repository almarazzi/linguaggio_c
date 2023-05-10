#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main() {
	int num=0,i=0;
	printf("inserire il numero=> ");
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		printf("*\n");
	}
	printf("\n");
	for(i=0;i<num;i++)
	{
		printf("*");
	}
	system("pause");
}
