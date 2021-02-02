#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char ch;

	while ( (ch = getchar()) != '\n' )
	{
		if (ch >= '0' && ch <= '9')
			ch = '*';

		if (ch >= 'a' && ch <= 'z')
			ch -= 'a' - 'A';
		else if (ch >= 'A' && ch <= 'z')
			ch += 'a' - 'A';

		putchar(ch);
	}

	return 0;
}