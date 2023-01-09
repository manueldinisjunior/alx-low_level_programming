#include "main.h"
#include <stdlib.h>

/**
 * create_array - crates and array
 * @size: size of array
 * @c: character
 * Return: Null or array
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size > 0)
	{
		p = malloc(sizeof(char) * size);
		if (p == NULL)
			return (NULL);
	}
	else
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
		p[i] = c;
	return (p);
}
