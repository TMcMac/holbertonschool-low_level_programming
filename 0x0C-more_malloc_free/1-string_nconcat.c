#include <stdlib.h>
#include "holberton.h"

int _strlen(char *s);
/**
 * string_nconcat - a function to concatonate a string with n bytes
 * of a second string and return a pointer to the concatonation.
 * @s1: a first string
 * @s2: a second string to be concatonated with s1
 * @n: an int to set number of byte copied from s2
 * Return: a pointer to the concatonated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int j = 0;
	unsigned int i = 0;
	char *concat;
	unsigned int len;
	unsigned int s2len;

/*Treat null value strings as empty string,*/
/*check if n > s2len for nbytes, set total len*/
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	s2len = _strlen(s2);
	if (s2len > n)
		s2len = n;
	len = (_strlen(s1) + (s2len + 1));
/* use malloc to pull space for concat and check for failure */
	concat = malloc(sizeof(char) * len);
	if (concat == NULL)
	{
		return (NULL);
	}
/*Fill concat with data from s1 and nbytes or total s2,*/
/*append null byte and return*/
	for (i = 0; s1[i] != '\0'; i++, j++)
		concat[j] = s1[i];

	for (i = 0; i < s2len; i++, j++)
		concat[j] = s2[i];
	concat[j] = '\0';
	return (concat);
}

/**
 * _strlen - a function to return the length of a string
 *
 * @s: a char pointer passed from main
 *
 * Return: returns an int for the length of s
 */


int _strlen(char *s)
{
	unsigned int len;

	for (len = 0; s[len] != '\0'; len++)
		continue;

	return (len);
}
