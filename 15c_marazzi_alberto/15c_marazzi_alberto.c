#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main() {
	int v=0;
	double Ar=0.6,Al=0.5,Ab=0.4,Ag=0.1;
	double Sf=0;
	printf("dammi la velocita==> ");
	scanf("%d",&v);
	Sf=250*(v*v)/(250*Ar);
	printf("lo spazio di frenatora con asfalto rufido e %.3lf\n",Sf);
	Sf=250*(v*v)/(250*Al);
	printf("lo spazio di frenatora con asfalto lisio e %.3lf\n",Sf);
	Sf=250*(v*v)/(250*Ab);
	printf("lo spazio di frenatora con asfalto bagniato e %.3lf\n",Sf);
	Sf=250*(v*v)/(250*Ag);
	printf("lo spazio di frenatora con asfalto ghiacciato e %.3lf\n",Sf);
}