#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet 10 times
 *
 */

void print_alphabet_x10(void)
{
	int x;
	char i;

	for (x = 0; x <= 10; x++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			putchar(i);
		}
	}
	putchar('\n')
}