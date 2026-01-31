#include "stdio.h"
#include "stdlib.h"
int main(int argc, char* argv[])
{
	unsigned int giorno = 0, mese = 0, anno = 0;
	char* meseP = "\0";
	if (argc <= 1 || (sscanf_s(argv[1], "%d/%d/%d", &giorno, &mese, &anno)) != 3)
	{
		printf_s("Erorre devi inserire: .\\nomeProgramma gg/mm/aaaa");
		return EXIT_FAILURE;
	}
	if (mese > 12 || mese == 0)
	{
		printf_s("devi inserire un mese da 1 a 12");
		return EXIT_FAILURE;
	}
	if (giorno > 31 || giorno == 0)
	{
		printf_s("devi inserire un giorno da 1 a 31");
		return EXIT_FAILURE;
	}
	switch (mese)
	{
		case 1:
			meseP = "Gennaio";
			break;
		case 2:
			meseP = "Febbrario"; 
			if (((anno % 4 != 0 || anno % 400 != 0) && giorno > 28) || ((anno % 4 == 0 || anno % 400 == 0) && giorno > 29))
			{
				printf_s("devi inserire un girno da 1 a 28 se l'anno e bisestile un giorno d 1 a 29");
				return EXIT_FAILURE;
			}
			break;
		case 3:	
			meseP = "Marzo"; 
			break;
		case 4:	
			meseP = "Aprile";
			if (giorno > 30)
			{
				printf_s("devi inserire un girno da 1 a 30");
				return EXIT_FAILURE;
			}
			break;
		case 5:	
			meseP = "Maggio"; 
			break;
		case 6:	
			meseP = "Giugnio";
			if (giorno > 30)
			{
				printf_s("devi inserire un girno da 1 a 30");
				return EXIT_FAILURE;
			}
			break;
		case 7:	
			meseP = "Luglio"; 
			break;
		case 8:	
			meseP = "Agosto"; 
			break;
		case 9:	
			meseP = "Settembre";
			if (giorno > 30)
			{
				printf_s("devi inserire un girno da 1 a 30");
				return EXIT_FAILURE;
			}
			break;
		case 10:
			meseP = "Ottobre";
			break;
		case 11:
			meseP = "Novembre";
			if (giorno > 30)
			{
				printf_s("devi inserire un girno da 1 a 30");
				return EXIT_FAILURE;
			}
			break;
		case 12:
			meseP = "dicembre";
			break;
	}
	printf_s("%d/%s/%d", giorno, meseP, anno);
	return EXIT_SUCCESS;
}