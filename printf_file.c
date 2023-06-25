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
	int count = 0;

	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
				case 'c':
					count += _putchar(va_arg(args, int));
					break;
				case 's':
					count += _pstr(va_arg(args, char *));
					break;
				case '%':
					count += _putchar('%');
					break;
				default:
					count += _putchar('%') + _putchar(*format);
					break;
			}
		}
		else
		{
			count += _putchar(*format);
		}
		format++;
	}
	va_end(args);
	return (count);
}

/**
 *	_pstr - Print a string
 *	@str: String
 *
 *	Return: No of char
 */
int _pstr(char *str)
{
	int count = 0;

	if (str)
	{
		while (*str)
		{
			count += _putchar(*str);
			str++;
		}
	}

	return (count);
}
