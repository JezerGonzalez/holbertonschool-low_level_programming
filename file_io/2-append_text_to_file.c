#include "main.h"
/**
 *append_text_to_file - function that appends text at the end of file
 *@filename: name of file
 *@text_content: conent of the text
 * Return:1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int existing_file, len, new_text;

	if (filename == NULL)
		return (-1);
	existing_file = open(filename, O_WRONLY | O_APPEND);
	if (existing_file == -1)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len] != '\0'; len++)
			;
		new_text = write(existing_file, text_content, len);
		if (new_text == -1)
			return (-1);
	}
	close(existing_file);
	return (1);
}
