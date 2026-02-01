#include "prodotto_kronecker.h"
struct Matrche* prodotto(const struct Matrche* a, const struct Matrche* b)
{
	size_t Colonne = a->Colonne * b->Colonne;
	size_t Rige = a->Rige * b->Rige;
	struct Matrche* prodotto = malloc(sizeof(struct Matrche));
	if (prodotto == NULL)
	{
		return NULL;
	}
	prodotto->Colonne = Colonne;
	prodotto->Rige = Rige;
	prodotto->dati = calloc(prodotto->Colonne * prodotto->Rige, sizeof(double));
	if (prodotto->dati == NULL)
	{
		return NULL;
	}

	for (size_t ra = 0; ra < a->Rige; ra++)
	{
		for (size_t ca = 0; ca < a->Colonne; ca++)
		{
			double a1 = a->dati[ra * a->Colonne + ca];

			for (size_t rb = 0; rb < b->Rige; rb++)
			{
				for (size_t cb = 0; cb < b->Colonne; cb++)
				{
					double b1 = b->dati[rb * b->Colonne + cb];
					double s = a1 * b1;
					int f = (ca * b->Rige + cb) * prodotto->Rige + (ra * b->Colonne + rb);
					prodotto->dati[f] = s;
					
				}
			}

		}
	}
	return prodotto;
}



