#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main() 
{
	int uova=0,mese=0,anno=0;
	printf("dammi il valore delle uova alla settimana -> ");
	scanf("%d",&uova);
	if(uova<12)
	{
		mese=(uova)*4;
		anno=uova*12;
	}else
	{
		mese=(uova-12)*4;
		anno=(uova-12)*12;
	}
	printf("le uova affansate la mese sono %d, e' all'anno sono %d\n",mese,anno);
	system("pause");

}
