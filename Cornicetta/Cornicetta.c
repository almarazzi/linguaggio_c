#include "stdio.h"
#include "stdlib.h"
#include "string.h"

static void FunzioneFor(char* t,int a,int b,int c,size_t n)
{
	for (size_t i = 0; i < (n+a+b+c); i++)
	{
		printf_s("%s", t);
	}
}
int main(int argc, char* argv[])
{
	if (argc <= 1)
	{
		printf_s("erorre devi mettere .\\Nomerogramma <stringa>");
		return EXIT_FAILURE;
	}
	char ss[255]="\0";
	size_t lungezza = strlen(argv[1]);
	if ((sscanf_s(argv[1], "%255s", ss,(unsigned)sizeof(ss)))!=1)
	{
		printf_s("erorre devi mettere .\\Nomerogramma <stringa>");
		return EXIT_FAILURE;
	} 
	FunzioneFor("*", 4, 4, 4, lungezza);
	printf_s("\n");

	printf_s("*");
	printf_s(" ");
	FunzioneFor("+", 4, 4, 0, lungezza);
	printf_s(" *\n"); 

	printf_s("* + ");
	FunzioneFor("#", 4, 0, 0, lungezza);
	printf_s(" + *\n");

	printf_s("* + # %s # + *\n", ss);

	printf_s("* + ");
	FunzioneFor("#", 4, 0, 0, lungezza);
	printf_s(" + *\n");

	printf_s("* ");
	FunzioneFor("+", 4, 4, 0, lungezza);
	printf_s(" ");
	printf_s("*");
	printf_s("\n");

	FunzioneFor("*", 4, 4, 4, lungezza);

	return EXIT_SUCCESS;
}