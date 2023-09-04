#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenate two strings
 * @s1: The first input string
 * @s2: The second input string
 *
 * Return: A newly allocated string containing the concatenation of s1 and s2,
 *         or NULL if it fails.
 */
char *str_concat(char *s1, char *s2)
{
	char *concatenated;
	int i = 0, j = 0, len1 = 0, len2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	concatenated = malloc(sizeof(char) * (len1 + len2 + 1));

	if (concatenated == NULL)
		return (NULL);

	while (s1[i] != '\0')
	{
		concatenated[i] = s1[i];
		i++;
	}

	while (s2[j] != '\0')
	{
		concatenated[i + j] = s2[j];
		j++;
	}

	concatenated[i + j] = '\0';
	return (concatenated);
}
