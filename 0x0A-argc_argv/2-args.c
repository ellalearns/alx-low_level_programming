#include "main.h"
#include <stdio.h>

/**
 * main - main program
 * @argc: first arg
 * @argv: second arg
 * Return: 0
*/
int main(int argc __attribute__((unused)), char *argv[])
{

int counter;
int i;

i = 0;

while (argv[i])
{
i++;
}

for (counter = 0; counter < i; counter++)
{
printf("%s\n", argv[counter]);
}

return (0);

}
