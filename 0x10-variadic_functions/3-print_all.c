#include "variadic_functions.h"

/**
 * print_all - prints anythins
 * @format: list of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	va_list ap;
	int i = 0;
	char *str;
	char *sep = "";

	va_start(ap, format);

	if (format != NULL)
	{
		while (format[i] != '\0')
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sep, va_arg(ap, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(ap, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(ap, double));
					break;
				case 's':
					str = va_arg(ap, char *);
					if (str == NULL)
						str = "(nil)";
					printf("%s%s", sep, str);
					break;
				default:
					i++;
					continue;
			}
			sep = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(ap);
}
