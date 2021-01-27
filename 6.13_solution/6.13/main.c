#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	const int secret_code = 337;
	int guess = 0;

	do
	{
		printf("Enter secret code : ");
		scanf("%d", &guess);
	} while (guess != secret_code);

	printf("Exit");

	return 0;
}