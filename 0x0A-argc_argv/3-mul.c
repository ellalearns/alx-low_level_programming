#include "main.h"
#include <stdio.h>

/**
 * myatoi - converts a string to an integer
 * @s: the string
 * Return: integer
*/
int myatoi(char *s)
{
int digit;
int i = 0;
int n = 0;

if (s[0] == '-')
{
i = 1;
}

while (s[i])
{
digit = s[i] - '0';
n = n * 10 + digit;
i++;
}

if (s[0] == '-')
{
return (0 - n);
}

return (n);

}

/**
 * main - main program
 * @argc: first param
 * @argv: second param
 * Return: 1, 0
*/
int main(int argc, char *argv[])
{

int num1;
int num2;

if (argc < 3 || argc > 3)
{
printf("Error\n");
return (1);
}

num1 = myatoi(argv[1]);
num2 = myatoi(argv[2]);

printf("%d\n", num1 * num2);

return (0);

}
