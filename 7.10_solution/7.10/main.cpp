#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	// continue
	/*for (int i = 0; i < 10; ++i)
	{
		if (i == 5)
			continue;

		printf("%d ", i);
	}*/

	// break
	/*for (int i = 0; i < 10; ++i)
	{
		if (i == 5)
			break;

		printf("%d ", i);
	}*/

	//while and continue
	/*int count = 0;
	while (count < 5)
	{
		int c = getchar();
		if (c == 'a')
			continue;
		putchar(c);
		count++;
	}*/

	//while and break
	/*int count = 0;
	while (count < 5)
	{
		int c = getchar();
		if (c == 'a')
			break;
		putchar(c);
		count++;
	}*/

	//continue as a placeholder
	/*while (getchar() != '\n')
		continue;*/

		//Need to use continue?
		//char c;
		//while ((c = getchar()) != '\n')
		//{
		//	if (c == 'a')
		//		continue;
		//	putchar(c);

		//	/*if (c != 'a')
		//		putchar(c);*/
		//}

		//break
		/*char c;
		while ((c = getchar()) != '.')
		{
			putchar(c);
		}*/

		/*char c;
		while (1)
		{
			char c = getchar();

			if (c == '.')
				break;
			putchar(c);
		}*/

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (j == 5)
				break;

			printf("(%d %d)", i, j);
		}

		printf("\n");
	}
}