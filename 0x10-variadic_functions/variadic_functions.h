#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);


/**
 * struct format - our format for seeing what type of data we have
 * and the function to call for that data type
 * @f: a cahrater pointer to match the data type
 * @ptr: a function pointer to call the right function
 */

typedef struct format
{
	char *f;
	void (*ptr)();
} print;

void print_int(int);
void print_char(char);
void print_float(float);
void print_string(char *);

#endif
