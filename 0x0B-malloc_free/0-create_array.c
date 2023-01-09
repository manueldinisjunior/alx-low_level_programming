#include <stdlib.h>

/**
 * create_array - create an array of chart and initialize
 * it with a specificc char.
 * @size: array size
 * @c: char to initialize arrray with
 * Return:NULL if 0
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *a;

	if (size == 0)
		return (NULL);

	a = malloc(size * sizeof(char));

	if (a == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		a[i] = c;

	return (a);
}
