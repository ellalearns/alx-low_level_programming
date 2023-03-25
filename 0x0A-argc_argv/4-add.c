#include "main.h"
#include <stdio.h>

/**
 * myatoi - func
 * @s: arg
 * Return: int
*/
int myatoi(char *s)
{
int digit;
int i;
int n;

i = 0;
n = 0;

if (s[0] == '-')
{
i = 1;
}

while (s[i])
{
digit = s[i] - '0';
n = (n * 10) + digit;
i++;
}

if (s[0] == '-')
{
return (0 - n);
}

return (n);

}

/**
 * isvalid - func
 * @s: arg
 * Return: int
*/
int isvalid(char *s)
{
int len;
len = 0;

while (s[len])
{
if (s[len] < '0' || s[len] > '9')
{
return (0);
}
len++;
}

return (1);

}

/**
 * main - func
 * @argc: arg
 * @argv: arg
 * Return: int
*/
int main(int argc, char *argv[])
{

int num;
int len;
int result;
int i;
len = 0;
result = 0;
i = 0;
num = 0;

if (argc == 1)
{
print("%d\n", 0);
return (1);
}

while (argv[len])
{
len++;
}

for (i = 1; i < len; i++)
{
if (isvalid(argv[i]) == 1)
{
num = myatoi(argv[i]);
result = result + num;
}
else
{
printf("Error\n");
return (1);
}

}

printf("%d\n", result);

return (0);

}
