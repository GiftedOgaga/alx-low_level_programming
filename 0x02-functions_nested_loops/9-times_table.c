#include "main.h"

/**
 * times_table-prints times 9 times table
 *
 * Return: void
 */

void times_table(void)
{
	int times, num;

	for (times = 0; times <= 9; times++)
	{
		for (num = 0; num <= 9; num++)
		{
			if (times * num == 0 && num != 9)
			{
				_putchar(((times * num) / 10) + '0');
				_putchar(',');
				_putchar(' ');
			}
			else if ((times * num == 0 && num == 9) || (times * num == 9))
			{
				_putchar(' ');
				_putchar(((times * num) % 10) + '0');
			}
			else if (times * num < 10)
			{
				_putchar(((times * num) % 10) + '0');
				_putchar(',');
				_putchar(' ');
			}
			else if (num != 9)
			{
				_putchar(((times * num) / 10) + '0');
				_putchar(((times * num) % 10) + '0');
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar(((times * num) / 10) + '0');
				_putchar(((times * num) % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
