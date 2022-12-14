#include "main.h"
/**
 * print_last_digit - prints the last digits of a number
 * @n: the number in question
 * Return: Value of the last digits
 *
 */
int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (n < 0)
	{
		lastDigit = -lastDigit;
		_putchar(lastDigit + '0');
	}
	return (lastDigit);
}
