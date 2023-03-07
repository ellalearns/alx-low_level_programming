#include <stdio.h>
#include "main.h"

/**
 * print_chessboard - almost done
 * @a: fast as possible
 * Return: are you still reading these descriptions?
 */

void print_chessboard(char (*a)[8])
{
int i;
int j;

for (i = 0; i < 8; i++)
{
for (j = 0; j < 8; j++)
_putchar(a[i][j]);
_putchar('\n');
}
}
