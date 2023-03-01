#include <stdio.h>


/**
 * main - to get positive or negative print
 * Return: 0 because i said so
*/
int main()
{
    char alpha;
    alpha = 'z';
while (alpha >= 'a')
{
putchar(alpha);
alpha = alpha - 1;
}
    putchar('\n');
    return (0);
}
