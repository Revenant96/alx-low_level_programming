#include "main.h"

#define USAGE "Usage: cp file_from file_to\n"
#define ERR_NOREAD "Error: Can't read from file%s\n"
#define ERR_NOWRITE "Error: Can't write to %s\n"
#define ERR_NOCLOSE "Error: Can't close fd %d\n"
#define PERMISSIONS (0664)

/**
 * main - code that copies the content of a file to another file.
 * @c: arg count
 * @v: arg vector
 * Return: 1 on success 0 on failure
 */

int main(int c, char **v)
{
	int from = 0, to = 0;
	ssize_t b;
	char buf[READ_BUF_SIZE];

	if (c != 3){
		dprintf(STDERR_FILENO, USAGE);
		exit(97);}

	from = open(v[1], O_RDONLY);
	if (from == -1){
		dprintf(STDERR_FILENO, ERR_NOREAD, v[1]); exit(98);}
	to = open(v[2], O_WRONLY | O_CREAT | O_TRUNC, PERMISSIONS);
	if (to == -1){
		dprintf(STDERR_FILENO, ERR_NOWRITE, v[2]); exit(99);}

	while ((b = read(from, buf, READ_BUF_SIZE)) > 0)
	{
		if (write(to, buf, b) != b)
		{dprintf(STDERR_FILENO, ERR_NOWRITE, v[2]); exit(99);}
	}

	if (b == -1){
		dprintf(STDERR_FILENO, ERR_NOREAD, v[1]); exit(98);}

	from = close(from);
	to = close(to);

	if (from){
		dprintf(STDERR_FILENO, ERR_NOCLOSE, from); exit(100);}
	if (to){
		dprintf(STDERR_FILENO, ERR_NOCLOSE, from); exit(100);}

	return (EXIT_SUCCESS);
}
