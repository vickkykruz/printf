#include "main.h"
/**
 * is_specifier -  Function that checks if there is a formal
 * specifier in the string
 * @f:  Argument that represent the given charcater index
 *
 * Return:  returns pointer to the function or a NULL as value
 */
static int (*is_specifier(const char *f))(va_list)
{
	unsigned int i;
	_print ch[] = PLACEHOLDERS;

	for (i = 0; ch[i].type != NULL; i++)
	{
		if (*(ch[i].type) == *f)
			break;
	}
	return (ch[i].fun);
}

/**
 * _printf - A function that produces output according to the
 * format given
 * @format: An argument that passes the format string to the function
 *
 * Return: Function returns the number of charcters (including the null
 * byte
 */
int _printf(const char *format, ...)
{
	unsigned int i = 0, ch = 0;
	int (*fs)(va_list);
	va_list args;

	if (format == NULL)
		return (-1);

	va_start(args, format);

	while (format[i])
	{
		/** If  no format specifier was located  in the string **/
		for (; format[i] != '%' && format[i]; i++)
		{
			_putchar(format[i]);
			ch++;
		}
		/* if it is an EMPTY string "" */
		if (!format[i])
			return (ch);
		fs = is_specifier(&format[i + 1]); /* index of D specifier */
		if (fs != NULL)
		{
			ch = ch + fs(args); /* Adding specifier index */
			i += 2; /* Skiping the loop twice */
			continue;
		}
		if (!format[i + 1])
			return (-1);
		_putchar(format[i]);
		ch++;
		/* HANDLE THE % SIGN */
		if (format[i + 1] == '%')
			i += 2;
		else
			i++;
	}
	va_end(args);
	return (ch);
}
