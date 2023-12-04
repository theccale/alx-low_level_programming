#include "main.h"
/*
* read_textfile - reads a text file and prints it to standard output
* @filename: relative or absolute path of the file
* @letters: number of letters to read and print
* Return: total number of chars printed or read.
* if the file can not be opened or read, return 0,
* if filename is NULL return 0,
* if write fails or does not write the expected amount of bytes, return 0
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *to_print;
	ssize_t to_rd, to_wt;
	int file;

	if (filename == NULL)
		return (0);
	to_print = (malloc(sizeof(char) * letters);

			if (to_print == NULL)
			return (0);

			file = open(filename, O_RDONLY);

			if (file < 0)
			{
			free(to_print);
			return (0);
			}

			to_rd = read(file, to_print, letters);

			if (to_rd < 0)

			{
			free(to_print);
			return (0);
			}

			if (to_rd > 0)
			{
			to_wt = write(STDOUT_FILENO, to_print, to_rd);
			}
			if (wt < to_rd)
			{
				free(to_print);
				return (0);
			} 
			to_wt = close(file);
			if (to_wt < 0)
			{
				free(to_print);
				return (0);
			}
			free(to_print);
			return (to_rd);
}



