#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main() {
	int i=1,y=0;
	for(i=1;i<200;i++)
	{
		if(i%2==1)
		{
			printf(" %d",i);
			y++;
			if(y==5)
			{
				printf("\n");
				y=0;
			}	
		}
	}
	
}