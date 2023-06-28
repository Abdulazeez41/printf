#include "main.h"

/**
 *	_pstr - Print a string
 *	@str: String
 *
 *	Return: No of char
 */
int _pstr(char *str)
{
	int i;

	if (str)
	{
		for (; *str; str++)
		{
			i += _putchar(*str);
		}
	}
	return (i);
}

