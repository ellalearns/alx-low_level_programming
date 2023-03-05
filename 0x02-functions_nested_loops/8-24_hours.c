#include <stdio.h>
#include "main.h"

/**
 * jack_bauer: prints seconds... hmm...
*/
void jack_bauer(void)
{
int minutes, seconds;

minutes = 0;

while (minutes < 24)
{

seconds = 0;

while (seconds < 10)
{
if (minutes < 10)
{
putchar('0');
printf("%d", minutes);
}
else
{
printf("%d", minutes);
}
putchar(':');
putchar('0');
printf("%d\n",seconds);
seconds = seconds + 1;
}

while (seconds < 60)
{
if (minutes < 10)
{
putchar('0');
printf("%d", minutes);
}
else
{
printf("%d", minutes);
}
putchar(':');
printf("%d\n", seconds);
seconds = seconds + 1;
}

minutes = minutes + 1;

}
}
