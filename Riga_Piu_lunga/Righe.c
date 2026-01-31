#include <stdio.h>
#include <string.h>
#define Max 256
char* Riga_Piu_lunga(const char* NomeFile)
{
	FILE* f;
	fopen_s(&f, NomeFile,"r");
	if (f == NULL)
	{
		return 0;
	}
	char parola[Max]="\0", parolaF[Max] = "\0";
	size_t lungezza=0;
	while (fgets(parola, (unsigned)sizeof(parola), f))
	{
		parola[strcspn(parola, "\n")] = '\0';
		if (lungezza < strlen(parola))
		{
			lungezza = strlen(parola);
			strcpy_s(parolaF,(unsigned)sizeof(parolaF), parola);
		}
		
	}
	fclose(f);
	return parolaF;

}

int main()
{
	char* p = "\0";
	p = Riga_Piu_lunga("file1.txt");
}