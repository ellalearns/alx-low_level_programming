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

    if(argc > 3 || argc < 3)
    {
        write(STDERR_FILENO, "Usage: cp file_from file_to\n", 1024);
        exit(97);
    }

    return (0);
}
