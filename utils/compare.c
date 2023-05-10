#include "main.h"

/**
 * compare - function that compares two strings
 * @varname: is a char
 * @dirname: is a char
 * Return: 1
 */

int compare(char *varname, char *dirname)
{
	int i;

	for (i = 0; dirname[i] != '\0'; i++)
	{
		if (dirname[i] != varname[i])
			return (0);
	}
	return (1);
}
