#include "main.h"

/**
 *	_pHex - Print a hexadecimal number
 *	@n: unsigned int
 *
 *	Return: No of char print
 */
int _pHex(unsigned int n)
{
	unsigned int j = n;
	int i = 0;
	char hex_digits[] = "0123456789abcdef";

	if (j / 16)
		i += _pHex(j / 16);

	i += _putchar(hex_digits[j % 16]);

	return (i);
}
