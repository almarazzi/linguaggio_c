#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main() {
	int primo=0,secondi=0,gradi=0;
	printf("inserisi i tre numeri-> ");
	scanf("%d %d %d",&primo,&secondi,&gradi);
	secondi=(secondi)+(gradi*3600)+(primo*60);
	printf("la ampieza del angolo e' %d", secondi);
	system("pause");
}
