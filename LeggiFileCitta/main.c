#include "LeggiFileCitta.h"
int main()
{
	size_t n = 0;
	struct citta* a = Leggi_Citta("citta.txt", &n);
	for (size_t i = 0; i < n; i++)
	{
		printf_s("%s - %u\n",a[i].nome, a[i].popolazione);
	}
	printf_s("%zu citta", n);
	return 0;
}