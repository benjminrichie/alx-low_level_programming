#include "main.h"

/**
 * append_text_to_file - This prog is expected to
 * simply append text at the end of a file
 * @text_content: This is just a pointer to the content
 * @filename: This is just a pointer to the name of the file
 * Return: 1(SUCCESS), else -1(FAILURE)
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int The_letters;
	int rwr;
	int Bens_fd;

	if (!filename)
	{
		return (-1);
	}
	Bens_fd = open(filename, O_WRONLY | O_APPEND);

	if (Bens_fd == -1)
	{
		return (-1);
	}

	if (text_content)
	{
		for (The_letters = 0; text_content[The_letters]; The_letters++)
			;

		rwr = write(Bens_fd, text_content, The_letters);

		if (rwr == -1)
		{
			return (-1);
		}
	}
	close(Bens_fd);

	return (1);
}
