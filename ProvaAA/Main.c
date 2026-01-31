#include<string.h>
#include<stdlib.h>

static char* pp(const char* a, const char* b)
{
	size_t o = strlen(a) + strlen(b) + 1;
	if (o > 1)
	{
		char* aaa = malloc(o * sizeof(char));
		if (aaa == NULL)
		{
			return EXIT_FAILURE;
		}
		strcpy_s(aaa, o, a);
		strcat_s(aaa, o, b);
		return aaa;
	}
	return EXIT_FAILURE;

}

int main(void)
{
	char* ss = NULL;
	char* pp1 = "aa";
	if (ss == NULL || pp1 == NULL)
		return 0;
	char* a = pp(ss,pp1);
	free(a);
	return 0;
}