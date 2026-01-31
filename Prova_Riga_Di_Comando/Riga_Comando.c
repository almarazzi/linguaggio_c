#include <stdio.h>
#include <stdlib.h>
int main(int argc, char* argv[])
{
	if (argc < 3)
	{
		return 0;
	}
	double u = 0.0;
	for (int i = 1; i < argc; i++)
	{
		char* end;
		u += strtod(argv[i],&end);
		if (*end != '\0')
		{
			return 0;
		}
	}
	printf_s("%.2f", u);
	return 0;
}