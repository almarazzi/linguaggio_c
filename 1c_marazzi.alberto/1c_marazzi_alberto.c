#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main() {
	double lato=0,area=0,perimetro=0;
	printf("inserisi il lato del quadrato: ");
	scanf("%lf", &lato);
	area =lato*lato;
	perimetro=lato*4;
	printf("la area e' %.3lf e il perimetro e' %.3lf \n",area, perimetro);
	system("pause");
}
