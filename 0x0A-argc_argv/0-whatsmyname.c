#include <stdio.h>
#include "main.h"

/**
 * main - the main program
 * @argc: first program param
 * @argv: second program param
 * Return: 0
*/
int printName(int argc __attribute__((unused)), char *argv[])
{

printf("%s\n", argv[0]);
return (0);

}
