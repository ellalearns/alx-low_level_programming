#include <stdio.h>


/**
 * main - to get positive or negative print
 * Return: 0 because i said so
*/
int main(void)
{
char lc, uc;
lc = 'a';
uc = 'A';

while (lc <= 'z')
{
putchar(lc);
lc = lc + 1;
}

while (uc <= 'Z')
{
putchar(uc);
uc = uc + 1;
}
putchar('\n');
return (0);
}
