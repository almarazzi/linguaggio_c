#include "time.h"
#include "stdio.h"
int main()
{
	char s[255];

	struct tm ti;
	struct tm tf;
	scanf_s("%255s", s,(unsigned int)sizeof(s));
	if (s[0] == 'i')
	{
		time_t Ti = time(NULL);
		scanf_s("%255s", s, (unsigned int)sizeof(s));
		if (s[0] == 'f')
		{
			time_t Tf = time(NULL);
			double Tempo = difftime(Tf, Ti);
			int ore = Tempo / 3600;
			int minuti = (Tempo - (ore * 3600)) / 60;
			int secondi = Tempo-(ore*3600)-(minuti*60);
			printf_s("%02d:%02d,%d",ore, minuti,secondi);
		}
	}
	return 0;

}