#include "main.h"

/**
 * create_file - create a file
 *
 * @filename: name of the file to create
 * @text_content:  text to write into the file
 *
 * Return: int
 **/


int create_file(const char *filename, char *text_content)
{
	int fd, write_int;

	fd = open(filename, O_RDWR);
	if (!filename)
	{
		return (-1);
	}
	if (fd < 0)
	{
		close(fd);
		fd = open(filename, O_CREAT | O_RDWR, 0600);
		if (fd == -1)
		{
			return (-1);
		}
		if (text_content)
		{
			write_int = write(fd, text_content, _strlen(text_content));
			if (write_int == -1)
				return (-1);
		}
	}
	else
	{
		close(fd);
		fd = open(filename, O_RDWR | O_TRUNC);
		if (fd < 0)
			return (-1);
		if (text_content)
		{
			write_int = write(fd, text_content, _strlen(text_content));
			if (write_int <= 0)
			{
				return (-1);
			}
		}
	}
	return (1);
}



/**
 * _strlen - return length of a null terminated string
 * @str: start of the string
 *
 * Return: int
 **/


int _strlen(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	;
	return (i);
}
