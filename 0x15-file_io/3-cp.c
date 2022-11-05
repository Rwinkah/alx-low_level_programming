#include "main.h"

/**
 * main - entry point for program
 *
 * @argc: number of arguments
 * @argv: list of arguments
 *
 * Return: int
 **/


int main(int argc, char *argv[])
{
	int close_from, close_to, read_int = 1024, write_int, file_from, file_to;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	test_condition(argv[1], argv[2]);
	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_APPEND | O_WRONLY | O_TRUNC, 00664);
	while (read_int)
	{
		read_int = read(file_from, buffer, 1024);
		if (read_int == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		write_int = write(file_to, buffer, read_int);
		if (write_int == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	close_from = close(file_from);
	close_to = close(file_to);
	if (close_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	if (close_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}
	return (0);
}


/**
 * test_condition - test for errors
 * @file_from: file to copy from
 * @file_to: file to copy to
 *
 * Return: int
 **/


int test_condition(char *file_from, char *file_to)
{
	int fd;

	fd = open(file_from, O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't read from file %s\n", file_from);
		exit(98);
	}
	if (close(fd) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
	close(fd);

	fd = open(file_to, O_CREAT | O_APPEND | O_WRONLY | O_TRUNC, 00664);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
	if (close(fd) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
	close(fd);
	return (0);
}
