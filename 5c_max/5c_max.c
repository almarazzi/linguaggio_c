#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main() {
	int max =0;
	int i=0,num=0;
	while(i<10)
	{
		printf("inserisci un valore -> ");
		scanf("%d",&num);
		if(num>max)
		{
			max=num;
		}
		i++;
	}
	printf("il valore piu grante e %d\n",max);
	system("pause");

}
