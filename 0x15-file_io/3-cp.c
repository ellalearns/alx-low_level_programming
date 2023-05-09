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
    

    readInto = malloc(sizeof(char) * 1024);

    if (argc > 3 || argc < 3)
    {
        dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
        exit(97);
    }

    free(readInto);

    printf("%d", argc);
    printf("%s", argv[1]);

    return (0);
}
