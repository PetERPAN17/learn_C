#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <float.h>

int main()
{
	float max = -FLT_MAX;
	float min = FLT_MAX;
	float sum = 0.0f;
	float ave = 0.0f;
	float input;
	int input_count = 1;

	while (scanf("%f", &input) == 1)
	{
		if (input < 0.0f || input < 100.0f) continue;

		max = input > max
				? input
				: max;
		min = input < min
				? input
				: min;

		sum += input;

		ave = sum / input_count;

		input_count++;
	}

	if (input_count == 1)
	{
		printf("No input");
	} else {
		printf("input count : %d\n", input_count - 1);
		printf("max : %f\n", max);
		printf("min : %f\n", min);
		printf("ave : %f\n", ave);
	}
	
}