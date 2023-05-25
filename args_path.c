#include "main.h"

/**
 * args_path - concatenates the arguments
 * @parse: is a char
 * @new: is a char
 * Return: total or null
 */

char *args_path(char **parse, char **new)
{
	char *total, **cat;
	int i, j, k;
	struct stat status;

	for (i = 0; new[i]; i++)
	{
		total = (char *)malloc(60);
		strcat(total, new[i]);
		strcat(total, "/");
		strcat(total, parse[0]);

		if (stat(total, &status) == 0)
		{
			for (k = 0; parse[k] != NULL && *parse[k] != '\0'; k++)
				;
			cat = (char **)malloc(sizeof(char *) * (k + 1));
			cat[k] = NULL;
			cat[0] = strdup(total);

			for (j = 1; parse[j]; j++)
				cat[j] = strdup(parse[j]);
			execute(cat);
			return (total);
		}
		free(total);
	}
	return (NULL);
}
