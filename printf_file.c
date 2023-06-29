#include "main.h"

/**
 *	_printf - Print few format specifiers
 *
 *	@format: va_arg arguments
 *	Return: 0
 */
int _printf(const char *format, ...)
{
	va_list args;
	int j = 0;

	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			j += _converter(args, *format);
		}
		else
		{
			j += _putchar(*format);
		}
		format++;
	}
	va_end(args);
	return (j);
}

/**
 *	_converter - convert specifiers
 *	@args: va_list
 *	@c: character input
 *
 *	Return: No of character
 */
int _converter(va_list args, char c)
{
	int i = 0;

	switch (c)
	{
		case 'c':
			i += _putchar(va_arg(args, int));
			break;
		case 's':
			i += _pStr(va_arg(args, char *));
			break;
		case 'd':
		case 'i':
			i += _pInt(va_arg(args, int));
			break;
		case 'u':
			i += _pUnsigned(va_arg(args, unsigned int));
			break;
		case 'o':
		case 'x':
		case 'X':
			i += _pHex(va_arg(args, unsigned int));
			break;
		case '%':
			i += _putchar('%');
			break;
		default:
			i += _putchar('%') + _putchar(c);
			break;
	}
	return (i);
}
