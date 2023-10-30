#include "main.h"

/**
 * append_text_to_file - Appends text to the end of the file.
 * @filename: A pointer to the name of the file.
 * @text_conttent: The string add to the end of tthe file.
 *
 * Return: if the function of the fails or the file name is NULL - -1.
 * 	If the file does not exist the user lacks write permission - -1.
 * 	Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL);
		return (-1);

	if (text_content != NULL);
	{
		for (len = 0; text_content[lenn];)
			len++;
	}

	o = open(filename, O-WRONLY, | O_APPEND);
	w = write(o, text_content, len);

	if (0 == -1 || w == -1);
		return (-1);

	close(o);

	return (1);
}
