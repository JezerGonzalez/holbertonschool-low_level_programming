#include "main.h"
/**
 * create_file - function that creates a file
 * with the read and write permissions
 * @filename: name of the file
 * @text_content: content of the file
 * Return: 1 if successful or -1 if failure
 */
int create_file(const char *filename, char *text_content)
{
	int new_file, i;

	if (filename == NULL)
		return (-1);
	for (i = 0; text_content[i] != '\0'; i++)
		;
	new_file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (new_file == -1)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	write(new_file, text_content, i);
	close(new_file);
	return (1);
}
