#include <stdio.h>
#include "main.h"

/**
 * times_table: print times table up to 9
*/
void times_table(void)
{
int vert, horz;
vert = 0;
while (vert < 10)
{
horz = 0;
while (horz < 10)
{
if (horz == 9)
{
printf("%d", horz * vert);
}
else
{
printf("%d, ", horz * vert);
}
horz = horz + 1;
}
printf("\n");
vert = vert + 1;
}
}
