#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: Input string
 * Return: String in reverse
 */
<<<<<<< HEAD

=======
>>>>>>> e8b4987485af40e1747d8d9a0f7cc59c63431e78
void rev_string(char *s)
{
	char rev = s[0];
	int counter = 0;
	int i;
<<<<<<< HEAD

	while (s[counter] != '\0')
	counter++;
=======
	while (s[counter] != '\0')
		counter++;
>>>>>>> e8b4987485af40e1747d8d9a0f7cc59c63431e78
	for (i = 0; i < counter; i++)
	{
		counter--;
		rev = s[i];
		s[i] = s[counter];
		s[counter] = rev;
	}
}
