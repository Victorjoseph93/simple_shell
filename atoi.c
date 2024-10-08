#include "shell.h"

/**
 * interactive - function returns true if shell is interactive mode
 * @info: address of struct
 *
 * Return: returns 1 if interactive mode, 0 if not
 */
int interactive(info_t *info)
{
	return (isatty(STDIN_FILENO) && info->readfd <= 2);
}

/**
 * is_delim - function would check if character is a delimeter
 * @c: the char to check
 * @delim: the delimeter string
 * Return: returns 1 if true, 0 if false
 */
int is_delim(char c, char *delim)
{
	while (*delim)
		if (*delim++ == c)
			return (1);
	return (0);
}

/**
 *_isalpha - function checks for alphabetic character
 *@c: The character to input
 *Return: returns 1 if c is alphabetic, 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

/**
 *_atoi - function will convert a string to an integer
 *@s: the string to be converted
 *Return: returns 0 if no numbers in string, converted number otherwise
 */

int _atoi(char *s)
{
	int k, sign = 1, flag = 0, output;
	unsigned int result = 0;


	for (k = 0;  s[k] != '\0' && flag != 2; k++)
	{
		if (s[k] == '-')
			sign *= -1;

		if (s[k] >= '0' && s[k] <= '9')
		{
			flag = 1;
			result *= 10;
			result += (s[k] - '0');
		}
		else if (flag == 1)
			flag = 2;
	}

	if (sign == -1)
		output = -result;
	else
		output = result;

	return (output);
}
