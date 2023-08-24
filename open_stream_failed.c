#include "monty.h"

/**
 * open_stream_failed - Handler for failing to open strean
 * @fileName: path to monty file
 */
void open_stream_failed(char *fileName)
{
	fprintf(stderr, "Error: Can't open file %s\n", fileName);
	free_arg();
	exit(EXIT_FAILURE);
}
