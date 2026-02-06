#include "Image.h"
struct image* downsample(const struct image* img)
{
	if ((img->Heigh %2 != 0 || img->Width % 2 != 0) || (img->Heigh % 2 < 0 || img->Width % 2 < 0) || img == NULL )
	{
		return NULL;
	}
	uint8_t media = 0;
	struct image* NewImage = malloc(sizeof(struct image));
	if (NewImage == NULL)
	{
		return NULL;
	}
	NewImage->Heigh = img->Heigh / 2;
	NewImage->Width = img->Width / 2;
	NewImage->Pixel = calloc(NewImage->Width*NewImage->Heigh, sizeof(NewImage->Pixel));
	if (NewImage->Pixel == NULL)
	{
		return NULL;
	}
	for (int r = 0; r < NewImage->Heigh; r++)
	{
		for (int c = 0; c < NewImage->Width; c++)
		{
			media = 0;
			media += img->Pixel[(r*2)* img->Width + (c*2)];
			media += img->Pixel[(r*2) * img->Width + (c*2)+1];
			media += img->Pixel[((r*2) +1)* img->Width + (c*2)];
			media += img->Pixel[((r*2)+1) * img->Width + (c*2) + 1];
			media /= 4;

			NewImage->Pixel[r*NewImage->Width+c] = media;
		}
	}
	return NewImage;
}