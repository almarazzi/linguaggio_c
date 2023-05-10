#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main() {
	int n1=0,n2=0,n3=0,i=0,j=0;
	char p=' ';
	printf("metti c per cresente e d per decresente=> ");
	scanf(" %c",&p);
	printf("inserisi il primo numero=> ");
	scanf("%d",&n1);
	printf("inserisi il secondo numero=> ");
	scanf("%d",&n2);
	printf("inserisi il terzo numero=> ");
	scanf("%d",&n3);
	if(p=='c')
	{
		for(i=3-1;i>0;i--)
		{	
			if(n2<n1)
			{	
				p=n2;
				n2=n1;
				n1=p;
			}
			if(n3<n2)
			{	
				p=n3;
				n3=n2;
				n2=p;
			}
		}
	}
	if(p=='d')
	{
		for(i=3-1;i>0;i--)
		{	
			if(n2>n1)
			{	
				p=n2;
				n2=n1;
				n1=p;
			}
			if(n3>n2)
			{	
				p=n3;
				n3=n2;
				n2=p;
			}
		}
	}
	printf("i numeri sono %d %d %d",n1,n2,n3);
}
