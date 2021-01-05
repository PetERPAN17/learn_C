#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	int a = 0;
	a++;
	printf("%d\n", a);

	++a;
	printf("%d\n", a);

	double b = 0;
	b++;
	printf("%f\n", b);

	++b;
	printf("%f\n", b);

	int count = 0;
	while (++count < 10)
	{
		printf("%d ", count);
	}

	printf("\n");
	int count2 = 0;
	while (count2++ < 10)
	{
		printf("%d ", count2);
	}

	return 0;
}