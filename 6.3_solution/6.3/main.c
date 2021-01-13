#include <stdio.h>

int main()
{
	int i;

	i = 0;

	while (i++ < 10)
	{
		printf("%i\n", i);
	}

	while (--i > 0)
	{
		printf("%i\n", i);
	}

	return 0;
}