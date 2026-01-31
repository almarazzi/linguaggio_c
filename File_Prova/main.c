#include <stdio.h>
#include <malloc.h>
struct Matrche
{
	size_t rige;
	size_t colonne;
	double* data;
};

struct Matrche *QuadratoMatriche(const struct Matrche *M)
{
	struct Matrche* matecheRitorno = malloc(sizeof(struct Matrche));
	if (matecheRitorno == NULL)
		return NULL;
	ptrdiff_t diff = (ptrdiff_t)M->rige-M->colonne;
	if (diff > 0)
	{
		matecheRitorno->rige = M->rige;
		matecheRitorno->colonne = M->colonne + diff;
		matecheRitorno->data = calloc(matecheRitorno->colonne * matecheRitorno->colonne, sizeof(double));
		if (matecheRitorno->data == NULL)
			return NULL;
		for (size_t r = 0; r < M->rige; r++)
		{
			for (size_t c = 0; c < M->colonne; c++)
			{
				matecheRitorno->data[r * matecheRitorno->colonne + c] = M->data[r * M->colonne + c];
			}
		}

	}
	else
	{
		matecheRitorno->rige = M->rige-diff;
		matecheRitorno->colonne = M->colonne;
		matecheRitorno->data = calloc(matecheRitorno->colonne * matecheRitorno->colonne, sizeof(double));
		if (matecheRitorno->data == NULL)
			return NULL;
		for (size_t r = 0; r < M->rige; r++)
		{
			for (size_t c = 0; c <= M->colonne; c++)
			{
				matecheRitorno->data[r * matecheRitorno->colonne + c] = M->data[r * M->colonne + c];
			}
		}
	}
	return matecheRitorno;

}


int main()
{
	double data[3*2] = { 1,2,3,4,5,6 };
	struct Matrche *matrcheinz = malloc(sizeof(struct Matrche));
	if (matrcheinz == NULL)
		return NULL;
	matrcheinz->colonne = 3;
	matrcheinz->rige = 2;
	matrcheinz->data = malloc(sizeof(double) *3 * 2);
	if (matrcheinz->data == NULL)
		return NULL;
	for (size_t r = 0; r < matrcheinz->rige; r++)
	{
		for (size_t c = 0; c < matrcheinz->colonne; c++)
		{
			matrcheinz->data[r * matrcheinz->colonne + c] = data[r * matrcheinz->colonne + c];
		}

	}
	struct Matrche* a = QuadratoMatriche(matrcheinz);
	for (size_t r = 0; r < a->rige; r++)
	{
		for (size_t c = 0; c < a->colonne; c++)
		{
			printf("%.2f ", a->data[r * a->colonne + c]);
		}
		printf("\n");
	}
	free(matrcheinz->data);
	free(matrcheinz);
	free(a->data);
	free(a);
	return 0;


}