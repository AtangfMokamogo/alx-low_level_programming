#ifndef main_h
#define main_h

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

/*prototypes to specifier handler functions*/
int _string(va_list);
int _char(va_list);

/*our custom printf function*/
int _printf(const char *format, ...);


/*_putchar function will print to stdout*/
int _putchar(char);


/*format_handler.c*/
int handler(const char *, va_list);
int mod_handler(const char *, va_list);


/**
  * struct format -typedef struct
  *
  * @type: format
  * @p_fun: ponter to function associated with @format
  */
typedef struct format
{
	char d_type;
	int (*p_fun)(va_list);
} f_specifier;


/*utility functions*/
int _strlen(const char *);
int print(char *);

#endif
