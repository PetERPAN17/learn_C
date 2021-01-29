#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	const int FIRST_CHAR = 65;
	const int LAST_CHAR = 75;

	int i, charInt, j;

	for (i = 1; i <= 5; i++) {
		for (charInt = FIRST_CHAR; charInt <= LAST_CHAR; charInt++) {
			printf("%c ", charInt);
		}
		printf("\n");
	}

	for (i = 0; i <= 10; i++) {
		for (charInt = FIRST_CHAR; charInt <= FIRST_CHAR + i; charInt++) {
			printf("%c ", charInt);
		}
		printf("\n");
	}

	for (i = 0; i <= 10; i++) {
		for (charInt = FIRST_CHAR + i; charInt <= LAST_CHAR; charInt++) {
			printf("%c ", charInt);
		}
		printf("\n");
	}
	
	return 0;
}