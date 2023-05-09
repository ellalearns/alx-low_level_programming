#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * main - function
 * @argc: argument
 * @argv: second argument
 * Return: integer
*/
int main(int argc, char *argv[])
{
    printf("%d", argc);
    printf("%s", argv[1]);


    return (0);
}
