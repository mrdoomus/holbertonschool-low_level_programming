#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: any variable type
 * Return: Nothing
**/

void print_all(const char * const format, ...)
{
unsigned int i = 0;
char *str;
va_list ls;
va_start(ls, format);

while (format == NULL)
	return;

while (format[i])
{
	int spot = 0;

	switch (format[i])
	{
		case 'c':
			printf("%c", va_arg(ls, int));
			break;
		case 'i':
			printf("%i", va_arg(ls, int));
			break;
		case 'f':
			printf("%f", va_arg(ls, double));
			break;
		case 's':
			str = va_arg(ls, char *);
			if (str == NULL)
				str = "(nil)";

			printf("%s", str);
			break;
		default:
			spot = 1;
			break;
	}
if (spot == 0 && (i != strlen(format) - 1))
	printf(", ");

i++;
}
printf("\n");
va_end(ls);
return;
}
