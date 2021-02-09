#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

int main()
{
	unsigned num;
	bool isPrimeFlg;

	scanf("%u", &num);

	isPrimeFlg = false;

	if (num == 1 || num == 2 || num % 2 != 0)
		isPrimeFlg = true;

	if (isPrimeFlg)
		printf("%u is a prime number.\n", num);
	else
		printf("%u is not a prime number.\n", num);

	return 0;
}