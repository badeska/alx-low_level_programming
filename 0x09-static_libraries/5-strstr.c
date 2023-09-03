#include "main.h"
#include <stddef.h>

/**
 * custom_strstr - Searches a string for a substring
 * @haystack: The string to search in
 * @needle: The substring to search for
 *
 * Return: Pointer to the beginning of the located substring
 *         or NULL if the substring is not found.
 */
char *custom_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *p = needle;

		while (*l == *p && *p != '\0')
		{
			l++;
			p++;
		}

		if (*p == '\0')
			return (haystack);
	}

	return (NULL);
}