#include "variadic_functions.h"
/**
 * print_all - does the printf function
 * @format: argument specifier
 * Return: any given argument based on format specifier
 */
void print_all(const char * const format, ...)
{
	int i, check_stat; /* declare variables and va_arg datatype */
	char *str;
	va_list spc;

	va_start(spc, format); /* initialize var arguments */
	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'i':
				printf("%d", va_arg(spc, int));
				check_stat = 0;
				break;
			case 'f':
				printf("%f", va_arg(spc, double));
				check_stat = 0;
				break;
			case 'c':
				printf("%c", va_arg(spc, int));
				check_stat = 0;
				break;
			case 's':
				str = va_arg(spc, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				check_stat = 0;
				break;
			default:
				check_stat = 1;
				break;
		}
		if (format[i + 1] != '\0' && check_stat == 0) /* if not NULL */
			printf(", ");
		i++; /* update step of iterating value */
	}
	printf("\n");
	va_end(spc); /* end traversal */
}
