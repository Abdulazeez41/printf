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
	for (; *format != '\0'; format++)
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
				case 'c':
					j += _putchar(va_arg(args, int));
					break;
				case 's':
					j += _pstr(va_arg(args, char *));
					break;
				case 'd':
				case 'i':
					j += _pint(va_arg(args, int));
					break;
				case '%':
					j += _putchar('%');
					break;
				default:
					j += _putchar('%') + _putchar(*format);
					break;
			}
		}
		else
		{
			j += _putchar(*format);
		}
	}
	va_end(args);
	return (j);
}
