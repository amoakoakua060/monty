#include "monty.h"

/**
 * close_stream - closes stream to monty file
 */
void close_stream(void)
{
	if (!arg->stream)
		return;

	fclose(arg->stream);
	arg->stream = NULL;
}
