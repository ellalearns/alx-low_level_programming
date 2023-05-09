#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include "main.h"

/**
 * main - function
 * @argc: argument
 * @argv: another argument
 * Return: 0
*/
int main(int argc, char *argv[])
{
    
    char *readInto;
    int fileFrom;
    int readOnText;
    unsigned int max;
    int fileTo;
    int writeText;

    max = 1024;
    

    readInto = malloc(sizeof(char) * 1024);

    if (readInto == NULL)
    {
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}


    if (argc > 3 || argc < 3)
    {
        dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
        exit(97);
    }

    fileFrom = open(argv[1], O_RDONLY);

    if (fileFrom < 0)
    {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
        exit(98);
    }

    readOnText = read(fileFrom, readInto, max);

    {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
        exit(98);
    }

    fileTo = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);

    if (fileTo < 0)
    {
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(readInto);
			exit(99);
		}

    while (readOnText > 0)
    {
        if (fileFrom < 0 || readOnText < 0)
        {
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(readInto);
			exit(98);
		}

        writeText = write(fileTo, readInto, readOnText);

        if (writeText < 0)
        {
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(readInto);
			exit(99);
		}

        readOnText = read(fileFrom, readInto, 1024);
        
        fileTo = open(argv[2], O_APPEND | O_WRONLY);
    }


    free(readInto);


    close(fileFrom);
    close(fileTo);

    return (0);
}
