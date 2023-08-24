#include "monty.h"

/**
 * open_stream - opens a readonly stream to the monty file
 * @filename: path to monty file
 */
void open_stream(char *filename)
{
	int fd;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		open_stream_failed(filename);

	arg->stream = fdopen(fd, "r");
	if (arg->stream)
		return;

	close(fd);
	open_stream_failed(filename);
}
