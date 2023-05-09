#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include "main.h"

int main(int argc, char *argv[])
{
    
    char *readInto;
    int fileFrom;
    int readText;

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

    readText = read(fileFrom, readInto, 1024);


    free(readInto);


    close(fileFrom);


    printf("%d", argc);
    printf("%s", argv[1]);

    return (0);
}
