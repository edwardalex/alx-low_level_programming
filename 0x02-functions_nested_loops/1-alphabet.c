#include <unistd.h>
/**
 * print_alphabet - this program prints alphabet
 *
 * Return: 0
 */

void print_alphabet(void)
{
	char alfa = 'a';

	while (alfa <= 'z')
	{
		write(1, &alfa, 1);
		alfa++;
	}
	write(1, "\n", 1);
}
