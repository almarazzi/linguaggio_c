#include "Image.h"

int main() {
	uint8_t m[6 * 4] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24 };

	struct image* M = malloc(sizeof(struct image));
	if (M == NULL)
	{
		return NULL;
	}
	M->Heigh = 4;
	M->Width = 6;
	M->Pixel = calloc(M->Width * M->Heigh, sizeof(M->Pixel));
	if (M->Pixel == NULL)
	{
		return NULL;
	}
	for (int i = 0; i < M->Heigh*M->Width; i++)
	{
		M->Pixel[i] = m[i];
		//printf_s("%u ", M->Pixel[i]);
	}
	struct image* k = downsample(M);
	if (k == NULL)
	{
		return NULL;
	}
	for (int r = 0; r < k->Heigh; r++)
	{
		for (int c = 0; c < k->Width; c++)
		{
			printf_s("%u\t", k->Pixel[r * k->Width + c]);
		}
		printf_s("\n");
	}
	free(M->Pixel);
	free(M);
	free(k->Pixel);
	free(k);
	return 0;
}