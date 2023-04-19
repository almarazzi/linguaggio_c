#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main() 
{
	char val=' ';
	int x=0,s1=0,s2=0,i=0;
	while(i<13)
	{
		printf("Inserire un valore=> ");
        scanf(" %c", &val);
		if(val=='x')
		{
			x++;
		}
	 	if(val=='1')
		{
			s1++;
		}
 		if(val=='2')
		{
			s2++;
		}
		i++;		
	}
	printf("le x sono:%d, i 1 sono:%d e i 2 sono:%d", x,s1,s2);
	system("pause");
	
}
