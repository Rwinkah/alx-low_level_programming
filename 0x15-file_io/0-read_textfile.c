#include "main.h"


/**
 * read_textfile - read a text and file and print to standard output
 *
 * @filename: name of the file
 * @letters: number of chracters to read and print
 *
 * Return: ssize_t
 **/


ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	size_t ans;
	int fd = open(filename, O_CREAT, O_RDONLY);

	buf = malloc(letters);

	if (fd < 0)
	{
		return (0);
	}
	read(3, buf, letters);
	buf[letters] = '\0';

	ans = write(STDOUT_FILENO, buf, letters);
	if (ans != letters)
	{
		return (0);
	}

	return (ans);
}

