#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_file - check the code
 *
 * @filename: Create a function that creates a file
 * @text_content: Create a function that creates a file
 *
 * Return: Always 0.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int len;
	int written;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		while (text_content[len])
		{
			len++;
		}
	}

	written = write(fd, text_content, len);
	if (written == -1 || written != len)
	{
		close(fd);
		return (-1);
	}


	close(fd);
	return (1);
}

