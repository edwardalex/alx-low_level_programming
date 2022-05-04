#include "main.h"
/**
 * closeFd - this function close file descriptors
 * @fd: file descriptor to close
 */
void closeFd(int fd)
{
	int i;
i = close(fd);
	if (i < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", i);
		exit(100);
	}
}
/**
 * main - copy file
 * @argc: number of arguments
 * @argv: arguments given
 * Return: 0 if success and -1 if fails
 */
int main(int argc, char *argv[])
{
	int oRet2 = 0, oRet = 0, rRet = 1, wRet = 0;
	char *text;

	if (argc != 3)
	{
		write(STDERR_FILENO, "Usage: cp file_from file_to\n", 28);
		exit(97);
	}
	oRet = open(argv[1], O_RDONLY); /*open first file*/
	if (oRet == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	
	oRet2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (oRet2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	text = malloc(sizeof(char) * 1024); /*set buffer*/
	if (text == NULL)
		return(0);
	while (rRet > 0)
	{
		rRet = read(oRet, text, 1024); /*read first file*/
		if (rRet == -1)
		{
			closeFd(oRet);
			closeFd(oRet2);
			free(text);
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(99);
		}
		wRet = write(oRet2, text, rRet); /*write on the second file*/
		if (wRet == -1)
		{
			closeFd(oRet);
			closeFd(oRet2);
			free(text);
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	closeFd(oRet);
	closeFd(oRet2);
	free(text);
	return (0);
}
