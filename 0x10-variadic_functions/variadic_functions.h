#ifndef VARIADIC_FUNCTION
#define VARIADIC_FUNCTION

#include <stdarg.h>

/**
 * struct token - Struct Token
 * @token: format token
 * @f: the callback function
*/

typedef struct printType {
	char *type;
	void (*f)(char *, va_list);
}printType_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
