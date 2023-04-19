#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main() {
	int anniStudenti=0,maggioreni=0,i=0;
	while(i<15)
	{
		printf("inserisi l'eta => ");
		scanf("%d",&anniStudenti);
		maggioreni=(anniStudenti>=18)+maggioreni;
		i++;
	}
	printf("i maggioreni sono: %d",maggioreni);
}
