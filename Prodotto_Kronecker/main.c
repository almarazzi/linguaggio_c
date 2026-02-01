#include "prodotto_kronecker.h"
int main()
{
	double a1[3 * 2] = { 1.0,3.0,2.0,2.0,1.0,4.0 };
	double b1[2 * 2] = { 0,2.0,3.0,1.0 };
	struct Matrche* a = malloc(sizeof(struct Matrche));
	if (a == NULL)
	{
		return 0;
	}
	a->Colonne = 3;
	a->Rige = 2;
	a->dati = malloc(a->Colonne * a->Rige * sizeof(double));
	if (a->dati == NULL)
	{
		return 0;
	}
	for (size_t i = 0; i < 6; i++)
	{
		a->dati[i] = a1[i];
	}

	struct Matrche* b = malloc(sizeof(struct Matrche));
	if (b == NULL)
	{
		return 0;
	}
	b->Colonne = 2;
	b->Rige = 2;
	b->dati = malloc(b->Colonne * b->Rige * sizeof(double));
	if (b->dati == NULL)
	{
		return 0;
	}
	for (size_t i = 0; i < 4; i++)
	{
		b->dati[i] = b1[i];
	}
	struct Matrche* fin = prodotto(a, b);
	for (size_t r = 0; r < fin->Colonne; r++)
	{
		for (size_t c = 0; c < fin->Rige; c++)
		{

			printf_s("%.2f  ", fin->dati[r * fin->Rige + c]);

		}
		printf_s("\n");
	}
	free(a->dati);
	free(a);
	free(b->dati);
	free(b);
	free(fin->dati);
	free(fin);
	return 0;
}