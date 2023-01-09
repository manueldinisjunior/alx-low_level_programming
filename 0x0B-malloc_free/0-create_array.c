#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * *create_array - function that create an array of chars,
 * @size: size of the array to be created.
 * @c: content of the array.
 *
 * Return: NULL if size is 0 or if it fails;
 * otherwise, a pointer to the array.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *p;

	if (size == 0)
		return (NULL);
	p = malloc(size * sizeof(char));

	if (p != NULL)
	{
		while (i < size)
		{
			p[i] = c;
			i++;
		}
		p[i] = '\n';
	}
	return (p);
}
