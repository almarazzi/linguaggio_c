#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main() {
	int num=0,r=0,i=1;
	printf("inserire il numero-> ");
	scanf("%d",&num);
	printf("\n");
	do
	{
		if(r==0)
		{
			printf("il fattore %d e' %d\n",num,i);
		}
		i++;
		r=num%i;
	}while(i<=num);
}
