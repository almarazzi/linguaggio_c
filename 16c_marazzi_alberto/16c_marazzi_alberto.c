#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main() {
	double temReale=0,tempPercepita=0;
	double vento=0,i=0;
	printf("metti la velocita del vento in km/h==> ");
	scanf("%lf",&vento);
	printf("metti la temperatura reale==> ");
	scanf("%lf",&temReale);
	i= vento*0.621381;
	if(i<5)
	{
		printf("la temperatura percepita e %d",temReale);
	}else
	{
		tempPercepita = 33+(0.45+(0.29*sqrt(i))-0.02*i)*(temReale-33);
		printf("la temperatura percepita e %.3lf gradi",tempPercepita);
	}
	
	
}