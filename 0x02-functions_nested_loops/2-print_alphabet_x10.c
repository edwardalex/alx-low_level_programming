#include <unistd.h>
/**
 * print_alphabet_x10 - this program prints alphabet in ten lines
 *
 * Return: 0
 */

/*void print_alphabet_x10(void)*/
void print_alphabet_x10(void)
{
	char alfa = 'a';
	int n = 1;

	while (n <= 10)
	{
		while (alfa <= 'z')
		{
			write(1, &alfa, 1);
			alfa++;
		}
		write(1, "\n", 1);
		n++;
		alfa = 'a';
	}
}
