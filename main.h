#ifndef PRINTF_TASKS
#define PRINTF_TASKS

/** Include the libraries for this operation **/
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <stdio.h>
#include <unistd.h>

/** Define the placeholders **/
#define PLACEHOLDERS { \
	{"c", _print_ch}, \
	{"s", _print_str}, \
	{"d", _print_dec}, \
	{"i", _print_int}, \
	{"o", _print_oct}, \
	{"u", _print_unsign}, \
	{NULL, NULL} \
}

/**
 * struct ch_fun - This struct holds the function specifiers
 * @type: This is an agrument represent the fixed specifiers
 * @fun: This is an argument represent the function allocated to
 * the specifiers
 */
struct ch_fun
{
	char *type;
	int (*fun)(va_list);
};

/**
 * _print - This is a variable name declearing the struct ch_fun
 */
typedef struct ch_fun _print;

/** Prototypes **/
int _printf(const char *format, ...);
/* static int (*is_specifier(const char *f))(va_list); */
int _putchar(char c);
int _print_ch(va_list ch);
int _print_str(va_list str);
int _print_dec(va_list dec);
int _print_int(va_list argi);
int _print_oct(va_list oct);
int _print_unsign(va_list unsignInt);
#endif
