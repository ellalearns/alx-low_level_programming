#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

ssize_t read_textfile(const char *filename, size_t letters)
{
    ssize_t fileToRead;
    ssize_t readText, writeText;
    char *textRead;

    /* assign correct size to the text read string*/
    textRead = malloc(sizeof(char) * letters);

    /* first step: open file in correct mode*/
    fileToRead = open(filename, O_RDONLY);

    if (fileToRead < 0)
    {
        return (0);
    }

    /* read text in filename and write into textread*/
    readText = read(fileToRead, textRead, letters);
    writeText = write(STDOUT_FILENO, textRead, readText);

    /* close file and free memory*/
    close(fileToRead);
    free(textRead);

    return (writeText);

}
