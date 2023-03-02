#include <stdio.h>
#include "main.h"

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
