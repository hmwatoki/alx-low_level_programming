#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H
/*
 * File: function_pointers.h
 * Auth: hmwatoki
 * Description: Header file containing declarations for all functions
 *       used in 0x0F- function_pointers project
 */
#include <stddef.h>
int _putchar(char c);
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));

#endif /* FUNCTION_POINTERS_H */
