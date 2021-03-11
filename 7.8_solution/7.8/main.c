#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

int main()
{
	const STOP_SIGN = '.';
	char inputChar;
	int i, n_chars, n_words, n_lines;
	bool line_flag = false;
	bool word_flag = false;
	i = n_chars = n_words = n_lines = 0;

	printf("Enter text : ");

	while ((inputChar = getchar()) != STOP_SIGN) {

		if (!isspace(inputChar)) {
			n_chars++;
		}

		if (isspace(inputChar) && !line_flag) {
			n_lines++;
			line_flag = true;
		}

		if (inputChar == '\n') {
			line_flag = false;
		}

		if (!isspace(inputChar) && !word_flag) {
			n_words++;
			word_flag = true;
		}

		if (isspace(inputChar))
			word_flag = false;
	}	

	printf("Characters = %d, Words = %d, Lines = %d", n_chars, n_words, n_lines);

	return 0;
}