#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main() {
	int altezza=0,chilometri=0,i=1;
	printf("dammi l'altezza del l'onda==> ");
	scanf("%d",&altezza);
	printf("dammi i chilometri del l'onda==> ");
	scanf("%d",&chilometri);
	for(i=1;i<chilometri;i++)
	{
		altezza=altezza/2;
		if(altezza==0)
		{
			printf("\nla altezza del onda e %d\n",altezza);
			break;
		}
	}
	while(altezza!=0)
	{
		altezza=altezza/2;
		chilometri++;
		if(altezza==0)
		{
		printf("\nla altezza e 0 qunto i chilometri sono %d\n",chilometri);
		}
	}
}