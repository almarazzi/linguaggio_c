#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


void main() 
{
	int num=0;
	printf("inserisi un numero: ");
	scanf("%d",&num);
	int lista[num-2];
	int risultato[num-2];
	int y = 2;
	int mol = 0;
	int i=0,g=0,u=0;
	for (i = 0; i < sizeof(lista) / sizeof(lista[0]); i++)
	{
		lista[i] = y;
    	risultato[i] = y;
    	y++;
	}
	for (g = 0; g < sizeof(lista) / sizeof(lista[0]); g++)
	{
    	for (u = 0; u < sizeof(lista) / sizeof(lista[0]); u++)
   		{
        	mol = lista[g] * lista[u];
 			for (i = 0; i < sizeof(risultato) / sizeof(risultato[0]); i++)
			{
				if (mol == risultato[i])
 				{
		   		    risultato[i] = -1;
				}
			}
        }
    }
	for (i = 0; i < sizeof(risultato) / sizeof(risultato[0]); i++)
	{
    	printf("i numeri primi sono =>%d\n",risultato[i]);
	}
	system("pause");
}
