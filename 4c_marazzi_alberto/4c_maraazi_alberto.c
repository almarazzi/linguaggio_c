#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main() 
{
	int numero=0,risultato=0;
	printf("pensa a un numero-> ");
	scanf("%d", &numero);
	risultato=(((numero*2)+12)/2)-numero;
	printf("il numero e'%d",risultato);
	system("pause");
}
