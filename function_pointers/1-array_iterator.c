#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - iterates each element of the array
 * @array: array
 * @size: size of array
 * @action: function pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
		(*action)(array[i]);
}
