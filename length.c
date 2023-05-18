#include "main.h"

/**
 * length - function that checks the number of characters
 * @str: is a char
 * Return: str
 */

char *length(char *str)
{
	int i;

	for (i = 0; str[i] != '='; i++)
		;
	return (str + i + 1);
}
