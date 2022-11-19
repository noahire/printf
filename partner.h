#ifndef PARTNER_H
#define PARTNER_H

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * struct convert - defines a structure for symbols and functions
 *
 * @sym: The operator
 * @f: The function associated
 */

struct convert
{
	char *sym;
	int (*f)(va_list);
};
typedef struct convert conver_t;

/* Main Functions Prototypes */

int parser(const char *format, conver_t f_list[], va_list arg_list);
int _printf(const char *format, ...);
int _write_char(char);
