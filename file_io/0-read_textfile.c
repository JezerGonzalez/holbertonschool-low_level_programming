#include "main.h"
/**
 * read_textfile - opens and reads a text file to print it
 *@filename: file containing the information
 *@letters: size of the file
 *Return: length of the file
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file, len, written;
	char *buffer;

	if (filename == 0 || letters == 0)
		return (0);
	buffer = malloc(sizeof(char *) * letters);
	if (buffer == NULL)
		return (0);
	file = open(filename, O_RDONLY);
	if (file == -1)
	{
		free(buffer);
		return (0);
	}
	len = read(file, buffer, letters);
	if (len == -1)
	{
		free(buffer);
		close(file);
		return (0);
	}
	written = write(STDOUT_FILENO, buffer, letters);
	close(file);
	return (written);
}
