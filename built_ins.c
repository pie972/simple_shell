#include "main.h"

/**
 * builtins - function that implements the exit and printenv builtins
 * @line: the buffer
 * @args: the parsed arguments
 * @env: the environment
 * @ex_st: the exit status
 * Return: void
 */
void builtins(char *line, char **args, char **env, char *ex_st)
{

	if (_strcmp(args[0], "exit") == 0)
	{
		free(args);
		free(line);
		exit(*ex_st);
	}

	if (_strcmp(args[0], "env") == 0)
		_getenv(env, ex_st);
}
