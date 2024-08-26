#include "shell.h"

/**
 **_strncpy - function copies a string.
 *@dest: the destination string to be copied to.
 *@src: the source string.
 *@n: the amount of characters to be copied.
 *Return: the concatenated string.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, j;
	char *s = dest;

	for (i = 0; src[i] != '\0' && i < n - 1; i++)
	{
		dest[i] = src[i];
	}
	if (i < n)
	{
		for (j = i; j < n; j++)
		{
			dest[j] = '\0';
		}
	}
	return (s);
}

/**
 **_strncat - function that concatenates two strings.
 *@dest: the first string.
 *@src: the second string.
 *@n: the amount of bytes to be maximally used.
 *Return: returns the concatenated string.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;
	char *s = dest;

	j = 0;
	for (i = 0; dest[i] != '\0'; i++)
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	if (j < n)
		dest[i] = '\0';
	return (s);
}

/**
 **_strchr - function to locate a character in a string.
 *@s: the string to be parsed.
 *@c: the character to look for.
 *Return: (s) a pointer to the memory area s.
 */
char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
			return (s);
	} while (*s++ != '\0');

	return (NULL);
}
