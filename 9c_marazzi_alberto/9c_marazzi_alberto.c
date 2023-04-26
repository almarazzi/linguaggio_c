#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


void main() 
{
	int num=0,i=2;
	printf("inserisi un numero: ");
	scanf("%d",&num);
	while(i<num)
	{
		num--;
		int u=2,trorfa=0;
		while(u<num)
		{
			if(num%u==0)
			{
				trorfa=1;
				u=num+1;
			}
			u++;
		}
		if(trorfa==0)
		{
			printf("%d e un num primo\n",num);
		}
		
	}
	system("pause");
}
