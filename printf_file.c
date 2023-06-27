#include <stdarg.h>
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
	int i = 0;

	va_start(args, format);
	for (; *format; format++)
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
				case 'c':
					i += _putchar(va_arg(args, int));
					break;
				case 's':
					i += _pstr(va_arg(args, char *));
					break;
				case 'd':
				case 'i':
					i += _pint(va_arg(args, int));
					break;
				case '%':
					i += _putchar('%');
					break;
				default:
					i += _putchar('%') + _putchar(*format);
					break;
			}
		}
		else
		{
			i += _putchar(*format);
		}
	}
	va_end(args);
	return (i);
}

/**
 *	_pstr - Print a string
 *	@str: String
 *
 *	Return: No of char
 */
int _pstr(char *str)
{
	int i = 0;

	if (str)
	{
		while (*str)
		{
			i += _putchar(*str);
			str++;
		}
	}

	return (i);
}
