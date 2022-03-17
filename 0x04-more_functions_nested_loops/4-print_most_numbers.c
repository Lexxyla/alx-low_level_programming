#include "main.h"

/**
 * prints the numbers, from 0 to 9, followed by a new line
 * Do not print 2 and 4
 * Return: None
 */
void print_most_numbers(void);
{
	int ch;
	for (ch = 48; ch < 58; ch++)
	{
		if (ch != 50 && ch != 52)
			_putchar(ch);
	}
	_putchar('\n');
}
