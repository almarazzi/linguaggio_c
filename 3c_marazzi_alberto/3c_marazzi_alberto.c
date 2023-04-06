#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main() {
	int giorni=0,minuti=0,seconti=0;
	printf("dammi i giorni-> ");
	scanf("%d",&giorni);
	minuti=giorni*24*60;
	seconti=giorni*24*60*60;
	printf("i minuti sono %d e i secondi sono %d\n",minuti,seconti);
	system("pause");
		
}
