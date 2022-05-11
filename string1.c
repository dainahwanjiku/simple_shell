#include "shell.h"

unsigned int _strspn(char *s, char *accept);
int _strcmp(char *s1, char *s2);
char *_strchr(char *s, char c);

/**
 *_strspn - gets length of a prefix substring
 *@s: string to check
 *@accept: string to check against
 *
 *Return: number of bytes of s in accept
 */
int _strspn(char *s, char *accept)
{
	unsigned int i, j;
	/* blank line */
	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		if (!accept[j])
			break;
	}
	return (i);
}

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: outputs the difference of s1 and s2
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	/* blank line */
	while (*(s1 + i) && *(s2 + i) && (*(s1 + i) == *(s2 + i)))
		i++;
	return (*(s1 + i) - *(s2 + i));
}

/**
 * _strchr - locates a character in a string
 * @s: string to check
 * @c: character to check for
 * Return: pointer to spot in s with c or null
*/
char *_strchr(char *s, char c)
{
	int i;
	/*blank line */
	for (i = 0; *(s + i); i++)
	{
		/* blank line */
		if (*(s + i) == c)
			return (s + i);
	}
	if (*(s + i) == c)
		return (s + i);
		return (0);
}
