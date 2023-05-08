#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

/**
 * main - program that copies file contents from one to another
*/
int main(int argc, char *argv[])
{
    char *readInto;
    int file_from;
    int file_to;
    int max;
    int readText;
    int writeText;
    int closeFile;

    if (argc > 3 || argc < 3)
    {
        dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
        exit(97);
    }

    file_from = open(argv[1], O_RDONLY);

    if (file_from == NULL || file_from < 0)
    {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s", argv[0]);
        exit(98);
    }

    max = 1024;

    readInto = malloc(sizeof(char) * 1024);

    if (readInto == NULL)
    {
        dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
        exit(99);
    }

    readText = read(file_from, readInto, max);

    if (readText < 0)
    {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s", argv[0]);
        exit(98);
    }

    file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);

    if (file_to < 0)
        {
            dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
            exit(99);
        }

    while (readText > 0)
    {
        writeText = write(file_to, readInto, readText);

        if (writeText < 0)
        {
            dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
            exit(99);
        }

        readText = read(file_from, readInto, 1024);

        file_to = open(argv[2], O_APPEND | O_WRONLY);
    }

    free(readInto);

    closeFile = close(file_to);
    
    if (closeFile < 0)
    {
            dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", closeFile);
            exit(100);
    }

    closeFile = close(file_from);

    if (closeFile < 0)
    {
            dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", closeFile);
            exit(100);
    }

    return (0);

}
