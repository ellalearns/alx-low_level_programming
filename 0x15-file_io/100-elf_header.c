#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>

/**
 * main - function
 * @argc: argument
 * @argv: second argument
 * Return: integer
*/
int main(int argc, char *argv[])
{

    int headerFileToOpen;

    headerFileToOpen = open(argv[1], O_RDONLY);

    if (headerFileToOpen < 0)
    {
        dprintf(STDERR_FILENO, "Error: can't read the file I want to read");
        exit(98);
    }












    close(headerFileToOpen);

    printf("%d", argc);
    printf("%s", argv[1]);


    return (0);
}
