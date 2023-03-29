#include "main.h"
<<<<<<< HEAD

=======
>>>>>>> e8b4987485af40e1747d8d9a0f7cc59c63431e78
/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int i, d, n, len, f, digit;
<<<<<<< HEAD

=======
>>>>>>> e8b4987485af40e1747d8d9a0f7cc59c63431e78
	i = 0;
	d = 0;
	n = 0;
	len = 0;
	f = 0;
	digit = 0;
<<<<<<< HEAD

	while (s[len] != '\0')
		len++;

=======
	while (s[len] != '\0')
		len++;
>>>>>>> e8b4987485af40e1747d8d9a0f7cc59c63431e78
	while (i < len && f == 0)
	{
		if (s[i] == '-')
			++d;
<<<<<<< HEAD

=======
>>>>>>> e8b4987485af40e1747d8d9a0f7cc59c63431e78
		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (d % 2)
				digit = -digit;
			n = n * 10 + digit;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}
<<<<<<< HEAD

	if (f == 0)
		return (0);

=======
	if (f == 0)
		return (0);
>>>>>>> e8b4987485af40e1747d8d9a0f7cc59c63431e78
	return (n);
}
