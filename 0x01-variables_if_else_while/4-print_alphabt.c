#include <stdio.h>

/**
 * main - print the main function
 * Return:if 0 exit properly, non-zero otherrwise
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}

