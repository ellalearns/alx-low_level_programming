#include <stdio.h>

int _islower(int c);

/**
 * main - What's that?
 * Return 0: because I said so
*/
int main(void)
{
_islower(140);
_islower('f');
return (0);
}

/**
 * _islower - What's that?
 * Return 0, 1: because I said so
*/
int _islower(int c)
{

if (c < 97 || c > 122)
{
return (0);
}
else {
return (1);
}

}
