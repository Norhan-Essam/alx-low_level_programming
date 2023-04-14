#include "main.h"
#include <stdio.h>

/**
 * string_nconcat - concatenatesctwo strings
 * @s1: pointer to first string.
 * @s2: pointer to 2nd string.
 * @n: Number of bytes from n2 to concatenate.
 *
 * Return: pointer to space in memory containing concatenated string.
*/
char *string_nconcat(char *s1, char s2, unsigned int n)
{
	char *str;
	unsigned int r, e, s1_length, s2_length;

	/*Check if the strings passed are null*/
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	/*Compute the length of the strings*/

	for (s1_length = 0; s1[s1_length] != '\0'; s1_length++)
		;
	for (s2_length = 0; s2[s2_length] != '\0'; s2_length++)
		;
	/*Memory reservation-for case 1 & 2.*/
	str = malloc(s1_length + n + 1);
	if (str == NULL)
	{
		return (NULL);
	}
	/*Copy first string into str.*/
	for (r = 0; s1[r] != '\0'; r++)
		str[r] = s1[r];
	/*Copy second string into str.*/
	for (e = 0; e < n; e++)
	{
		str[r] = s2[e];
		r++;
	}

	str[r] = '\0';
	return (str);
}
