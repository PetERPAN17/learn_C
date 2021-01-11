#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	_Bool jud = 1;
	int input, sum = 0;
	int status;

	while (jud)
	{
		printf("Enter next integer (q to quit) : ");
		status = scanf("%d", &input);
		if (status == 1) {
			sum = sum + input;
		}
		else if (sum != 0) {
			printf("Sum = %d", sum);
			break;
		}
		else {
			break;
		};
	}

	return 0;
}