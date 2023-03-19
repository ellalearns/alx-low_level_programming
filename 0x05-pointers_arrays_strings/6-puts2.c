#include "main.h"
#include <stdio.h>

/**
 * puts2 - prints every other char in a string
 * @str: the string
*/
void puts2(char *str)
{
int i = 0;

int counter = 0;

while (str[counter])
{
counter++;
}

for (i = 0; i < counter; i = i + 2)
{
printf("%c", str[i]);
}

printf("\n");

}
