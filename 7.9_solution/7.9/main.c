#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

int main()
{
	//int temp;
	//temp = true ? 1024 : 7;
	//printf("%d\n", temp);

	//temp = false ? 1024 : 7;
	//printf("%d\n", temp);

	//-------------------------------------

	int number = 0;
	scanf("%d", &number);

	//const bool is_even = (number % 2 == 0) ? true : false;

	//if (number % 2 == 0)
	//	is_even = true;
	//else
	//	is_even = false;

	//is_even = (number % 2 == 0) ? true : false;

	//if (is_even)
	//	printf("Even");
	//else
	//	printf("Odd");

	(number % 2 == 0) ? printf("Even") : printf("Odd");

	//-------------------------------------

	return 0;
}