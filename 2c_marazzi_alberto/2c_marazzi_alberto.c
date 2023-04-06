#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main() {
	int radianti=0;
	double angoli=0,p=0;
	printf("dammi i radianti: ");
	scanf("%d", &radianti);
	angoli=radianti*180/M_PI;
	printf("l'angolo e di %.3lf\n",angoli);
	system("pause");
}
