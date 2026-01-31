#include "math.h"
#include "stdio.h"
double gini(const double* v, size_t n)
{
	if (v == NULL || n == NULL)
	{
		return 0;
	}
	double Numeratore = 0;
	double Denumetatore = 0;
	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < n; j++)
		{
			Numeratore += fabs(v[i] - v[j]);
		}
		Denumetatore += v[i];
	}
	n = 2 * n;
	return Numeratore/(n*Denumetatore);
}


int main()
{
	double v[] = { 1.000000, 2.000000, 3.000000, 2.000000, 4.000000 };
	double r =gini(v, 5); // 0.233
	printf_s("%f", r);
	return 0;
}