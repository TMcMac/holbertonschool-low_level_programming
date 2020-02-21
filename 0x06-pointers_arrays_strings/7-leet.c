#include "holberton.h"

/**
 * leet - is a function to replace letters with
 * numbers for 1337 speak.
 *
 * @str: a string passed from main.
 *
 * Return: return the string from main but
 * translated to leet speak.
 */

char *leet(char *str)
{
	int count1 = 0;
	int count2 = 0;
	char alpha[5] = "AEOTL";
	char num[5] = {'4', '3', '0', '7', '1'};

	while (str[count1] != '\0')
	{
		for (count2 = 0; count2 < 5; count2++)
			if (str[count1] == alpha[count2] || str[count1] == (alpha[count2] + 32))
				str[count1] = num[count2];
		count1++;
	}

	return (str);
}
