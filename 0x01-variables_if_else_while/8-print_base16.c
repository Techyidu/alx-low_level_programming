#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (success)
*/

int main(void)
{
char C;

int b;

C = 'a';
b = 0;
while
	(b < 10) {
putchar(b + '0');
b++;
	}
while
	(C <= 'f') {
putchar(C);
C++;
	}
putchar('\n');
return (0);
}
