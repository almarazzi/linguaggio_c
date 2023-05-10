#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main() {
	int num=0,i=1,r=0;
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		r=num%i;
		if(r==0)
		{
			printf("il fattore di %d e %d\n",num,i);
		}
	}
	system("pause");
}
