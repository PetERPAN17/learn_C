#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define ARRAY_SIZE 5

int main()
{
	/*int i1 = 0;
	int i2 = 1;
	int i3 = 2;

	printf("%d\n", i1);
	printf("%d\n", i2);
	printf("%d\n", i3);*/

	int my_arr[ARRAY_SIZE];
	int arr_length, sum = 0;

	arr_length = sizeof(my_arr) / sizeof(my_arr[0]);

	printf("Enter %d numbers : ", arr_length);

	for (int i = 0; i < arr_length; ++i) {
		scanf("%d", &my_arr[i]);
	}

	for (int i = 0; i < arr_length; ++i)
		sum += my_arr[i];
		printf("sum = %d\n", sum);
	
	return 0;
}