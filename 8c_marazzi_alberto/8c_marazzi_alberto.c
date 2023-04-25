#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main() {
	int media=0,provaT=0,provaP=0,i=0;
	while(i<16)
	{
	    printf("dammi il voto dell prova teoria => ");
	    scanf("%d",&provaT);
	    printf("dammi il voto dell prova pratica => ");
        scanf("%d",&provaP);
        if(provaT >=18 && provaP >=18)
        {
        	media=(provaT+provaP)/2;
			printf("il voto e sufficente. la media e' %d\n",media);
		}else
		{
			printf("il voto e insufficente\n");	
		}
	}
	system("puase");
}
