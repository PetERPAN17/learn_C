#include <stdio.h>

int main()
{
	int a, b, y;

	y = (a = 1, b = 2);
	printf("%d", y);

	return 0;
}