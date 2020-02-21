 #include "holberton.h"

/**
 * rot13 - is a function to replace letters with
 * a character 13 places further.
 *
 * @str: a string passed from main.
 *
 * Return: return the string from main but
 * translated to leet speak.
 */

char *rot13(char *str)
{
	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int count1 = 0;
	int count2 = 0;

	while (str[count1] != '\0')
	{
		for (count2 = 0; count2 < 52; count2++)
		{
			if (str[count1] == alpha[count2])
			{
				str[count1] = rot13[count2];
				break;
			}
		}
		count1++;
	}
	return (str);
}
