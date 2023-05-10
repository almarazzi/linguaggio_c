#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main() {
	int n=35,k=0,b=0;
	while(n!=0)
	{
		scanf("%d",&k);
		n=n-k;
		if(n<=0)
		{
			printf("k hai perso");
			break;
		}
		scanf("%d",&b);
		n=n-b;
		if(n<=0)
		{
			printf("b hai perso");
			break;
		}
	}
}
