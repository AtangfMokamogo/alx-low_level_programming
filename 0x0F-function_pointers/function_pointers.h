#ifndef function_pointers
#define function_pointers
#include <stddef.h>

/*
 * Desc: Header file containing prototypes for all functions
 *       used in the 0x0E-function_pointers di         rectory.
 */
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));


#endif
