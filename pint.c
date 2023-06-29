#include "main.h"

/**
 *	_pInt - Print an integer
 *	@n: int
 *
 *	Return: No of int
 */
int _pInt(int n)
{
	unsigned int div;
	int i = 0;

	if (n < 0)
	{
		i += _putchar('-');
		div = -n;
	}
	else
	{
		div = n;
	}

	if (div / 10)
		i += _pInt(div / 10);

	i += _putchar((div % 10) + '0');
	return (i);
}
