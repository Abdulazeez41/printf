#include "main.h"

/**
 *	_pUnsigned - Print an unsigned integer
 *	@n: unsigned int
 *
 *	Return: No of char printed
 */
int _pUnsigned(unsigned int n)
{
	unsigned int j = n;
	int i = 0;

	if (j / 10)
		i += _pUnsigned(n / 10);

	i += _putchar('0' + (j % 10));
	return (j);
}
