#include "main.h"

/**
 * *_strpbrk - function declaration
 * @s: string to search
 * @accept: bytes to search
 * Return: pointer or NULL
 */

char *_strpbrk(char *s, char *accept);

/**
 * *_strpbrk - function definition
 * @s: the string to be searched
 * @accept: bytes to search for
 * Description: searches for a string of a set of bytes
 * Return: pointer to matched byte or NULL if no match
 */
char *_strpbrk(char *s, char *accept)
{
	int a;
	int b;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
			{
				return (s + a);
			}
		}
	}
	return (0);
}
