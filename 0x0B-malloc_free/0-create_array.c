<<<<<<< HEAD
#include "main.h"
#include <stdlib.h>

/**
 *  * create_array - Creates an array of chars and
 *   *                initializes it with a specific char.
 *    * @size: The size of the array to be initialized.
 *     * @c: The specific char to intialize the array with.
 *      *
 *       * Return: If size == 0 or the function fails - NULL.
 *        *         Otherwise - a pointer to the array.
 *         */
char *create_array(unsigned int size, char c)
{
		char *array;
			unsigned int index;

				if (size == 0)
							return (NULL);

					array = malloc(sizeof(char) * size);

						if (array == NULL)
									return (NULL);

							for (index = 0; index < size; index++)
										array[index] = c;

								return (array);
}
=======
#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
void simple_print_buffer(char *buffer, unsigned int size)
{
    unsigned int i;

    i = 0;
    while (i < size)
    {
        if (i % 10)
        {
            printf(" ");
        }
        if (!(i % 10) && i)
        {
            printf("\n");
        }
        printf("0x%02x", buffer[i]);
        i++;
    }
    printf("\n");
}

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char *buffer;

    buffer = create_array(98, 'H');
    if  (buffer == NULL)
    {
        printf("failed to allocate memory\n");
        return (1);
    }
    simple_print_buffer(buffer, 98);
    free(buffer);
    return (0);
}
>>>>>>> acec67610ff376ddd0cd1dbc5cf58907faccb4b9
