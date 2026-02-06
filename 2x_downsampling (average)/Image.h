#pragma once
#include "stdint.h"
#include "math.h"
#include "stdio.h"
#include "malloc.h"
struct image
{
	int Width; //Rige
	int Heigh; //Colonne
	uint8_t* Pixel;
};
struct image* downsample(const struct image* img);
