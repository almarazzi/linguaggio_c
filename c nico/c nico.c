#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main() {
	int random=0,numero=0,tentativi=5,i=0;
	srand(time(NULL));
	random=rand()%100+1;
	for(tentativi=5-1;tentativi>=0;tentativi--)
	{
		i++;
		printf("metti il numero=> ");
		scanf("%d",&numero);
		if(tentativi==0)
		{
			break;
		}
		if(random>numero)
		{
			printf("il numero e maggiore, i tentativi che ti rimangono sono %d\n",tentativi);
		}else
		{
			printf("il numero e minore, i tentativi che ti rimangono sono %d\n",tentativi);
		}
		if(numero==random)
		{
			printf("hai vinto in %d tentativi\n",i);
			break;
		}
	}
	printf("hai perso il nuemro era %d\n",random);
		
}