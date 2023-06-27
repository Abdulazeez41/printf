#include "main.h"

/**
 *	_pint - Print an integer
 *	@n: int
 *
 *	Return: No of int
 */
int _pint(int n)
{
	int i = 0;
	unsigned int num;

	if (n < 0)
	{
		i += _putchar('-');
		num = -n;
	}
	else 
		num = n;

	if (n / 10)
		i += _pint(n / 10);

	i += _putchar((num % 10) + '0');
	return (i);
}

