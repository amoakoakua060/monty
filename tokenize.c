#include "monty.h"

/**
 * tokenize - break commands into array of strings
 */
void tokenize(void)
{
	int i = 0;
	char *delims = " \n", *token = NULL, *linecpy = NULL;

	linecpy = malloc(sizeof(char) * (strlen(arg->line) + 1));
	strcpy(linecpy, arg->line);
	arg->n_tokens = 0;
	token = strtok(linecpy, delims);
	while (token)
	{
		arg->n_tokens += 1;
		token = strtok(NULL, delims);
	}

	arg->tokens = malloc(sizeof(char *) * (arg->n_tokens + 1));
	strcpy(linecpy, arg->line);
	token = strtok(linecpy, delims);
	while (token)
	{
		arg->tokens[i] = malloc(sizeof(char) * (strlen(token) + 1));
		if (arg->tokens[i] == NULL)
			malloc_failed();
		strcpy(arg->tokens[i], token);
		token = strtok(NULL, delims);
		i++;
	}
	arg->tokens[i] = NULL;
	free(linecpy);
}
