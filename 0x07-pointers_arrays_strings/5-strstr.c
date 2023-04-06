#include "main.h"

/**
 * *_strstr - function declaration
 * @haystack: the string to be searched
 * @needle: the substring
 * Return: string or NULL
 */

char *_strstr(char *haystack, char *needle);

/**
 * *_strstr - function definition
 * @haystack: that string that will be searched
 * @needle: the substring to search for
 * Description: search for needle in haystack
 * Return: string or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int a;
	int b;

	if (needle[0] == '\0')
	{
		return (haystack);
	}

	for (a = 0; haystack[a] != '\0'; a++)
	{
		if (haystack[a] == needle[0])
		{
			for (b = 0; needle[b] != '\0'; b++)
			{
				if (haystack[a + b] != needle[b])
				{
					break;
				}
			}
			if (needle[b] == '\0')
			{
				return (haystack + a);
			}
		}
	}
	return ('\0');
}
