#pragma once
#include "malloc.h"
#include "stdio.h"
struct Matrche
{
	size_t Rige, Colonne;
	double* dati;
};
struct Matrche* prodotto(const struct Matrche* a, const struct Matrche* b);