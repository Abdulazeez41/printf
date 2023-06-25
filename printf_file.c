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

	va_start(args, format);

	int count = 0;/* To keep track of the number of characters printed*/

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;/* Move past the '%'*/
			switch (*format)/* Check for conversion specifier*/
			{
				case 'c':
					{
						char c = (char)va_arg(args, int);/* Print a single character */

						_putchar(c);
						count++;
						break;
					}
				case 's':
					{
						char *str = va_arg(args, char *);/*Print a string*/

						while (*str != '\0')
						{
							_putchar(*str);
							str++;
							count++;
						}
						break;
					}
				case '%':
					{
						_putchar('%');/* Print a literal '%'*/
						count++;
						break;
					}

				default:
					break;/* Invalid conversion specifier, ignore*/
			}
		}
		else
		{
			_putchar(*format);/* Regular character, print as is*/
			count++;
		}
		format++;  /* Move to the next character in the format string*/
	}
	va_end(args);
	return (count);
}

