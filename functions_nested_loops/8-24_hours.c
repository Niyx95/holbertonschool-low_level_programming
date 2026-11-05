#include "main.h"
/**
 * jack_bauer - prints every minute of the day
 *
 *
 * Return: always 0 (Success)
 */
void jack_bauer(void)
{
	int minutes;

	int hours;

	for (hours = 0; hours <= 23; hours++)
	{
		for (minutes = 00; minutes <= 59; minutes++)
		{
			_putchar((hours / 10) + '0');
			_putchar((hours % 10) + '0');
			_putchar(':');
			_putchar((minutes / 10) + '0');
			_putchar((minutes % 10) + '0');
			_putchar('\n');
		}
	}
}
