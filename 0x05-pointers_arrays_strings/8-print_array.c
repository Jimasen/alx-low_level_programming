#include "main.h"

/**
 * print_array - a function that prints n elements of an array
 * @a: array name
 * @n: is the number of elements OF the array to be printed
 * Return: a and n inputs
 */
void print_array(int *a, int n)
{
	int i;
<<<<<<< HEAD

=======
>>>>>>> e8b4987485af40e1747d8d9a0f7cc59c63431e78
	for (i = 0; i < (n - 1); i++)
	{
		printf("%d, ", a[i]);
	}
<<<<<<< HEAD
		if (i == (n - 1))
		{
			printf("%d", a[n - 1]);
		}
			printf("\n");
=======
	if (i == (n - 1))
		{
			printf("%d", a[n - 1]);
		}
		printf("\n");
>>>>>>> e8b4987485af40e1747d8d9a0f7cc59c63431e78
}
