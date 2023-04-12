#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main() {
	int persone=0,maggioreni=0,a=0;
	while(a<10)
	{
	 scanf("%d",&persone);
  	 maggioreni=(persone>18)+maggioreni;
	 a++;
	}
	printf("i maggioreni sono: %d \n",maggioreni);
	system("pause");
}
