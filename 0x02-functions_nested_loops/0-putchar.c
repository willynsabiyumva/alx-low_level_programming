#include "main.h"
/**
 * main - Print "alx" followed by a new line.
 * Description: You are not allowed to include standard libraries.
 * Return: 0
 */
int main(void)
{
	char School[] = "alx";
	int i = 0;

	while (School[i] != '\0')
	{
		_putchar(School[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
