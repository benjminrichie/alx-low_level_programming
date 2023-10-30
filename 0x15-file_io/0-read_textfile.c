#include "main.h"

/**
 * read_textfile -This func will simply just read a text file
 * then print it to POSIX stdout
 * @letters: This represents the number of printed letters
 * @filename: This is just a pointer
 * Return: 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int Bens_fd;
	char *Bens_buff;
	ssize_t nrd, nwr;

	if (!filename)
	{
		return (0);
	}
	Bens_fd = open(filename, O_RDONLY);

	if (Bens_fd == -1)
	{
		return (0);
	}
	Bens_buff = malloc(sizeof(char) * letters);
	if (Bens_buff == NULL)
	{
		return (0);
	}

	nrd = read(Bens_fd, Bens_buff, letters);
	nwr = write(STDOUT_FILENO, Bens_buff, nrd);

	close(Bens_fd);
	free(Bens_buff);

	return (nwr);
}
