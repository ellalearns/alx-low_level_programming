#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - What's that?
 * Return 0: because I said so
*/
void print_alphabet_x10(void)
{
char alpha;
int count;

while (count < 10)
{
for (alpha = 'a'; alpha <= 'z'; alpha++)
{
putchar(alpha);
}
count++;
putchar('\n');
}
}
