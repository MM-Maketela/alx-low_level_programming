#include "main.h"
/**
 * jack_bauer - entry point
 * Description: prints every minute form  00 - 01.
 * Return: void.
 */
void jack_bauer(void)
{
	int hour1;
	int hour2;
	int minite1;
	int minite2;


	for (hour1 = 0; hour1 < 3; hour1++)
	{
		int n;

		n = 10;

		if (hour1 > 1)
			n = 4;

		for (hour2 = 0; hour2 < n; hour2++)
		{
			for (minite1 = 0; minite1 < 6; minite1++)
			{
				for (minite2 = 0; minite2 < 10; minite2++)
				{
					_putchar('0' + hour1);
					_putchar('0' + hour2);
					_putchar(':');
					_putchar('0' + minite1);
					_putchar('0' + minite2);
					_putchar('\n');
				}
			}
		}
	}
}
