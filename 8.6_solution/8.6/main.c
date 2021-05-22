#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

long get_long(void);

int main()
{
	printf("Please input an integer between 1 and 100.\n");
	long number = get_long();

	if (number > 1 && number < 100)
		printf("OK. Thank you.\n");
	else
		printf("Wrong input.\n");

	return 0;
}

long get_long(void)
{
	printf("Please input an integer and press enter.\n");

	long input;
	char c;

	while (scanf("%ld", &input) != 1)
	{
		printf("Your input - ");

		while ((c = getchar()) != '\n')
			putchar(c);
		printf(" - is not an integer. Please try again.\n");
	}

	printf("Your input %ld is an integer. Thank you.\n", input);

	return input;
}