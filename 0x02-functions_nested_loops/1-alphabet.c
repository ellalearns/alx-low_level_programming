#include <stdio.h>

void print_alphabet(void);

/**
 * main - What's that?
 * Return 0: because I said so
*/
int main(void)
{
print_alphabet();
return (0);
}

/**
 * print_alphabet - What's that?
*/
void print_alphabet(void)
{
char alpha;
alpha = 'a';

while (alpha <= 'z')
{
putchar(alpha);
alpha = alpha + 1;
}
putchar('\n');
}
