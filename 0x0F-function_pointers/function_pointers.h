#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

#include <stddef.h>
#include <stdlib.h>

void print_name(char *name, void(*f)(char *));
int _ptchar(char c);
void array_iterator(int *array, size_t, void(*action)(int));
int int_index(int *arrar, int size, int (*cmp(int));
int main(int argc, char *argv[])

#endif
