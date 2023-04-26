#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main() {
	int num=0;
	int pari=0;
	printf("inserisci un numero: ");
	scanf("%d",&num);
	pari =num-2;
	while(pari>=0)
	{
		
		printf("i numeri pari sono => %d\n",pari);
		pari=pari-2;
	}
	system("pause");
}
