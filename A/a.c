#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main() 
{
	int num=0,somma=0;
	while(somma<=200)
	{
		printf("inserisi il numero=> ");
		scanf("%d",&num);
		somma=somma+num;
	}
	printf("la somma e' %d\n",somma);
	system("pause");
	
}
