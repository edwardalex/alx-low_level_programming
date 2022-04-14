#include "variadic_functions.h"
/**
 * _strlen - this function return the legth of a string
 *
 * @s: value
 *
 * Return: value
 */
int _strlen(const char *s)
{
	char n = 'a';
	int i = 0;

	while (n != '\0')
	{
		n = s[i];
		i++;
	}
	return (i - 1);
}
/**
 * print_all - this function print all
 * @format: list of types of arguments passed
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	char *string;
	int j = 0, x = 0;

	va_start(ap, format);
	while (j < _strlen(format) && format[j])
	{
		x = 0;
		switch (format[j])
		{
			case 'c':
				printf("%c", va_arg(ap, int));
				break;
			case 'i':
				printf("%d", va_arg(ap, int));
				break;
			case 'f':
				printf("%f", va_arg(ap, double));
				break;
			case 's':
				string = va_arg(ap, char *);
				if (string == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", string);
				break;
			default:
				x = 1;
		}
		if (j != (_strlen(format) - 1) && x == 0)
			printf(", ");
		j++;
	}
	va_end(ap);
	printf("\n");
}
