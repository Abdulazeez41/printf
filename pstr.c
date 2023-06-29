#include "main.h"

/**
 *	_pStr - Print a string
 *	@str: String
 *
 *	Return: No of char
 */
int _pStr(char *str)
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

