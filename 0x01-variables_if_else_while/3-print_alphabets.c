#include <string.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
		putchar(alphabet[i]);

	for (i = 0; i < 26; i++)
		putchar(toupper(alphabet[i]));

	return (0);
}
