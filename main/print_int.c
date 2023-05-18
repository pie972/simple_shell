#include "main.h"

/**
 * print_int - prints an integer
 * @tally: pointer to the tally number
 * Return: void
 */
void print_int(int *tally)
{
	int count = 0, length = 0, j, n;
	unsigned int base = 1, d, max;

	n = *tally;

	max = n;
	d = max;

	do {
		d /= 10;
		++length;
	} while (d != 0);

	count += length;

	for (j = 0; j < length -  1; j++)
		base = base * 10;

	_putchar('0' + (max / base));

	if (length > 1)
	{
		for (j = 0; j < length - 2; j++)
		{
			base /= 10;
			d = max / base;
			_putchar('0' + d % 10);
		}
		_putchar('0' + (max % 10));
	}
}
