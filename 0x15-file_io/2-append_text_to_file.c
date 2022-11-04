#include "main.h"

/**
 * append_text_to_file - add text to eof
 * @filename: name of the textfile
 * @text_content: content to add to file
 *
 * Return: int
 **/


int append_text_to_file(const char *filename, char *text_content)
{
	int fd, write_int;

	if (!filename)
		return (-1);
	if (!text_content)
		return (1);

	fd = open(filename, O_APPEND | O_RDWR);
	if (fd < 0)
		return (-1);
	write_int = write(fd, text_content, _strlen(text_content));
	if (write_int < 0)
		return (-1);
	return (1);
}



/**
 * _strlen - count number of characters in a string
 * @str: string to count
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


