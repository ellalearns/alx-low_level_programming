#include "main.h"
#include <stdio.h>

/**
 * main - main program
 * @argc: first param
 * @argv: second param
 * Return: 1 or 0
*/
int main(int argc __attribute__((unused)), char *argv[])
{

int num1;
int num2;

if (argc < 3)
{
printf("Error\n");
return (1);
}

num1 = atoi(argv[1]);
num2 = atoi(argv[2]);

printf("%d\n", num1 * num2);

return (0);

}
